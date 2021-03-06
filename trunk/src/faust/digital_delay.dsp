declare id "dide";
declare name "Digital Delay";
declare category "Echo / Delay";
declare description "Digital Delay";

import("music.lib");
import("guitarix.lib");
import("math.lib");


guitarboost = highpass(3,80)  : peak_eq(-3,200,50): peak_eq(1.5,375,125) : peak_eq(3,2000,500) : peak_eq(-6, 4000, 1000) : peak_eq(2,8000,1000) : lowpass(3,12000) : *(0.8);
tape        = allpassn(4,(-0.6, 0.4, -0.2, 0.1));
tape2       = allpassn(4,(-0.2, -0.3, 0.4, 0.5));

sel(sl) = environment {
	 
	 a = min(2, max(0,sl)); 
	 b = min(2, max(0,sl-1)); 
     c = min(2, max(0,sl-2)); 
};

selfilter(n)  = _<: a <: b <: c :>_ with {
  a = select3(sel(n).a,_,guitarboost,_);
  b = select3(sel(n).b,_,tape,_);
  c = select3(sel(n).c,_,tape2,_);
};


tempo2note = ffunction(float B2N(int,float), "beat.h", "");

dide         = _<:*(dry),(delx(B) : *(wet)):>_ with {
  B          = hslider("Freeze[tooltip:Freeze the current delay]",0,0,1,1);
  delx(n)    = _<:(*(1.0-B):digd), *(B):>_;

  digd       = (+:(delayed:lback(B)))~(fback(B)) with {
    fback(n) = _<:select2(n, feed, freeze):>_;
    lback(n) = _<:select2(n, *(level), *(1.0)):>_;
    feed     = *(feedback): highpass(2,hifr1):lowpass(2,lofr1) : selfilter(sl);
    freeze   = *(1.0);
    sl       = hslider("mode[enum:plain|presence|tape|tape2]",0,0,3,1);

    delayed  = sdelay(N, interp, min(2^19,(tempo2note(tact,dbpm)))) with {
      dtime  = hslider("delay[tooltip:Delay Time in ms]", 2500, 0.1, 5000, 0.1)*SR/1000.0;
      dbpm   = tempo(hslider("bpm[name:delay (bpm)][tooltip:Delay in Beats per Minute]",120,24,360,1));
      tact   = hslider("notes[name:tact][enum:Dotted 1/2 note|1/2 note|1/2 note triplets|
Dotted 1/4 note|1/4 note|1/4 note triplets|Dotted 1/8 note|1/8 note|1/8 note triplets|
Dotted 1/16 note|1/16 note|1/16 note triplets|Dotted 1/32 note|1/32 note|1/32 note triplets|
Dotted 1/64 note|1/64 note|1/64 note triplets][tooltip:note setting for bpm]",4,0,17,1);

      interp = 100*SR/1000.0;
      N      = int( 2^19 ) ;
    };

    level    = vslider("level[tooltip:percentage of the delay gain level]", 50, 1, 100, 1)/100 ;
    feedback = vslider("feedback[tooltip:percentage of the feedback level in the delay loop]", 50, 1, 100, 1)/100 ;
    hifr1    = hslider("highpass [name:highpass (hz)][tooltip: highpass filter frequency in the feddback loop]" ,120 , 20, 20000, 1);
    lofr1    = hslider("howpass [name:lowpass (hz)][tooltip: lowpass filter frequency in the feddback loop]" ,12000 , 20, 20000, 1);
  };

  wet        = vslider("gain[tooltip:overall gain of the delay line in percent]",  100, 0, 120, 1) : /(100);
  dry        = 1 ;
};

process      = dide;
