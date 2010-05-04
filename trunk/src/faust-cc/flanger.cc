namespace flanger {
// generated from file '../src/faust/flanger.dsp'

FAUSTFLOAT 	fslider0;
int 	iVec0[2];
FAUSTFLOAT 	fslider1;
int 	IOTA;
float 	fVec1[2048];
FAUSTFLOAT 	fslider2;
float 	fConst0;
float 	fRec1[2];
float 	fRec2[2];
FAUSTFLOAT 	fslider3;
FAUSTFLOAT 	fslider4;
float 	fRec0[2];
FAUSTFLOAT 	fslider5;
FAUSTFLOAT 	fcheckbox0;
float 	fVec2[2048];
float 	fRec3[2];
int	fSamplingFreq;

void init(int samplingFreq)
{
	fSamplingFreq = samplingFreq;
	for (int i=0; i<2; i++) iVec0[i] = 0;
	IOTA = 0;
	for (int i=0; i<2048; i++) fVec1[i] = 0;
	fConst0 = (6.283185307179586f / fSamplingFreq);
	for (int i=0; i<2; i++) fRec1[i] = 0;
	for (int i=0; i<2; i++) fRec2[i] = 0;
	for (int i=0; i<2; i++) fRec0[i] = 0;
	for (int i=0; i<2048; i++) fVec2[i] = 0;
	for (int i=0; i<2; i++) fRec3[i] = 0;
}

void compute(int count, float *input0, float *input1, float *output0, float *output1)
{
	float 	fSlow0 = powf(10,(0.05f * fslider0));
	float 	fSlow1 = fslider1;
	float 	fSlow2 = (fConst0 * fslider2);
	float 	fSlow3 = sinf(fSlow2);
	float 	fSlow4 = cosf(fSlow2);
	float 	fSlow5 = (0 - fSlow3);
	float 	fSlow6 = (0.0005f * fslider3);
	float 	fSlow7 = (0.001f * fslider4);
	float 	fSlow8 = fslider5;
	float 	fSlow9 = ((int(fcheckbox0))?(0 - fSlow8):fSlow8);
	for (int i=0; i<count; i++) {
		float fTemp0 = (fSlow0 * (float)input0[i]);
		iVec0[0] = 1;
		float fTemp1 = ((fSlow1 * fRec0[1]) - fTemp0);
		fVec1[IOTA&2047] = fTemp1;
		fRec1[0] = ((fSlow4 * fRec1[1]) + (fSlow3 * fRec2[1]));
		fRec2[0] = ((1 + ((fSlow5 * fRec1[1]) + (fSlow4 * fRec2[1]))) - iVec0[1]);
		float fTemp2 = (fSamplingFreq * (fSlow7 + (fSlow6 * (1 + fRec1[0]))));
		int iTemp3 = int(fTemp2);
		int iTemp4 = (1 + iTemp3);
		fRec0[0] = (((fTemp2 - iTemp3) * fVec1[(IOTA-int((int(iTemp4) & 2047)))&2047]) + ((iTemp4 - fTemp2) * fVec1[(IOTA-int((iTemp3 & 2047)))&2047]));
		output0[i] = (FAUSTFLOAT)(0.5f * (fTemp0 + (fSlow9 * fRec0[0])));
		float fTemp5 = (fSlow0 * (float)input1[i]);
		float fTemp6 = ((fSlow1 * fRec3[1]) - fTemp5);
		fVec2[IOTA&2047] = fTemp6;
		float fTemp7 = (fSamplingFreq * (fSlow7 + (fSlow6 * (1 + fRec2[0]))));
		int iTemp8 = int(fTemp7);
		int iTemp9 = (1 + iTemp8);
		fRec3[0] = (((fTemp7 - iTemp8) * fVec2[(IOTA-int((int(iTemp9) & 2047)))&2047]) + ((iTemp9 - fTemp7) * fVec2[(IOTA-int((iTemp8 & 2047)))&2047]));
		output1[i] = (FAUSTFLOAT)(0.5f * (fTemp5 + (fSlow9 * fRec3[0])));
		// post processing
		fRec3[1] = fRec3[0];
		fRec0[1] = fRec0[0];
		fRec2[1] = fRec2[0];
		fRec1[1] = fRec1[0];
		IOTA = IOTA+1;
		iVec0[1] = iVec0[0];
	}
}

static struct RegisterParams { RegisterParams(); } RegisterParams;
RegisterParams::RegisterParams()
{
	registerVar("flanger.invert","","B","",&fcheckbox0, 0.0, 0.0, 1.0, 1.0);
	registerVar("flanger.depth","","S","",&fslider5, 1.0f, 0.0f, 1.0f, 0.001f);
	registerVar("flanger.flange delay offset","","S","",&fslider4, 1.0f, 0.0f, 2e+01f, 0.001f);
	registerVar("flanger.flange delay","","S","",&fslider3, 1e+01f, 0.0f, 2e+01f, 0.001f);
	registerVar("flanger.LFO freq","","S","",&fslider2, 0.2f, 0.0f, 5.0f, 0.001f);
	registerVar("flanger.feedback gain","","S","",&fslider1, 0.0f, 0.0f, 1.0f, 0.001f);
	registerVar("flanger.level","","S","",&fslider0, 0.0f, -6e+01f, 1e+01f, 0.1f);
	registerInit(init);
}

} // end namespace flanger