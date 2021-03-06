// generated from file '../src/LV2/faust/gxechocat.dsp' by dsp2cc:
// Code generated with Faust 0.9.65 (http://faust.grame.fr)

#include "valve.h"

namespace gxechocat {

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	int 	iVec0[2];
	int 	iConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	double 	fConst4;
	double 	fConst5;
	double 	fConst6;
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;
	double 	fRec10[2];
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fConst14;
	double 	fConst15;
	double 	fVec1[2];
	double 	fConst16;
	double 	fConst17;
	double 	fConst18;
	double 	fConst19;
	double 	fConst20;
	double 	fRec9[2];
	double 	fVec2[2];
	double 	fConst21;
	double 	fConst22;
	double 	fConst23;
	double 	fConst24;
	double 	fConst25;
	double 	fRec13[2];
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fVec3[2];
	double 	fConst26;
	double 	fConst27;
	double 	fConst28;
	double 	fConst29;
	double 	fRec14[2];
	double 	fRec12[2];
	double 	fConst30;
	double 	fConst31;
	double 	fConst32;
	double 	fConst33;
	double 	fConst34;
	double 	fRec11[2];
	double 	fRec8[3];
	double 	fConst35;
	double 	fRec7[3];
	int 	IOTA;
	double *fVec4;
	double 	fConst36;
	double 	fConst37;
	double 	fConst38;
	double 	fRec21[2];
	double 	fRec20[2];
	double 	fRec19[2];
	double 	fConst39;
	double 	fRec15[2];
	double 	fRec16[2];
	double 	fRec17[2];
	double 	fRec18[2];
	FAUSTFLOAT 	fcheckbox0;
	FAUSTFLOAT	*fcheckbox0_;
	double 	fConst40;
	double 	fRec22[2];
	double 	fRec23[2];
	double 	fRec24[2];
	double 	fRec25[2];
	FAUSTFLOAT 	fcheckbox1;
	FAUSTFLOAT	*fcheckbox1_;
	double 	fConst41;
	double 	fRec26[2];
	double 	fRec27[2];
	double 	fRec28[2];
	double 	fRec29[2];
	FAUSTFLOAT 	fcheckbox2;
	FAUSTFLOAT	*fcheckbox2_;
	double 	fVec5[2];
	double 	fConst42;
	double 	fConst43;
	double 	fConst44;
	double 	fConst45;
	double 	fRec6[2];
	double 	fRec5[2];
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	double 	fVec6[2];
	double 	fRec30[2];
	double 	fRec4[2];
	double 	fRec3[2];
	double 	fVec7[2];
	double 	fRec31[2];
	double 	fRec2[2];
	double 	fRec1[2];
	double 	fRec0[3];
	FAUSTFLOAT 	fslider3;
	FAUSTFLOAT	*fslider3_;
	bool mem_allocated;
	void mem_alloc();
	void mem_free();
	void connect(uint32_t port,void* data);
	void clear_state_f();
	int activate(bool start);
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static int activate_static(bool start, PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2(),
	  fVec4(0),
	  mem_allocated(false) {
	version = PLUGINLV2_VERSION;
	id = "gxechocat";
	name = N_("Tape Delay");
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = activate_static;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<2; i++) iVec0[i] = 0;
	for (int i=0; i<2; i++) fRec10[i] = 0;
	for (int i=0; i<2; i++) fVec1[i] = 0;
	for (int i=0; i<2; i++) fRec9[i] = 0;
	for (int i=0; i<2; i++) fVec2[i] = 0;
	for (int i=0; i<2; i++) fRec13[i] = 0;
	for (int i=0; i<2; i++) fVec3[i] = 0;
	for (int i=0; i<2; i++) fRec14[i] = 0;
	for (int i=0; i<2; i++) fRec12[i] = 0;
	for (int i=0; i<2; i++) fRec11[i] = 0;
	for (int i=0; i<3; i++) fRec8[i] = 0;
	for (int i=0; i<3; i++) fRec7[i] = 0;
	for (int i=0; i<524288; i++) fVec4[i] = 0;
	for (int i=0; i<2; i++) fRec21[i] = 0;
	for (int i=0; i<2; i++) fRec20[i] = 0;
	for (int i=0; i<2; i++) fRec19[i] = 0;
	for (int i=0; i<2; i++) fRec15[i] = 0;
	for (int i=0; i<2; i++) fRec16[i] = 0;
	for (int i=0; i<2; i++) fRec17[i] = 0;
	for (int i=0; i<2; i++) fRec18[i] = 0;
	for (int i=0; i<2; i++) fRec22[i] = 0;
	for (int i=0; i<2; i++) fRec23[i] = 0;
	for (int i=0; i<2; i++) fRec24[i] = 0;
	for (int i=0; i<2; i++) fRec25[i] = 0;
	for (int i=0; i<2; i++) fRec26[i] = 0;
	for (int i=0; i<2; i++) fRec27[i] = 0;
	for (int i=0; i<2; i++) fRec28[i] = 0;
	for (int i=0; i<2; i++) fRec29[i] = 0;
	for (int i=0; i<2; i++) fVec5[i] = 0;
	for (int i=0; i<2; i++) fRec6[i] = 0;
	for (int i=0; i<2; i++) fRec5[i] = 0;
	for (int i=0; i<2; i++) fVec6[i] = 0;
	for (int i=0; i<2; i++) fRec30[i] = 0;
	for (int i=0; i<2; i++) fRec4[i] = 0;
	for (int i=0; i<2; i++) fRec3[i] = 0;
	for (int i=0; i<2; i++) fVec7[i] = 0;
	for (int i=0; i<2; i++) fRec31[i] = 0;
	for (int i=0; i<2; i++) fRec2[i] = 0;
	for (int i=0; i<2; i++) fRec1[i] = 0;
	for (int i=0; i<3; i++) fRec0[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	iConst0 = min(192000, max(1, fSamplingFreq));
	fConst1 = tan((125.66370614359172 / double(iConst0)));
	fConst2 = (1.0 / faustpower<2>(fConst1));
	fConst3 = (2 * (1 - fConst2));
	fConst4 = (1.0 / fConst1);
	fConst5 = (1 + ((fConst4 - 0.7653668647301795) / fConst1));
	fConst6 = (1 + ((0.7653668647301795 + fConst4) / fConst1));
	fConst7 = (1.0 / fConst6);
	fConst8 = (1 + ((fConst4 - 1.8477590650225735) / fConst1));
	fConst9 = (1.0 / (1 + ((fConst4 + 1.8477590650225735) / fConst1)));
	fConst10 = (1.0 / tan((23561.94490192345 / double(iConst0))));
	fConst11 = (1 + fConst10);
	fConst12 = (1.0 / fConst11);
	fConst13 = (0 - ((1 - fConst10) / fConst11));
	fConst14 = tan((392.6990816987241 / double(iConst0)));
	fConst15 = (0.5 / fConst14);
	fConst16 = (1.0 / fConst14);
	fConst17 = (0 - fConst16);
	fConst18 = (1 + fConst16);
	fConst19 = (1.0 / fConst18);
	fConst20 = (0 - ((1 - fConst16) / fConst18));
	fConst21 = (1.0 / tan((251.32741228718345 / double(iConst0))));
	fConst22 = (0 - fConst21);
	fConst23 = (1 + fConst21);
	fConst24 = (1.0 / fConst23);
	fConst25 = (0 - ((1 - fConst21) / fConst23));
	fConst26 = (1.0 / tan((6.5973445725385655 / double(iConst0))));
	fConst27 = (1 + fConst26);
	fConst28 = (1.0 / fConst27);
	fConst29 = (0 - ((1 - fConst26) / fConst27));
	fConst30 = (1.0 / tan((97.38937226128358 / double(iConst0))));
	fConst31 = (0 - fConst30);
	fConst32 = (1 + fConst30);
	fConst33 = (0.025 / fConst32);
	fConst34 = (0 - ((1 - fConst30) / fConst32));
	fConst35 = (2 * (0 - fConst2));
	IOTA = 0;
	fConst36 = (1e+01 / double(iConst0));
	fConst37 = (0 - fConst36);
	fConst38 = (25.132741228718345 / double(iConst0));
	fConst39 = (4.5 * iConst0);
	fConst40 = (3.0 * iConst0);
	fConst41 = (1.5 * iConst0);
	fConst42 = (1.0 / tan((20420.352248333656 / double(iConst0))));
	fConst43 = (1 + fConst42);
	fConst44 = (1.0 / (fConst43 * fConst6));
	fConst45 = (0 - ((1 - fConst42) / fConst43));
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void Dsp::mem_alloc()
{
	if (!fVec4) fVec4 = new double[524288];
	mem_allocated = true;
}

void Dsp::mem_free()
{
	mem_allocated = false;
	if (fVec4) { delete fVec4; fVec4 = 0; }
}

int Dsp::activate(bool start)
{
	if (start) {
		if (!mem_allocated) {
			mem_alloc();
			clear_state_f();
		}
	} else if (mem_allocated) {
		mem_free();
	}
	return 0;
}

int Dsp::activate_static(bool start, PluginLV2 *p)
{
	return static_cast<Dsp*>(p)->activate(start);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fslider0 (*fslider0_)
#define fslider1 (*fslider1_)
#define fcheckbox0 (*fcheckbox0_)
#define fcheckbox1 (*fcheckbox1_)
#define fcheckbox2 (*fcheckbox2_)
#define fslider2 (*fslider2_)
#define fslider3 (*fslider3_)
	double 	fSlow0 = double(fslider0);
	double 	fSlow1 = (fConst15 * fSlow0);
	double 	fSlow2 = (0.5 * fSlow0);
	double 	fSlow3 = double(fslider1);
	double 	fSlow4 = double(fcheckbox0);
	double 	fSlow5 = double(fcheckbox1);
	double 	fSlow6 = double(fcheckbox2);
	double 	fSlow7 = double(fslider2);
	double 	fSlow8 = double(fslider3);
	for (int i=0; i<count; i++) {
		iVec0[0] = 1;
		fRec10[0] = ((fConst13 * fRec10[1]) + (fConst12 * (fRec0[1] + fRec0[2])));
		fVec1[0] = (fSlow2 * fRec10[0]);
		fRec9[0] = ((fConst20 * fRec9[1]) + (fConst19 * ((fConst17 * fVec1[1]) + (fSlow1 * fRec10[0]))));
		double fTemp0 = (double)input0[i];
		fVec2[0] = fTemp0;
		fRec13[0] = ((fConst25 * fRec13[1]) + (fConst24 * ((fConst21 * fVec2[0]) + (fConst22 * fVec2[1]))));
		double fTemp1 = (1e-15 + (0.015 * fRec12[1]));
		fVec3[0] = fTemp1;
		fRec14[0] = ((fConst29 * fRec14[1]) + (fConst28 * (fVec3[0] + fVec3[1])));
		fRec12[0] = (Ftube(TUBE_TABLE_12AX7_68k, ((fRec14[0] + (fSlow3 * fRec13[0])) - 1.204540999999999)) - 169.69726666666665);
		fRec11[0] = ((fConst34 * fRec11[1]) + (fConst33 * ((fConst30 * fRec12[0]) + (fConst31 * fRec12[1]))));
		fRec8[0] = ((fRec11[0] + fRec9[0]) - (fConst9 * ((fConst8 * fRec8[2]) + (fConst3 * fRec8[1]))));
		fRec7[0] = ((fConst9 * (((fConst2 * fRec8[0]) + (fConst35 * fRec8[1])) + (fConst2 * fRec8[2]))) - (fConst7 * ((fConst5 * fRec7[2]) + (fConst3 * fRec7[1]))));
		double fTemp2 = (((fConst2 * fRec7[0]) + (fConst35 * fRec7[1])) + (fConst2 * fRec7[2]));
		fVec4[IOTA&524287] = fTemp2;
		fRec21[0] = (fRec21[1] + (fConst38 * (0 - fRec19[1])));
		fRec20[0] = ((1 + (fRec20[1] + (fConst38 * fRec21[0]))) - iVec0[1]);
		fRec19[0] = fRec20[0];
		double fTemp3 = (7.5 + (0.005 * max((double)0, (0.5 * (1 + fRec19[0])))));
		double fTemp4 = (fConst39 / fTemp3);
		double fTemp5 = ((int((fRec15[1] != 0.0)))?((int(((fRec16[1] > 0.0) & (fRec16[1] < 1.0))))?fRec15[1]:0):((int(((fRec16[1] == 0.0) & (fTemp4 != fRec17[1]))))?fConst36:((int(((fRec16[1] == 1.0) & (fTemp4 != fRec18[1]))))?fConst37:0)));
		fRec15[0] = fTemp5;
		fRec16[0] = max(0.0, min(1.0, (fRec16[1] + fTemp5)));
		fRec17[0] = ((int(((fRec16[1] >= 1.0) & (fRec18[1] != fTemp4))))?fTemp4:fRec17[1]);
		fRec18[0] = ((int(((fRec16[1] <= 0.0) & (fRec17[1] != fTemp4))))?fTemp4:fRec18[1]);
		double fTemp6 = (fConst40 / fTemp3);
		double fTemp7 = ((int((fRec22[1] != 0.0)))?((int(((fRec23[1] > 0.0) & (fRec23[1] < 1.0))))?fRec22[1]:0):((int(((fRec23[1] == 0.0) & (fTemp6 != fRec24[1]))))?fConst36:((int(((fRec23[1] == 1.0) & (fTemp6 != fRec25[1]))))?fConst37:0)));
		fRec22[0] = fTemp7;
		fRec23[0] = max(0.0, min(1.0, (fRec23[1] + fTemp7)));
		fRec24[0] = ((int(((fRec23[1] >= 1.0) & (fRec25[1] != fTemp6))))?fTemp6:fRec24[1]);
		fRec25[0] = ((int(((fRec23[1] <= 0.0) & (fRec24[1] != fTemp6))))?fTemp6:fRec25[1]);
		double fTemp8 = (fConst41 / fTemp3);
		double fTemp9 = ((int((fRec26[1] != 0.0)))?((int(((fRec27[1] > 0.0) & (fRec27[1] < 1.0))))?fRec26[1]:0):((int(((fRec27[1] == 0.0) & (fTemp8 != fRec28[1]))))?fConst36:((int(((fRec27[1] == 1.0) & (fTemp8 != fRec29[1]))))?fConst37:0)));
		fRec26[0] = fTemp9;
		fRec27[0] = max(0.0, min(1.0, (fRec27[1] + fTemp9)));
		fRec28[0] = ((int(((fRec27[1] >= 1.0) & (fRec29[1] != fTemp8))))?fTemp8:fRec28[1]);
		fRec29[0] = ((int(((fRec27[1] <= 0.0) & (fRec28[1] != fTemp8))))?fTemp8:fRec29[1]);
		double fTemp10 = (((fSlow6 * (((1.0 - fRec27[0]) * fVec4[(IOTA-int((int(fRec28[0]) & 524287)))&524287]) + (fRec27[0] * fVec4[(IOTA-int((int(fRec29[0]) & 524287)))&524287]))) + (fSlow5 * (((1.0 - fRec23[0]) * fVec4[(IOTA-int((int(fRec24[0]) & 524287)))&524287]) + (fRec23[0] * fVec4[(IOTA-int((int(fRec25[0]) & 524287)))&524287])))) + (fSlow4 * (((1.0 - fRec16[0]) * fVec4[(IOTA-int((int(fRec17[0]) & 524287)))&524287]) + (fRec16[0] * fVec4[(IOTA-int((int(fRec18[0]) & 524287)))&524287]))));
		fVec5[0] = fTemp10;
		fRec6[0] = ((fConst45 * fRec6[1]) + (fConst44 * (fVec5[0] + fVec5[1])));
		fRec5[0] = ((fRec6[0] + (0.995 * fRec5[1])) - fRec6[1]);
		double fTemp11 = (1e-15 + (0.033 * fRec4[1]));
		fVec6[0] = fTemp11;
		fRec30[0] = ((fConst29 * fRec30[1]) + (fConst28 * (fVec6[0] + fVec6[1])));
		fRec4[0] = (Ftube(TUBE_TABLE_12AX7_250k, ((fRec30[0] + (fSlow7 * fRec5[0])) - 2.637333999999999)) - 170.08078787878787);
		fRec3[0] = ((fConst34 * fRec3[1]) + (fConst33 * ((fConst30 * fRec4[0]) + (fConst31 * fRec4[1]))));
		double fTemp12 = (1e-15 + (0.022 * fRec2[1]));
		fVec7[0] = fTemp12;
		fRec31[0] = ((fConst29 * fRec31[1]) + (fConst28 * (fVec7[0] + fVec7[1])));
		fRec2[0] = (Ftube(TUBE_TABLE_12AX7_250k, ((fRec31[0] + fRec3[0]) - 2.4268639999999992)) - 139.688);
		fRec1[0] = ((fConst34 * fRec1[1]) + (fConst33 * ((fConst30 * fRec2[0]) + (fConst31 * fRec2[1]))));
		fRec0[0] = fRec1[0];
		output0[i] = (FAUSTFLOAT)(fSlow8 * (fRec11[0] + fRec0[0]));
		// post processing
		fRec0[2] = fRec0[1]; fRec0[1] = fRec0[0];
		fRec1[1] = fRec1[0];
		fRec2[1] = fRec2[0];
		fRec31[1] = fRec31[0];
		fVec7[1] = fVec7[0];
		fRec3[1] = fRec3[0];
		fRec4[1] = fRec4[0];
		fRec30[1] = fRec30[0];
		fVec6[1] = fVec6[0];
		fRec5[1] = fRec5[0];
		fRec6[1] = fRec6[0];
		fVec5[1] = fVec5[0];
		fRec29[1] = fRec29[0];
		fRec28[1] = fRec28[0];
		fRec27[1] = fRec27[0];
		fRec26[1] = fRec26[0];
		fRec25[1] = fRec25[0];
		fRec24[1] = fRec24[0];
		fRec23[1] = fRec23[0];
		fRec22[1] = fRec22[0];
		fRec18[1] = fRec18[0];
		fRec17[1] = fRec17[0];
		fRec16[1] = fRec16[0];
		fRec15[1] = fRec15[0];
		fRec19[1] = fRec19[0];
		fRec20[1] = fRec20[0];
		fRec21[1] = fRec21[0];
		IOTA = IOTA+1;
		fRec7[2] = fRec7[1]; fRec7[1] = fRec7[0];
		fRec8[2] = fRec8[1]; fRec8[1] = fRec8[0];
		fRec11[1] = fRec11[0];
		fRec12[1] = fRec12[0];
		fRec14[1] = fRec14[0];
		fVec3[1] = fVec3[0];
		fRec13[1] = fRec13[0];
		fVec2[1] = fVec2[0];
		fRec9[1] = fRec9[0];
		fVec1[1] = fVec1[0];
		fRec10[1] = fRec10[0];
		iVec0[1] = iVec0[0];
	}
#undef fslider0
#undef fslider1
#undef fcheckbox0
#undef fcheckbox1
#undef fcheckbox2
#undef fslider2
#undef fslider3
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case SUSTAIN: 
		fslider0_ = (float*)data; // , 0.0, 0.0, 0.95, 0.01 
		break;
	case INPUTGAIN: 
		fslider1_ = (float*)data; // , 0.0, 0.0, 1.0, 0.01 
		break;
	case OUTPUTGAIN: 
		fslider3_ = (float*)data; // , 0.0, 0.0, 1.0, 0.01 
		break;
	case SWELL: 
		fslider2_ = (float*)data; // , 0.0, 0.0, 1.0, 0.1 
		break;
	case HEAD1: 
		fcheckbox2_ = (float*)data; // , 0.0, 0.0, 1.0, 1.0 
		break;
	case HEAD2: 
		fcheckbox1_ = (float*)data; // , 0.0, 0.0, 1.0, 1.0 
		break;
	case HEAD3: 
		fcheckbox0_ = (float*)data; // , 0.0, 0.0, 1.0, 1.0 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
   SUSTAIN, 
   INPUTGAIN, 
   OUTPUTGAIN, 
   SWELL, 
   HEAD1, 
   HEAD2, 
   HEAD3, 
} PortIndex;
*/

} // end namespace gxechocat
