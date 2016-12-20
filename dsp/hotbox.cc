// generated from file './/hotbox.dsp' by dsp2cc:
// Code generated with Faust 0.9.73 (http://faust.grame.fr)


namespace hotbox {

template <int tab_size>
struct table1d_imp { // 1-dimensional nolintableping table
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
};

static table1d_imp<400> nolintable __rt_data = {
	0.0,0.999999999999,407.88,400, {
	0.0,0.00524365827424,0.0104873165485,0.0157309748227,0.020974633097,
	0.0262182913712,0.0314619496454,0.0367056079197,0.0419492661939,0.0471929244682,
	0.0524365827424,0.0576802410166,0.0629238992909,0.0681675575651,0.0734112158394,
	0.0786548741136,0.0838985323878,0.0891421906621,0.0943858489363,0.0996295072105,
	0.104873165485,0.110116823759,0.115360482033,0.120604140308,0.125847798582,
	0.131091456856,0.13633511513,0.141578773404,0.146822431679,0.152066089953,
	0.157309748227,0.162553406501,0.167797064776,0.17304072305,0.178284381324,
	0.183528039598,0.188771697873,0.19380726992,0.198511362791,0.203054654885,
	0.207482232501,0.211817441263,0.216075054907,0.220265421778,0.224396260701,
	0.228473582829,0.232502219471,0.236486148516,0.240428708288,0.244332744072,
	0.248200712192,0.252034756159,0.255836763764,0.25960841081,0.263351195206,
	0.267066463975,0.27075543494,0.274419214349,0.278058811369,0.281675150097,
	0.285269079625,0.288841382525,0.292392782059,0.295923948351,0.299435503689,
	0.302928027117,0.306402058429,0.309858101651,0.313296628105,0.316718079097,
	0.320122868302,0.323511383873,0.326883990323,0.330241030198,0.333582825577,
	0.33690967942,0.340221876773,0.343519685861,0.346803359073,0.350073133849,
	0.353329233487,0.35657186788,0.359801234182,0.363017517411,0.366220891015,
	0.369411517369,0.372589548253,0.375755125274,0.378908380266,0.382049435657,
	0.385178404807,0.38829539233,0.391400494389,0.394493798976,0.397575386184,
	0.400645328451,0.403703690811,0.406750531129,0.409785900328,0.412809842615,
	0.415822395708,0.41882359106,0.42181345408,0.424792004367,0.427759255941,
	0.430715217482,0.43365989258,0.436593279987,0.439515373889,0.442426164176,
	0.445325636737,0.448213773757,0.451090554033,0.453955953302,0.456809944578,
	0.45965249851,0.462483583744,0.465303167305,0.468111214983,0.470907691733,
	0.47369256208,0.476465790539,0.479227342024,0.481977182276,0.484715278281,
	0.487441598685,0.49015611421,0.492858798057,0.495549626295,0.498228578245,
	0.500895636833,0.503550788937,0.506194025702,0.508825342831,0.511444740849,
	0.51405222534,0.516647807146,0.519231502537,0.521803333347,0.524363327073,
	0.526911516941,0.529447941935,0.531972646794,0.53448568197,0.536987103565,
	0.539476973221,0.541955357997,0.544422330209,0.546877967248,0.549322351379,
	0.551755569516,0.554177712983,0.556588877262,0.558989161726,0.561378669366,
	0.56375750651,0.566125782543,0.568483609614,0.57083110236,0.573168377617,
	0.575495554147,0.577812752363,0.580120094066,0.58241770219,0.584705700553,
	0.586984213624,0.589253366297,0.59151328368,0.593764090889,0.596005912863,
	0.59823887419,0.600463098936,0.602678710496,0.604885831457,0.607084583465,
	0.60927508711,0.611457461819,0.613631825762,0.615798295765,0.617956987235,
	0.620108014091,0.62225148871,0.624387521874,0.626516222728,0.628637698745,
	0.630752055695,0.632859397628,0.634959826849,0.637053443912,0.639140347612,
	0.641220634981,0.643294401288,0.645361740046,0.647422743022,0.649477500243,
	0.651526100011,0.653568628924,0.655605171888,0.657635812137,0.659660631261,
	0.661679709221,0.663693124378,0.665700953516,0.667703271869,0.669700153146,
	0.67169166956,0.673677891856,0.675658889336,0.67763472989,0.679605480021,
	0.68157120488,0.683531968286,0.685487832758,0.687438859547,0.689385108655,
	0.691326638871,0.693263507792,0.695195771856,0.697123486361,0.699046705499,
	0.700965482375,0.70287986904,0.704789916506,0.70669567478,0.70859719288,
	0.710494518867,0.712387699858,0.714276782057,0.716161810772,0.71804283044,
	0.719919884644,0.721793016138,0.723662266863,0.725527677969,0.727389289834,
	0.72924714208,0.731101273597,0.732951722553,0.734798526418,0.736641721978,
	0.738481345349,0.740317431998,0.742150016756,0.74397913383,0.745804816825,
	0.747627098752,0.749446012044,0.751261588572,0.753073859653,0.754882856068,
	0.756688608073,0.758491145409,0.760290497316,0.762086692547,0.763879759373,
	0.765669725598,0.767456618571,0.769240465193,0.771021291929,0.772799124818,
	0.77457398948,0.776345911129,0.778114914581,0.779881024261,0.781644264212,
	0.783404658105,0.785162229248,0.78691700059,0.788668994731,0.790418233931,
	0.792164740113,0.793908534876,0.795649639496,0.797388074939,0.79912386186,
	0.800857020617,0.802587571272,0.804315533599,0.80604092709,0.807763770961,
	0.809484084157,0.811201885357,0.812917192981,0.814630025194,0.81634039991,
	0.818048334802,0.819753847298,0.821456954596,0.823157673659,0.824856021226,
	0.826552013815,0.828245667725,0.829936999043,0.831626023646,0.833312757205,
	0.834997215192,0.836679412879,0.838359365346,0.840037087479,0.841712593983,
	0.843385899374,0.845057017992,0.846725963997,0.848392751379,0.850057393953,
	0.851719905371,0.853380299117,0.855038588516,0.856694786734,0.858348906779,
	0.860000961508,0.861650963627,0.863298925693,0.864944860119,0.866588779174,
	0.868230694988,0.869870619549,0.871508564715,0.873144542205,0.874778563611,
	0.876410640393,0.878040783885,0.879669005296,0.881295315712,0.882919726098,
	0.884542247301,0.886162890049,0.887781664956,0.889398582524,0.891013653141,
	0.892626887086,0.894238294531,0.895847885541,0.897455670074,0.899061657989,
	0.900665859041,0.902268282885,0.903868939077,0.905467837078,0.907064986253,
	0.908660395871,0.91025407511,0.911846033056,0.913436278707,0.915024820968,
	0.916611668662,0.918196830521,0.919780315196,0.921362131252,0.922942287174,
	0.924520791362,0.92609765214,0.927672877751,0.929246476359,0.930818456055,
	0.93238882485,0.933957590685,0.935524761422,0.937090344856,0.938654348706,
	0.940216780623,0.941777648188,0.943336958913,0.944894720242,0.946450939552,
	0.948005624155,0.949558781296,0.95111041816,0.952660541863,0.954209159464,
	0.955756277955,0.957301904271,0.958846045286,0.960388707813,0.961929898608,
	0.96346962437,0.965007891739,0.966544707299,0.968080077578,0.969614009052,
	0.971146508139,0.972677581205,0.974207234563,0.975735474474,0.977262307148,
	0.978787738741,0.980311775362,0.981834423068,0.98335568787,0.984875575726,
	0.98639409255,0.987911244205,0.989427036511,0.990941475239,0.992454566114,
	0.993966314819,0.995476726989,0.996985808215,0.998493564048,0.999999999991	}
};

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	int 	iConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	double 	fConst4;
	double 	fConst5;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec0[2];
	double 	fConst6;
	double 	fConst7;
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec1[2];
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
	double 	fConst31;
	double 	fConst32;
	double 	fConst33;
	double 	fConst34;
	double 	fConst35;
	double 	fConst36;
	double 	fConst37;
	double 	fConst38;
	double 	fConst39;
	double 	fConst40;
	double 	fConst41;
	double 	fConst42;
	double 	fConst43;
	double 	fConst44;
	double 	fConst45;
	double 	fConst46;
	double 	fConst47;
	double 	fConst48;
	double 	fConst49;
	double 	fConst50;
	double 	fConst51;
	double 	fConst52;
	double 	fConst53;
	double 	fConst54;
	double 	fConst55;
	double 	fConst56;
	double 	fConst57;
	double 	fConst58;
	double 	fConst59;
	double 	fConst60;
	double 	fConst61;
	double 	fConst62;
	double 	fConst63;
	double 	fConst64;
	double 	fConst65;
	double 	fConst66;
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	double 	fRec7[2];
	double 	fConst67;
	double 	fConst68;
	double 	fConst69;
	double 	fConst70;
	double 	fConst71;
	double 	fConst72;
	double 	fConst73;
	double 	fConst74;
	double 	fConst75;
	double 	fConst76;
	double 	fConst77;
	double 	fConst78;
	double 	fConst79;
	double 	fConst80;
	double 	fConst81;
	double 	fConst82;
	double 	fConst83;
	double 	fConst84;
	double 	fConst85;
	double 	fVec0[2];
	double 	fConst86;
	double 	fRec9[2];
	double 	fRec8[5];
	double 	fConst87;
	double 	fConst88;
	double 	fConst89;
	double 	fConst90;
	double 	fVec1[2];
	double 	fRec6[2];
	double 	fRec5[3];
	double 	fConst91;
	double 	fConst92;
	double 	fConst93;
	double 	fConst94;
	double 	fRec4[3];
	double 	fConst95;
	double 	fConst96;
	double 	fConst97;
	double 	fConst98;
	double 	fVec2[2];
	double 	fRec3[2];
	double 	fRec2[4];
	double 	fConst99;
	double 	fConst100;
	double 	fConst101;
	double 	fConst102;
	double 	fConst103;
	double 	fConst104;
	double 	fConst105;
	double 	fConst106;
	double 	fConst107;
	double 	fConst108;
	double 	fConst109;
	double 	fConst110;
	double 	fConst111;
	double 	fConst112;
	double 	fConst113;
	double 	fConst114;
	double 	fConst115;
	double 	fConst116;
	double 	fConst117;
	double 	fConst118;
	FAUSTFLOAT 	fslider3;
	FAUSTFLOAT	*fslider3_;
	double 	fRec10[2];
	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static double nonlin(double x);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "matchless";
	name = N_("matchless hotbox");
	mono_audio = compute_static;
	stereo_audio = 0;
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
	for (int i=0; i<2; i++) fRec1[i] = 0;
	for (int i=0; i<2; i++) fRec7[i] = 0;
	for (int i=0; i<2; i++) fVec0[i] = 0;
	for (int i=0; i<2; i++) fRec9[i] = 0;
	for (int i=0; i<5; i++) fRec8[i] = 0;
	for (int i=0; i<2; i++) fVec1[i] = 0;
	for (int i=0; i<2; i++) fRec6[i] = 0;
	for (int i=0; i<3; i++) fRec5[i] = 0;
	for (int i=0; i<3; i++) fRec4[i] = 0;
	for (int i=0; i<2; i++) fVec2[i] = 0;
	for (int i=0; i<2; i++) fRec3[i] = 0;
	for (int i=0; i<4; i++) fRec2[i] = 0;
	for (int i=0; i<2; i++) fRec10[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	iConst0 = min(192000, max(1, fSamplingFreq));
	fConst1 = double(iConst0);
	fConst2 = (2.29824892435497e-15 * fConst1);
	fConst3 = (6.08775409078982e-07 + (fConst1 * (1.01604615775282e-08 + (fConst1 * (2.3888752902532e-11 + fConst2)))));
	fConst4 = (1.08037342597883e-14 * fConst1);
	fConst5 = (2.70093356494708e-08 + (fConst1 * (1.1125167675782e-10 + fConst4)));
	fConst6 = (1.09019500257864e-14 * fConst1);
	fConst7 = ((fConst1 * (0 - (2.70093356494708e-12 + fConst6))) - 5.07312840899152e-11);
	fConst8 = (fConst1 * (2.23217649995627e-12 + fConst4));
	fConst9 = (1.07055184937903e-14 * fConst1);
	fConst10 = (5.07312840899152e-11 + (fConst1 * (0 - (1.76341943496545e-12 + fConst9))));
	fConst11 = (1.2964481111746e-14 * fConst1);
	fConst12 = ((fConst1 * (0 - (1.10715954397831e-10 + fConst11))) - 2.23217649995627e-08);
	fConst13 = (1.28466221925483e-14 * fConst1);
	fConst14 = (1.75733168087466e-08 + (fConst1 * (1.09171288259861e-10 + fConst13)));
	fConst15 = (1.08037342597883e-16 * fConst1);
	fConst16 = ((fConst1 * (1.25225101647547e-12 - fConst15)) - 2.23724962836526e-09);
	fConst17 = (9.82157659980758e-17 * fConst1);
	fConst18 = (fConst1 * (2.23217649995627e-13 - fConst17));
	fConst19 = (9.91979236580565e-16 * fConst1);
	fConst20 = ((fConst1 * (4.68757064990816e-14 - fConst19)) - 5.07312840899152e-12);
	fConst21 = (1.08037342597883e-15 * fConst1);
	fConst22 = (fConst1 * (fConst21 - 2.23217649995627e-13));
	fConst23 = (9.7233608338095e-16 * fConst1);
	fConst24 = (2.23724962836526e-09 + (fConst1 * (0 - (1.02903336647984e-12 + fConst23))));
	fConst25 = (6.08775409078982e-07 + (fConst1 * ((fConst1 * (2.3888752902532e-11 - fConst2)) - 1.01604615775282e-08)));
	fConst26 = ((fConst1 * (1.1125167675782e-10 - fConst4)) - 2.70093356494708e-08);
	fConst27 = (5.07312840899152e-11 + (fConst1 * (fConst6 - 2.70093356494708e-12)));
	fConst28 = (fConst1 * (2.23217649995627e-12 - fConst4));
	fConst29 = ((fConst1 * (fConst9 - 1.76341943496545e-12)) - 5.07312840899152e-11);
	fConst30 = (2.23217649995627e-08 + (fConst1 * (fConst11 - 1.10715954397831e-10)));
	fConst31 = ((fConst1 * (1.09171288259861e-10 - fConst13)) - 1.75733168087466e-08);
	fConst32 = (6.89474677306492e-15 * fConst1);
	fConst33 = (1.82632622723695e-06 + (fConst1 * ((fConst1 * (fConst32 - 2.3888752902532e-11)) - 1.01604615775282e-08)));
	fConst34 = (3.27058500773592e-14 * fConst1);
	fConst35 = (5.07312840899152e-11 + (fConst1 * (2.70093356494708e-12 - fConst34)));
	fConst36 = (3.2411202779365e-14 * fConst1);
	fConst37 = (fConst1 * (fConst36 - 2.23217649995627e-12));
	fConst38 = (3.21165554813708e-14 * fConst1);
	fConst39 = ((fConst1 * (1.76341943496545e-12 - fConst38)) - 5.07312840899152e-11);
	fConst40 = ((fConst1 * (fConst36 - 1.1125167675782e-10)) - 2.70093356494708e-08);
	fConst41 = (3.8893443335238e-14 * fConst1);
	fConst42 = (2.23217649995627e-08 + (fConst1 * (1.10715954397831e-10 - fConst41)));
	fConst43 = (3.85398665776449e-14 * fConst1);
	fConst44 = ((fConst1 * (fConst43 - 1.09171288259861e-10)) - 1.75733168087466e-08);
	fConst45 = (1.82632622723695e-06 + (fConst1 * (1.01604615775282e-08 + (fConst1 * (0 - (2.3888752902532e-11 + fConst32))))));
	fConst46 = (2.70093356494708e-08 + (fConst1 * (0 - (1.1125167675782e-10 + fConst36))));
	fConst47 = ((fConst1 * (2.70093356494708e-12 + fConst34)) - 5.07312840899152e-11);
	fConst48 = (fConst1 * (0 - (2.23217649995627e-12 + fConst36)));
	fConst49 = (5.07312840899152e-11 + (fConst1 * (1.76341943496545e-12 + fConst38)));
	fConst50 = ((fConst1 * (1.10715954397831e-10 + fConst41)) - 2.23217649995627e-08);
	fConst51 = (1.75733168087466e-08 + (fConst1 * (0 - (1.09171288259861e-10 + fConst43))));
	fConst52 = (491.77839701345533 / double(iConst0));
	fConst53 = (1 - fConst52);
	fConst54 = (2.23088305908541e-10 * fConst1);
	fConst55 = (0.0486203606380191 + (fConst1 * (fConst54 - 9.11217046976464e-06)));
	fConst56 = faustpower<2>(fConst1);
	fConst57 = (0.0972407212760382 - (4.46176611817082e-10 * fConst56));
	fConst58 = (0.0486203606380191 + (fConst1 * (9.11217046976464e-06 + fConst54)));
	fConst59 = (1.0 / fConst58);
	fConst60 = (3.96405209751304e-10 * fConst1);
	fConst61 = (0.000664185608257904 + (fConst1 * (fConst60 - 1.79204606509871e-06)));
	fConst62 = (0.00132837121651581 - (7.92810419502608e-10 * fConst56));
	fConst63 = (0.000664185608257904 + (fConst1 * (1.79204606509871e-06 + fConst60)));
	fConst64 = (1.0 / fConst63);
	fConst65 = (8.86444066409027e-20 * fConst1);
	fConst66 = (3.86277743125018e-09 + (fConst1 * (3.62823293779376e-10 + (fConst1 * (8.59146905017815e-12 + (fConst1 * (4.60816740274557e-15 + fConst65)))))));
	fConst67 = (4.00666216422502e-34 * fConst1);
	fConst68 = (8.0613782340414e-25 + (fConst1 * (3.5976959569142e-26 + (fConst1 * (2.07718514669151e-29 + fConst67)))));
	fConst69 = (4.20444111066153e-34 * fConst1);
	fConst70 = ((fConst1 * ((fConst1 * (0 - (2.18567298345183e-29 + fConst69))) - 4.07496953777087e-26)) - 1.72088598714557e-24);
	fConst71 = (3.86277743125018e-09 + (fConst1 * ((fConst1 * (8.59146905017815e-12 + (fConst1 * (fConst65 - 4.60816740274557e-15)))) - 3.62823293779376e-10)));
	fConst72 = ((fConst1 * (3.5976959569142e-26 + (fConst1 * (fConst67 - 2.07718514669151e-29)))) - 8.0613782340414e-25);
	fConst73 = (1.72088598714557e-24 + (fConst1 * ((fConst1 * (2.18567298345183e-29 - fConst69)) - 4.07496953777087e-26)));
	fConst74 = (3.54577626563611e-19 * fConst1);
	fConst75 = (1.54511097250007e-08 + (fConst1 * ((fConst56 * (9.21633480549114e-15 - fConst74)) - 7.25646587558751e-10)));
	fConst76 = (1.60266486569001e-33 * fConst1);
	fConst77 = ((fConst56 * (4.15437029338302e-29 - fConst76)) - 1.61227564680828e-24);
	fConst78 = (1.68177644426461e-33 * fConst1);
	fConst79 = (3.44177197429115e-24 + (fConst56 * (fConst78 - 4.37134596690365e-29)));
	fConst80 = (2.31766645875011e-08 + (fConst56 * ((5.31866439845416e-19 * fConst56) - 1.71829381003563e-11)));
	fConst81 = ((2.40399729853501e-33 * fConst56) - 7.19539191382839e-26);
	fConst82 = (8.14993907554173e-26 - (2.52266466639692e-33 * fConst56));
	fConst83 = (1.54511097250007e-08 + (fConst1 * (7.25646587558751e-10 + (fConst56 * (0 - (9.21633480549114e-15 + fConst74))))));
	fConst84 = (1.61227564680828e-24 + (fConst56 * (0 - (4.15437029338302e-29 + fConst76))));
	fConst85 = ((fConst56 * (4.37134596690365e-29 + fConst78)) - 3.44177197429115e-24);
	fConst86 = (1.0 / (1 + fConst52));
	fConst87 = (2.98254369486965e-13 * fConst1);
	fConst88 = (fConst87 - 3.08114018065041e-10);
	fConst89 = (5.96508738973931e-13 * fConst1);
	fConst90 = (0 - (3.08114018065041e-10 + fConst87));
	fConst91 = (2.78347176382533e-06 * fConst1);
	fConst92 = (fConst91 - 0.0092776147273918);
	fConst93 = (0 - (0.0092776147273918 + fConst91));
	fConst94 = (0 - (0.0185552294547836 / fConst63));
	fConst95 = (0.000223598931837306 * fConst1);
	fConst96 = (fConst95 - 0.745329772791024);
	fConst97 = (0 - (0.745329772791024 + fConst95));
	fConst98 = (0 - (1.49065954558205 / fConst58));
	fConst99 = (2.94647297994227e-16 * fConst1);
	fConst100 = (fConst1 * (fConst99 - 2.23217649995627e-13));
	fConst101 = (2.9759377097417e-15 * fConst1);
	fConst102 = ((fConst1 * (fConst101 - 4.68757064990816e-14)) - 5.07312840899152e-12);
	fConst103 = (3.2411202779365e-15 * fConst1);
	fConst104 = (fConst1 * (2.23217649995627e-13 - fConst103));
	fConst105 = (2.91700825014285e-15 * fConst1);
	fConst106 = (2.23724962836526e-09 + (fConst1 * (1.02903336647984e-12 + fConst105)));
	fConst107 = (3.2411202779365e-16 * fConst1);
	fConst108 = ((fConst1 * (fConst107 - 1.25225101647547e-12)) - 2.23724962836526e-09);
	fConst109 = (2.23724962836526e-09 + (fConst1 * (0 - (1.25225101647547e-12 + fConst107))));
	fConst110 = (fConst1 * (0 - (2.23217649995627e-13 + fConst99)));
	fConst111 = (5.07312840899152e-12 + (fConst1 * (0 - (4.68757064990816e-14 + fConst101))));
	fConst112 = (fConst1 * (2.23217649995627e-13 + fConst103));
	fConst113 = ((fConst1 * (1.02903336647984e-12 - fConst105)) - 2.23724962836526e-09);
	fConst114 = (2.23724962836526e-09 + (fConst1 * (1.25225101647547e-12 + fConst15)));
	fConst115 = (fConst1 * (2.23217649995627e-13 + fConst17));
	fConst116 = (5.07312840899152e-12 + (fConst1 * (4.68757064990816e-14 + fConst19)));
	fConst117 = (fConst1 * (0 - (2.23217649995627e-13 + fConst21)));
	fConst118 = ((fConst1 * (fConst23 - 1.02903336647984e-12)) - 2.23724962836526e-09);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

double always_inline Dsp::nonlin(double x) {
    double f = fabs(x);
    f = (f/(3.0+f) - nolintable.low) * nolintable.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = nolintable.data[0];
    } else if (i >= nolintable.size-1) {
        f = nolintable.data[nolintable.size-1];
    } else {
	f -= i;
	f = nolintable.data[i]*(1-f) + nolintable.data[i+1]*f;
    }
    return copysign(f, x);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fslider0 (*fslider0_)
#define fslider1 (*fslider1_)
#define fslider2 (*fslider2_)
#define fslider3 (*fslider3_)
	double 	fSlow0 = (0.007000000000000006 * double(fslider0));
	double 	fSlow1 = (0.007000000000000006 * (1 - double(fslider1)));
	double 	fSlow2 = (0.004073836948085289 * (exp(double(fslider2)) - 1));
	double 	fSlow3 = (0.007000000000000006 * double(fslider3));
	for (int i=0; i<count; i++) {
		fRec0[0] = ((0.993 * fRec0[1]) + fSlow0);
		fRec1[0] = ((0.993 * fRec1[1]) + fSlow1);
		double fTemp0 = (((fRec1[0] * ((fConst1 * (fConst14 + (fConst12 * fRec1[0]))) - 5.07312840899152e-07)) + (fRec0[0] * (5.07312840899152e-07 + (fConst1 * (((fRec1[0] * (fConst10 + (fConst8 * fRec1[0]))) + (fConst7 * fRec0[0])) + fConst5))))) + fConst3);
		fRec7[0] = ((0.993 * fRec7[1]) + fSlow2);
		double fTemp1 = ((fRec7[0] * ((fConst1 * (fConst70 + (fConst68 * fRec7[0]))) - 1.83213141682759e-23)) + fConst66);
		double fTemp2 = (double)input0[i];
		fVec0[0] = fTemp2;
		fRec9[0] = (fConst86 * ((fVec0[0] - fVec0[1]) + (fConst53 * fRec9[1])));
		fRec8[0] = (fRec9[0] - (((((fRec8[1] * ((fRec7[0] * ((fConst1 * (fConst85 + (fConst84 * fRec7[0]))) - 7.32852566731037e-23)) + fConst83)) + (fRec8[2] * ((fRec7[0] * ((fConst56 * (fConst82 + (fConst81 * fRec7[0]))) - 1.09927885009655e-22)) + fConst80))) + (fRec8[3] * ((fRec7[0] * ((fConst1 * (fConst79 + (fConst77 * fRec7[0]))) - 7.32852566731037e-23)) + fConst75))) + (fRec8[4] * ((fRec7[0] * ((fConst1 * (fConst73 + (fConst72 * fRec7[0]))) - 1.83213141682759e-23)) + fConst71))) / fTemp1));
		double fTemp3 = nonlin((fConst56 * ((((fRec7[0] * (((fConst90 * fRec8[0]) + (fConst89 * fRec8[1])) + (6.16228036130083e-10 * fRec8[2]))) + (fConst1 * (fRec8[3] * (0 - (5.96508738973931e-13 * fRec7[0]))))) + (fConst88 * (fRec7[0] * fRec8[4]))) / fTemp1)));
		fVec1[0] = fTemp3;
		fRec6[0] = (fConst86 * ((fVec1[0] - fVec1[1]) + (fConst53 * fRec6[1])));
		fRec5[0] = (fRec6[0] - (fConst64 * ((fConst62 * fRec5[1]) + (fConst61 * fRec5[2]))));
		fRec4[0] = (((fConst94 * fRec5[1]) + (fConst64 * ((fConst93 * fRec5[0]) + (fConst92 * fRec5[2])))) - (fConst59 * ((fConst57 * fRec4[1]) + (fConst55 * fRec4[2]))));
		double fTemp4 = ((fConst98 * fRec4[1]) + (fConst59 * ((fConst97 * fRec4[0]) + (fConst96 * fRec4[2]))));
		fVec2[0] = fTemp4;
		fRec3[0] = (fConst86 * ((fVec2[0] - fVec2[1]) + (fConst53 * fRec3[1])));
		fRec2[0] = (fRec3[0] - ((((fRec2[1] * (((fRec1[0] * ((fConst1 * (fConst51 + (fConst50 * fRec1[0]))) - 1.52193852269746e-06)) + (fRec0[0] * (1.52193852269746e-06 + (fConst1 * (((fRec1[0] * (fConst49 + (fConst48 * fRec1[0]))) + (fConst47 * fRec0[0])) + fConst46))))) + fConst45)) + (fRec2[2] * (((fRec1[0] * ((fConst1 * (fConst44 + (fConst42 * fRec1[0]))) - 1.52193852269746e-06)) + (fRec0[0] * (1.52193852269746e-06 + (fConst1 * (fConst40 + ((fRec1[0] * (fConst39 + (fConst37 * fRec1[0]))) + (fConst35 * fRec0[0]))))))) + fConst33))) + (fRec2[3] * (((fRec1[0] * ((fConst1 * (fConst31 + (fConst30 * fRec1[0]))) - 5.07312840899152e-07)) + (fRec0[0] * (5.07312840899152e-07 + (fConst1 * (((fRec1[0] * (fConst29 + (fConst28 * fRec1[0]))) + (fConst27 * fRec0[0])) + fConst26))))) + fConst25))) / fTemp0));
		fRec10[0] = ((0.993 * fRec10[1]) + fSlow3);
		output0[i] = (FAUSTFLOAT)(fConst1 * ((fRec10[0] * ((((fRec2[0] * (((fRec1[0] * (fConst118 + (fConst117 * fRec1[0]))) + (fRec0[0] * (fConst116 + (fConst115 * fRec1[0])))) + fConst114)) + (fRec2[1] * (((fRec1[0] * (fConst113 + (fConst112 * fRec1[0]))) + (fRec0[0] * (fConst111 + (fConst110 * fRec1[0])))) + fConst109))) + (fRec2[2] * (fConst108 + ((fRec1[0] * (fConst106 + (fConst104 * fRec1[0]))) + (fRec0[0] * (fConst102 + (fConst100 * fRec1[0]))))))) + (fRec2[3] * (((fRec1[0] * (fConst24 + (fConst22 * fRec1[0]))) + (fRec0[0] * (fConst20 + (fConst18 * fRec1[0])))) + fConst16)))) / fTemp0));
		// post processing
		fRec10[1] = fRec10[0];
		for (int i=3; i>0; i--) fRec2[i] = fRec2[i-1];
		fRec3[1] = fRec3[0];
		fVec2[1] = fVec2[0];
		fRec4[2] = fRec4[1]; fRec4[1] = fRec4[0];
		fRec5[2] = fRec5[1]; fRec5[1] = fRec5[0];
		fRec6[1] = fRec6[0];
		fVec1[1] = fVec1[0];
		for (int i=4; i>0; i--) fRec8[i] = fRec8[i-1];
		fRec9[1] = fRec9[0];
		fVec0[1] = fVec0[0];
		fRec7[1] = fRec7[0];
		fRec1[1] = fRec1[0];
		fRec0[1] = fRec0[0];
	}
#undef fslider0
#undef fslider1
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
	case BASS: 
		fslider1_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case GAIN: 
		fslider2_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case TREBLE: 
		fslider0_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case VOLUME: 
		fslider3_ = (float*)data; // , 0.25, 0.0, 1.0, 0.01 
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
   BASS, 
   GAIN, 
   TREBLE, 
   VOLUME, 
} PortIndex;
*/

} // end namespace hotbox
