// generated from file '../src/LV2/faust/gxamp14_stereo.dsp' by dsp2cc:
// Code generated with Faust 0.9.65 (http://faust.grame.fr)

#include "valve.h"

namespace gxamp14_stereo {

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec0[2];
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec7[2];
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	double 	fRec10[2];
	double 	fVec0[2];
	int 	iConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	double 	fConst4;
	double 	fRec11[2];
	FAUSTFLOAT 	fslider3;
	FAUSTFLOAT	*fslider3_;
	double 	fConst5;
	double 	fConst6;
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;
	double 	fConst14;
	double 	fConst15;
	double 	fConst16;
	double 	fConst17;
	double 	fConst18;
	double 	fConst19;
	double 	fConst20;
	double 	fConst21;
	double 	fConst22;
	double 	fConst23;
	double 	fConst24;
	double 	fConst25;
	double 	fConst26;
	double 	fConst27;
	double 	fConst28;
	double 	fConst29;
	double 	fConst30;
	double 	fRec20[3];
	double 	fVec1[2];
	double 	fConst31;
	double 	fConst32;
	double 	fConst33;
	double 	fConst34;
	double 	fConst35;
	double 	fRec19[2];
	double 	fConst36;
	double 	fConst37;
	double 	fConst38;
	double 	fRec18[2];
	double 	fRec17[3];
	double 	fVec2[2];
	double 	fConst39;
	double 	fConst40;
	double 	fConst41;
	double 	fRec16[2];
	double 	fRec15[3];
	double 	fVec3[2];
	double 	fConst42;
	double 	fConst43;
	double 	fConst44;
	double 	fRec14[2];
	double 	fRec13[3];
	double 	fConst45;
	double 	fConst46;
	double 	fConst47;
	double 	fRec23[2];
	double 	fRec22[3];
	double 	fConst48;
	double 	fRec21[3];
	double 	fConst49;
	double 	fConst50;
	double 	fConst51;
	double 	fRec27[2];
	double 	fRec26[3];
	double 	fConst52;
	double 	fRec25[3];
	double 	fRec24[3];
	double 	fConst53;
	double 	fRec29[2];
	double 	fRec28[3];
	double 	fConst54;
	double 	fVec4[2];
	double 	fConst55;
	double 	fConst56;
	double 	fConst57;
	double 	fConst58;
	double 	fRec12[2];
	double 	fRec9[2];
	double 	fConst59;
	double 	fRec8[2];
	double 	fVec5[2];
	double 	fRec6[2];
	double 	fVec6[2];
	double 	fConst60;
	double 	fConst61;
	double 	fConst62;
	double 	fConst63;
	double 	fRec30[2];
	double 	fRec5[2];
	double 	fRec4[2];
	double 	fVec7[2];
	double 	fRec3[2];
	double 	fVec8[2];
	double 	fConst64;
	double 	fConst65;
	double 	fConst66;
	double 	fConst67;
	double 	fRec31[2];
	double 	fRec2[2];
	double 	fRec1[2];
	double 	fVec9[2];
	double 	fRec40[2];
	double 	fRec49[3];
	double 	fVec10[2];
	double 	fRec48[2];
	double 	fRec47[2];
	double 	fRec46[3];
	double 	fVec11[2];
	double 	fRec45[2];
	double 	fRec44[3];
	double 	fVec12[2];
	double 	fRec43[2];
	double 	fRec42[3];
	double 	fRec52[2];
	double 	fRec51[3];
	double 	fRec50[3];
	double 	fRec56[2];
	double 	fRec55[3];
	double 	fRec54[3];
	double 	fRec53[3];
	double 	fRec58[2];
	double 	fRec57[3];
	double 	fVec13[2];
	double 	fRec41[2];
	double 	fRec39[2];
	double 	fRec38[2];
	double 	fVec14[2];
	double 	fRec37[2];
	double 	fVec15[2];
	double 	fRec59[2];
	double 	fRec36[2];
	double 	fRec35[2];
	double 	fVec16[2];
	double 	fRec34[2];
	double 	fVec17[2];
	double 	fRec60[2];
	double 	fRec33[2];
	double 	fRec32[2];
	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *input1, FAUSTFLOAT *output0, FAUSTFLOAT *output1);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *input1, FAUSTFLOAT *output0, FAUSTFLOAT *output1, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "12AT7";
	name = N_("12AT7");
	mono_audio = 0;
	stereo_audio = compute_static;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<2; i++) fRec0[i] = 0;
	for (int i=0; i<2; i++) fRec7[i] = 0;
	for (int i=0; i<2; i++) fRec10[i] = 0;
	for (int i=0; i<2; i++) fVec0[i] = 0;
	for (int i=0; i<2; i++) fRec11[i] = 0;
	for (int i=0; i<3; i++) fRec20[i] = 0;
	for (int i=0; i<2; i++) fVec1[i] = 0;
	for (int i=0; i<2; i++) fRec19[i] = 0;
	for (int i=0; i<2; i++) fRec18[i] = 0;
	for (int i=0; i<3; i++) fRec17[i] = 0;
	for (int i=0; i<2; i++) fVec2[i] = 0;
	for (int i=0; i<2; i++) fRec16[i] = 0;
	for (int i=0; i<3; i++) fRec15[i] = 0;
	for (int i=0; i<2; i++) fVec3[i] = 0;
	for (int i=0; i<2; i++) fRec14[i] = 0;
	for (int i=0; i<3; i++) fRec13[i] = 0;
	for (int i=0; i<2; i++) fRec23[i] = 0;
	for (int i=0; i<3; i++) fRec22[i] = 0;
	for (int i=0; i<3; i++) fRec21[i] = 0;
	for (int i=0; i<2; i++) fRec27[i] = 0;
	for (int i=0; i<3; i++) fRec26[i] = 0;
	for (int i=0; i<3; i++) fRec25[i] = 0;
	for (int i=0; i<3; i++) fRec24[i] = 0;
	for (int i=0; i<2; i++) fRec29[i] = 0;
	for (int i=0; i<3; i++) fRec28[i] = 0;
	for (int i=0; i<2; i++) fVec4[i] = 0;
	for (int i=0; i<2; i++) fRec12[i] = 0;
	for (int i=0; i<2; i++) fRec9[i] = 0;
	for (int i=0; i<2; i++) fRec8[i] = 0;
	for (int i=0; i<2; i++) fVec5[i] = 0;
	for (int i=0; i<2; i++) fRec6[i] = 0;
	for (int i=0; i<2; i++) fVec6[i] = 0;
	for (int i=0; i<2; i++) fRec30[i] = 0;
	for (int i=0; i<2; i++) fRec5[i] = 0;
	for (int i=0; i<2; i++) fRec4[i] = 0;
	for (int i=0; i<2; i++) fVec7[i] = 0;
	for (int i=0; i<2; i++) fRec3[i] = 0;
	for (int i=0; i<2; i++) fVec8[i] = 0;
	for (int i=0; i<2; i++) fRec31[i] = 0;
	for (int i=0; i<2; i++) fRec2[i] = 0;
	for (int i=0; i<2; i++) fRec1[i] = 0;
	for (int i=0; i<2; i++) fVec9[i] = 0;
	for (int i=0; i<2; i++) fRec40[i] = 0;
	for (int i=0; i<3; i++) fRec49[i] = 0;
	for (int i=0; i<2; i++) fVec10[i] = 0;
	for (int i=0; i<2; i++) fRec48[i] = 0;
	for (int i=0; i<2; i++) fRec47[i] = 0;
	for (int i=0; i<3; i++) fRec46[i] = 0;
	for (int i=0; i<2; i++) fVec11[i] = 0;
	for (int i=0; i<2; i++) fRec45[i] = 0;
	for (int i=0; i<3; i++) fRec44[i] = 0;
	for (int i=0; i<2; i++) fVec12[i] = 0;
	for (int i=0; i<2; i++) fRec43[i] = 0;
	for (int i=0; i<3; i++) fRec42[i] = 0;
	for (int i=0; i<2; i++) fRec52[i] = 0;
	for (int i=0; i<3; i++) fRec51[i] = 0;
	for (int i=0; i<3; i++) fRec50[i] = 0;
	for (int i=0; i<2; i++) fRec56[i] = 0;
	for (int i=0; i<3; i++) fRec55[i] = 0;
	for (int i=0; i<3; i++) fRec54[i] = 0;
	for (int i=0; i<3; i++) fRec53[i] = 0;
	for (int i=0; i<2; i++) fRec58[i] = 0;
	for (int i=0; i<3; i++) fRec57[i] = 0;
	for (int i=0; i<2; i++) fVec13[i] = 0;
	for (int i=0; i<2; i++) fRec41[i] = 0;
	for (int i=0; i<2; i++) fRec39[i] = 0;
	for (int i=0; i<2; i++) fRec38[i] = 0;
	for (int i=0; i<2; i++) fVec14[i] = 0;
	for (int i=0; i<2; i++) fRec37[i] = 0;
	for (int i=0; i<2; i++) fVec15[i] = 0;
	for (int i=0; i<2; i++) fRec59[i] = 0;
	for (int i=0; i<2; i++) fRec36[i] = 0;
	for (int i=0; i<2; i++) fRec35[i] = 0;
	for (int i=0; i<2; i++) fVec16[i] = 0;
	for (int i=0; i<2; i++) fRec34[i] = 0;
	for (int i=0; i<2; i++) fVec17[i] = 0;
	for (int i=0; i<2; i++) fRec60[i] = 0;
	for (int i=0; i<2; i++) fRec33[i] = 0;
	for (int i=0; i<2; i++) fRec32[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	iConst0 = min(192000, max(1, fSamplingFreq));
	fConst1 = (1.0 / tan((270.1769682087222 / double(iConst0))));
	fConst2 = (1 + fConst1);
	fConst3 = (1.0 / fConst2);
	fConst4 = (0 - ((1 - fConst1) / fConst2));
	fConst5 = tan((942.4777960769379 / double(iConst0)));
	fConst6 = (1.0 / faustpower<2>(fConst5));
	fConst7 = (2 * (1 - fConst6));
	fConst8 = (1.0 / fConst5);
	fConst9 = (1 + ((fConst8 - 1.0000000000000004) / fConst5));
	fConst10 = (1.0 / (1 + ((fConst8 + 1.0000000000000004) / fConst5)));
	fConst11 = tan((3769.9111843077517 / double(iConst0)));
	fConst12 = (1.0 / faustpower<2>(fConst11));
	fConst13 = (2 * (1 - fConst12));
	fConst14 = (1.0 / fConst11);
	fConst15 = (1 + ((fConst14 - 1.0000000000000004) / fConst11));
	fConst16 = (1 + ((fConst14 + 1.0000000000000004) / fConst11));
	fConst17 = (1.0 / fConst16);
	fConst18 = tan((10053.096491487338 / double(iConst0)));
	fConst19 = (1.0 / faustpower<2>(fConst18));
	fConst20 = (2 * (1 - fConst19));
	fConst21 = (1.0 / fConst18);
	fConst22 = (1 + ((fConst21 - 1.0000000000000004) / fConst18));
	fConst23 = (1 + ((1.0000000000000004 + fConst21) / fConst18));
	fConst24 = (1.0 / fConst23);
	fConst25 = tan((47123.8898038469 / double(iConst0)));
	fConst26 = (2 * (1 - (1.0 / faustpower<2>(fConst25))));
	fConst27 = (1.0 / fConst25);
	fConst28 = (1 + ((fConst27 - 1.414213562373095) / fConst25));
	fConst29 = (1 + ((1.414213562373095 + fConst27) / fConst25));
	fConst30 = (1.0 / fConst29);
	fConst31 = (1.0 / tan((97.38937226128358 / double(iConst0))));
	fConst32 = (0 - fConst31);
	fConst33 = (1 + fConst31);
	fConst34 = (1.0 / (fConst33 * fConst29));
	fConst35 = (0 - ((1 - fConst31) / fConst33));
	fConst36 = (1 + fConst21);
	fConst37 = (1.0 / fConst36);
	fConst38 = (0 - ((1 - fConst21) / fConst36));
	fConst39 = (1 + fConst14);
	fConst40 = (1.0 / (fConst39 * fConst23));
	fConst41 = (0 - ((1 - fConst14) / fConst39));
	fConst42 = (1 + fConst8);
	fConst43 = (1.0 / (fConst42 * fConst16));
	fConst44 = (0 - ((1 - fConst8) / fConst42));
	fConst45 = (1 + ((fConst8 - 1.0) / fConst5));
	fConst46 = (1.0 / (1 + ((1.0 + fConst8) / fConst5)));
	fConst47 = (0 - fConst14);
	fConst48 = (2 * (0 - fConst12));
	fConst49 = (1 + ((fConst14 - 1.0) / fConst11));
	fConst50 = (1.0 / (1 + ((1.0 + fConst14) / fConst11)));
	fConst51 = (0 - fConst21);
	fConst52 = (2 * (0 - fConst19));
	fConst53 = (0 - fConst8);
	fConst54 = (2 * (0 - fConst6));
	fConst55 = (1.0 / tan((20517.741620594938 / double(iConst0))));
	fConst56 = (1 + fConst55);
	fConst57 = (1.0 / fConst56);
	fConst58 = (0 - ((1 - fConst55) / fConst56));
	fConst59 = (0.025 / fConst33);
	fConst60 = (1.0 / tan((414.6902302738527 / double(iConst0))));
	fConst61 = (1 + fConst60);
	fConst62 = (1.0 / fConst61);
	fConst63 = (0 - ((1 - fConst60) / fConst61));
	fConst64 = (1.0 / tan((609.4689747964198 / double(iConst0))));
	fConst65 = (1 + fConst64);
	fConst66 = (1.0 / fConst65);
	fConst67 = (0 - ((1 - fConst64) / fConst65));
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *input1, FAUSTFLOAT *output0, FAUSTFLOAT *output1)
{
#define fslider0 (*fslider0_)
#define fslider1 (*fslider1_)
#define fslider2 (*fslider2_)
#define fslider3 (*fslider3_)
	double 	fSlow0 = (0.0010000000000000009 * pow(10,(0.05 * double(fslider0))));
	double 	fSlow1 = (0.0010000000000000009 * pow(10,(0.05 * double(fslider1))));
	double 	fSlow2 = (1.000000000000001e-05 * double(fslider2));
	double 	fSlow3 = double(fslider3);
	double 	fSlow4 = (1.25 * fSlow3);
	double 	fSlow5 = (2 * (fSlow3 - 0.5));
	double 	fSlow6 = (1 - max((double)0, fSlow5));
	double 	fSlow7 = (fConst10 * pow(1e+01,(0.9 * fSlow3)));
	double 	fSlow8 = pow(1e+01,(1.2 * fSlow3));
	double 	fSlow9 = pow(1e+01,(0.8 * fSlow3));
	double 	fSlow10 = (fConst10 * pow(1e+01,(2 * fSlow3)));
	double 	fSlow11 = (1 - max((double)0, (0 - fSlow5)));
	for (int i=0; i<count; i++) {
		fRec0[0] = ((0.999 * fRec0[1]) + fSlow0);
		fRec7[0] = ((0.999 * fRec7[1]) + fSlow1);
		fRec10[0] = (fSlow2 + (0.999 * fRec10[1]));
		double fTemp0 = (1 - fRec10[0]);
		double fTemp1 = (double)input0[i];
		double fTemp2 = (fTemp1 * fTemp0);
		double fTemp3 = (1e-15 + (0.027 * fRec9[1]));
		fVec0[0] = fTemp3;
		fRec11[0] = ((fConst4 * fRec11[1]) + (fConst3 * (fVec0[0] + fVec0[1])));
		double fTemp4 = (1e-15 + fTemp2);
		double fTemp5 = (1e-15 + (fTemp1 * fRec10[0]));
		fRec20[0] = (fTemp5 - (fConst30 * ((fConst28 * fRec20[2]) + (fConst26 * fRec20[1]))));
		double fTemp6 = (fRec20[2] + (fRec20[0] + (2 * fRec20[1])));
		fVec1[0] = fTemp6;
		fRec19[0] = ((fConst35 * fRec19[1]) + (fConst34 * ((fConst31 * fVec1[0]) + (fConst32 * fVec1[1]))));
		fRec18[0] = ((fConst38 * fRec18[1]) + (fConst37 * (fRec19[0] + fRec19[1])));
		fRec17[0] = (fRec18[0] - (fConst24 * ((fConst22 * fRec17[2]) + (fConst20 * fRec17[1]))));
		double fTemp7 = (fRec17[2] + (fRec17[0] + (2 * fRec17[1])));
		fVec2[0] = fTemp7;
		fRec16[0] = ((fConst41 * fRec16[1]) + (fConst40 * (fVec2[0] + fVec2[1])));
		fRec15[0] = (fRec16[0] - (fConst17 * ((fConst15 * fRec15[2]) + (fConst13 * fRec15[1]))));
		double fTemp8 = (fRec15[2] + (fRec15[0] + (2 * fRec15[1])));
		fVec3[0] = fTemp8;
		fRec14[0] = ((fConst44 * fRec14[1]) + (fConst43 * (fVec3[0] + fVec3[1])));
		fRec13[0] = (fRec14[0] - (fConst10 * ((fConst9 * fRec13[2]) + (fConst7 * fRec13[1]))));
		double fTemp9 = max((double)-1, min((double)1, (fSlow7 * (fRec13[2] + (fRec13[0] + (2 * fRec13[1]))))));
		double fTemp10 = (fConst7 * fRec21[1]);
		fRec23[0] = ((fConst41 * fRec23[1]) + (fConst40 * ((fConst14 * fVec2[0]) + (fConst47 * fVec2[1]))));
		fRec22[0] = (fRec23[0] - (fConst17 * ((fConst15 * fRec22[2]) + (fConst13 * fRec22[1]))));
		fRec21[0] = ((fConst17 * (((fConst12 * fRec22[0]) + (fConst48 * fRec22[1])) + (fConst12 * fRec22[2]))) - (fConst46 * ((fConst45 * fRec21[2]) + fTemp10)));
		double fTemp11 = max((double)-1, min((double)1, (fSlow8 * (fRec21[2] + (fConst46 * (fTemp10 + (fConst45 * fRec21[0])))))));
		double fTemp12 = (fConst7 * fRec24[1]);
		double fTemp13 = (fConst13 * fRec25[1]);
		fRec27[0] = ((fConst38 * fRec27[1]) + (fConst37 * ((fConst21 * fRec19[0]) + (fConst51 * fRec19[1]))));
		fRec26[0] = (fRec27[0] - (fConst24 * ((fConst22 * fRec26[2]) + (fConst20 * fRec26[1]))));
		fRec25[0] = ((fConst24 * (((fConst19 * fRec26[0]) + (fConst52 * fRec26[1])) + (fConst19 * fRec26[2]))) - (fConst50 * ((fConst49 * fRec25[2]) + fTemp13)));
		fRec24[0] = ((fRec25[2] + (fConst50 * (fTemp13 + (fConst49 * fRec25[0])))) - (fConst46 * ((fConst45 * fRec24[2]) + fTemp12)));
		double fTemp14 = max((double)-1, min((double)1, (fSlow9 * (fRec24[2] + (fConst46 * (fTemp12 + (fConst45 * fRec24[0])))))));
		fRec29[0] = ((fConst44 * fRec29[1]) + (fConst43 * ((fConst8 * fVec3[0]) + (fConst53 * fVec3[1]))));
		fRec28[0] = (fRec29[0] - (fConst10 * ((fConst9 * fRec28[2]) + (fConst7 * fRec28[1]))));
		double fTemp15 = max((double)-1, min((double)1, (fSlow10 * (((fConst6 * fRec28[0]) + (fConst54 * fRec28[1])) + (fConst6 * fRec28[2])))));
		double fTemp16 = ((1.584893192 * ((fTemp15 * (1 - (0.3333333333333333 * faustpower<2>(fTemp15)))) + ((fTemp14 * (1 - (0.3333333333333333 * faustpower<2>(fTemp14)))) + (0.8413951417869425 * (fTemp11 * (1 - (0.3333333333333333 * faustpower<2>(fTemp11)))))))) + (1.2589412 * (fTemp9 * (1 - (0.3333333333333333 * faustpower<2>(fTemp9))))));
		fVec4[0] = fTemp16;
		fRec12[0] = ((fConst58 * fRec12[1]) + (fConst57 * (fVec4[0] + fVec4[1])));
		fRec9[0] = (Ftube(TUBE_TABLE_12AT7_68k, (((fSlow11 * fRec12[0]) + ((fSlow6 * fTemp5) + ((fSlow4 * ((fTemp4 * (4 - (4 * fabs(fTemp4)))) - fTemp4)) + (fRec11[0] + fTemp2)))) - 2.6177529999999978)) - 153.04618518518518);
		fRec8[0] = ((fConst35 * fRec8[1]) + (fConst59 * ((fConst31 * fRec9[0]) + (fConst32 * fRec9[1]))));
		double fTemp17 = (fRec8[0] * fRec7[0]);
		fVec5[0] = fTemp17;
		fRec6[0] = ((fConst58 * fRec6[1]) + (fConst57 * (fVec5[0] + fVec5[1])));
		double fTemp18 = (1e-15 + (0.015 * fRec5[1]));
		fVec6[0] = fTemp18;
		fRec30[0] = ((fConst63 * fRec30[1]) + (fConst62 * (fVec6[0] + fVec6[1])));
		fRec5[0] = (Ftube(TUBE_TABLE_12AT7_250k, ((fRec30[0] + fRec6[0]) - 1.887331999999999)) - 124.17786666666666);
		fRec4[0] = ((fConst35 * fRec4[1]) + (fConst59 * ((fConst31 * fRec5[0]) + (fConst32 * fRec5[1]))));
		double fTemp19 = (fRec7[0] * fRec4[0]);
		fVec7[0] = fTemp19;
		fRec3[0] = ((fConst58 * fRec3[1]) + (fConst57 * (fVec7[0] + fVec7[1])));
		double fTemp20 = (1e-15 + (0.0082 * fRec2[1]));
		fVec8[0] = fTemp20;
		fRec31[0] = ((fConst67 * fRec31[1]) + (fConst66 * (fVec8[0] + fVec8[1])));
		fRec2[0] = (Ftube(TUBE_TABLE_12AT7_250k, ((fRec31[0] + fRec3[0]) - 1.2569619999999988)) - 96.7119512195122);
		fRec1[0] = ((fConst35 * fRec1[1]) + (fConst59 * ((fConst31 * fRec2[0]) + (fConst32 * fRec2[1]))));
		output0[i] = (FAUSTFLOAT)(fRec1[0] * fRec0[0]);
		double fTemp21 = (double)input1[i];
		double fTemp22 = (fTemp21 * fTemp0);
		double fTemp23 = (1e-15 + (0.027 * fRec39[1]));
		fVec9[0] = fTemp23;
		fRec40[0] = ((fConst4 * fRec40[1]) + (fConst3 * (fVec9[0] + fVec9[1])));
		double fTemp24 = (1e-15 + fTemp22);
		double fTemp25 = (1e-15 + (fTemp21 * fRec10[0]));
		fRec49[0] = (fTemp25 - (fConst30 * ((fConst28 * fRec49[2]) + (fConst26 * fRec49[1]))));
		double fTemp26 = (fRec49[2] + (fRec49[0] + (2 * fRec49[1])));
		fVec10[0] = fTemp26;
		fRec48[0] = ((fConst35 * fRec48[1]) + (fConst34 * ((fConst31 * fVec10[0]) + (fConst32 * fVec10[1]))));
		fRec47[0] = ((fConst38 * fRec47[1]) + (fConst37 * (fRec48[0] + fRec48[1])));
		fRec46[0] = (fRec47[0] - (fConst24 * ((fConst22 * fRec46[2]) + (fConst20 * fRec46[1]))));
		double fTemp27 = (fRec46[2] + (fRec46[0] + (2 * fRec46[1])));
		fVec11[0] = fTemp27;
		fRec45[0] = ((fConst41 * fRec45[1]) + (fConst40 * (fVec11[0] + fVec11[1])));
		fRec44[0] = (fRec45[0] - (fConst17 * ((fConst15 * fRec44[2]) + (fConst13 * fRec44[1]))));
		double fTemp28 = (fRec44[2] + (fRec44[0] + (2 * fRec44[1])));
		fVec12[0] = fTemp28;
		fRec43[0] = ((fConst44 * fRec43[1]) + (fConst43 * (fVec12[0] + fVec12[1])));
		fRec42[0] = (fRec43[0] - (fConst10 * ((fConst9 * fRec42[2]) + (fConst7 * fRec42[1]))));
		double fTemp29 = max((double)-1, min((double)1, (fSlow7 * (fRec42[2] + (fRec42[0] + (2 * fRec42[1]))))));
		double fTemp30 = (fConst7 * fRec50[1]);
		fRec52[0] = ((fConst41 * fRec52[1]) + (fConst40 * ((fConst14 * fVec11[0]) + (fConst47 * fVec11[1]))));
		fRec51[0] = (fRec52[0] - (fConst17 * ((fConst15 * fRec51[2]) + (fConst13 * fRec51[1]))));
		fRec50[0] = ((fConst17 * (((fConst12 * fRec51[0]) + (fConst48 * fRec51[1])) + (fConst12 * fRec51[2]))) - (fConst46 * ((fConst45 * fRec50[2]) + fTemp30)));
		double fTemp31 = max((double)-1, min((double)1, (fSlow8 * (fRec50[2] + (fConst46 * (fTemp30 + (fConst45 * fRec50[0])))))));
		double fTemp32 = (fConst7 * fRec53[1]);
		double fTemp33 = (fConst13 * fRec54[1]);
		fRec56[0] = ((fConst38 * fRec56[1]) + (fConst37 * ((fConst21 * fRec48[0]) + (fConst51 * fRec48[1]))));
		fRec55[0] = (fRec56[0] - (fConst24 * ((fConst22 * fRec55[2]) + (fConst20 * fRec55[1]))));
		fRec54[0] = ((fConst24 * (((fConst19 * fRec55[0]) + (fConst52 * fRec55[1])) + (fConst19 * fRec55[2]))) - (fConst50 * ((fConst49 * fRec54[2]) + fTemp33)));
		fRec53[0] = ((fRec54[2] + (fConst50 * (fTemp33 + (fConst49 * fRec54[0])))) - (fConst46 * ((fConst45 * fRec53[2]) + fTemp32)));
		double fTemp34 = max((double)-1, min((double)1, (fSlow9 * (fRec53[2] + (fConst46 * (fTemp32 + (fConst45 * fRec53[0])))))));
		fRec58[0] = ((fConst44 * fRec58[1]) + (fConst43 * ((fConst8 * fVec12[0]) + (fConst53 * fVec12[1]))));
		fRec57[0] = (fRec58[0] - (fConst10 * ((fConst9 * fRec57[2]) + (fConst7 * fRec57[1]))));
		double fTemp35 = max((double)-1, min((double)1, (fSlow10 * (((fConst6 * fRec57[0]) + (fConst54 * fRec57[1])) + (fConst6 * fRec57[2])))));
		double fTemp36 = ((1.584893192 * ((fTemp35 * (1 - (0.3333333333333333 * faustpower<2>(fTemp35)))) + ((fTemp34 * (1 - (0.3333333333333333 * faustpower<2>(fTemp34)))) + (0.8413951417869425 * (fTemp31 * (1 - (0.3333333333333333 * faustpower<2>(fTemp31)))))))) + (1.2589412 * (fTemp29 * (1 - (0.3333333333333333 * faustpower<2>(fTemp29))))));
		fVec13[0] = fTemp36;
		fRec41[0] = ((fConst58 * fRec41[1]) + (fConst57 * (fVec13[0] + fVec13[1])));
		fRec39[0] = (Ftube(TUBE_TABLE_12AT7_68k, (((fSlow11 * fRec41[0]) + ((fSlow6 * fTemp25) + ((fSlow4 * ((fTemp24 * (4 - (4 * fabs(fTemp24)))) - fTemp24)) + (fRec40[0] + fTemp22)))) - 2.6177529999999978)) - 153.04618518518518);
		fRec38[0] = ((fConst35 * fRec38[1]) + (fConst59 * ((fConst31 * fRec39[0]) + (fConst32 * fRec39[1]))));
		double fTemp37 = (fRec7[0] * fRec38[0]);
		fVec14[0] = fTemp37;
		fRec37[0] = ((fConst58 * fRec37[1]) + (fConst57 * (fVec14[0] + fVec14[1])));
		double fTemp38 = (1e-15 + (0.015 * fRec36[1]));
		fVec15[0] = fTemp38;
		fRec59[0] = ((fConst63 * fRec59[1]) + (fConst62 * (fVec15[0] + fVec15[1])));
		fRec36[0] = (Ftube(TUBE_TABLE_12AT7_250k, ((fRec59[0] + fRec37[0]) - 1.887331999999999)) - 124.17786666666666);
		fRec35[0] = ((fConst35 * fRec35[1]) + (fConst59 * ((fConst31 * fRec36[0]) + (fConst32 * fRec36[1]))));
		double fTemp39 = (fRec7[0] * fRec35[0]);
		fVec16[0] = fTemp39;
		fRec34[0] = ((fConst58 * fRec34[1]) + (fConst57 * (fVec16[0] + fVec16[1])));
		double fTemp40 = (1e-15 + (0.0082 * fRec33[1]));
		fVec17[0] = fTemp40;
		fRec60[0] = ((fConst67 * fRec60[1]) + (fConst66 * (fVec17[0] + fVec17[1])));
		fRec33[0] = (Ftube(TUBE_TABLE_12AT7_250k, ((fRec60[0] + fRec34[0]) - 1.2569619999999988)) - 96.7119512195122);
		fRec32[0] = ((fConst35 * fRec32[1]) + (fConst59 * ((fConst31 * fRec33[0]) + (fConst32 * fRec33[1]))));
		output1[i] = (FAUSTFLOAT)(fRec0[0] * fRec32[0]);
		// post processing
		fRec32[1] = fRec32[0];
		fRec33[1] = fRec33[0];
		fRec60[1] = fRec60[0];
		fVec17[1] = fVec17[0];
		fRec34[1] = fRec34[0];
		fVec16[1] = fVec16[0];
		fRec35[1] = fRec35[0];
		fRec36[1] = fRec36[0];
		fRec59[1] = fRec59[0];
		fVec15[1] = fVec15[0];
		fRec37[1] = fRec37[0];
		fVec14[1] = fVec14[0];
		fRec38[1] = fRec38[0];
		fRec39[1] = fRec39[0];
		fRec41[1] = fRec41[0];
		fVec13[1] = fVec13[0];
		fRec57[2] = fRec57[1]; fRec57[1] = fRec57[0];
		fRec58[1] = fRec58[0];
		fRec53[2] = fRec53[1]; fRec53[1] = fRec53[0];
		fRec54[2] = fRec54[1]; fRec54[1] = fRec54[0];
		fRec55[2] = fRec55[1]; fRec55[1] = fRec55[0];
		fRec56[1] = fRec56[0];
		fRec50[2] = fRec50[1]; fRec50[1] = fRec50[0];
		fRec51[2] = fRec51[1]; fRec51[1] = fRec51[0];
		fRec52[1] = fRec52[0];
		fRec42[2] = fRec42[1]; fRec42[1] = fRec42[0];
		fRec43[1] = fRec43[0];
		fVec12[1] = fVec12[0];
		fRec44[2] = fRec44[1]; fRec44[1] = fRec44[0];
		fRec45[1] = fRec45[0];
		fVec11[1] = fVec11[0];
		fRec46[2] = fRec46[1]; fRec46[1] = fRec46[0];
		fRec47[1] = fRec47[0];
		fRec48[1] = fRec48[0];
		fVec10[1] = fVec10[0];
		fRec49[2] = fRec49[1]; fRec49[1] = fRec49[0];
		fRec40[1] = fRec40[0];
		fVec9[1] = fVec9[0];
		fRec1[1] = fRec1[0];
		fRec2[1] = fRec2[0];
		fRec31[1] = fRec31[0];
		fVec8[1] = fVec8[0];
		fRec3[1] = fRec3[0];
		fVec7[1] = fVec7[0];
		fRec4[1] = fRec4[0];
		fRec5[1] = fRec5[0];
		fRec30[1] = fRec30[0];
		fVec6[1] = fVec6[0];
		fRec6[1] = fRec6[0];
		fVec5[1] = fVec5[0];
		fRec8[1] = fRec8[0];
		fRec9[1] = fRec9[0];
		fRec12[1] = fRec12[0];
		fVec4[1] = fVec4[0];
		fRec28[2] = fRec28[1]; fRec28[1] = fRec28[0];
		fRec29[1] = fRec29[0];
		fRec24[2] = fRec24[1]; fRec24[1] = fRec24[0];
		fRec25[2] = fRec25[1]; fRec25[1] = fRec25[0];
		fRec26[2] = fRec26[1]; fRec26[1] = fRec26[0];
		fRec27[1] = fRec27[0];
		fRec21[2] = fRec21[1]; fRec21[1] = fRec21[0];
		fRec22[2] = fRec22[1]; fRec22[1] = fRec22[0];
		fRec23[1] = fRec23[0];
		fRec13[2] = fRec13[1]; fRec13[1] = fRec13[0];
		fRec14[1] = fRec14[0];
		fVec3[1] = fVec3[0];
		fRec15[2] = fRec15[1]; fRec15[1] = fRec15[0];
		fRec16[1] = fRec16[0];
		fVec2[1] = fVec2[0];
		fRec17[2] = fRec17[1]; fRec17[1] = fRec17[0];
		fRec18[1] = fRec18[0];
		fRec19[1] = fRec19[0];
		fVec1[1] = fVec1[0];
		fRec20[2] = fRec20[1]; fRec20[1] = fRec20[0];
		fRec11[1] = fRec11[0];
		fVec0[1] = fVec0[0];
		fRec10[1] = fRec10[0];
		fRec7[1] = fRec7[0];
		fRec0[1] = fRec0[0];
	}
#undef fslider0
#undef fslider1
#undef fslider2
#undef fslider3
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *input1, FAUSTFLOAT *output0, FAUSTFLOAT *output1, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, input1, output0, output1);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case DRIVE: 
		fslider3_ = (float*)data; // , 0.35, 0.0, 1.0, 0.01 
		break;
	case WET_DRY: 
		fslider2_ = (float*)data; // , 1e+02, 0.0, 1e+02, 1.0 
		break;
	case PREGAIN: 
		fslider1_ = (float*)data; // , -6.0, -2e+01, 2e+01, 0.1 
		break;
	case GAIN1: 
		fslider0_ = (float*)data; // , -6.0, -2e+01, 2e+01, 0.1 
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
   DRIVE, 
   WET_DRY, 
   PREGAIN, 
   GAIN1, 
} PortIndex;
*/

} // end namespace gxamp14_stereo
