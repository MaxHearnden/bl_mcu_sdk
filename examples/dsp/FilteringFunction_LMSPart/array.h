// Array for FilteringFunctions LMSPart
#define TEST_LENGTH_SAMPLES 320 /* ???? */
#define NUM_TAPS 29
const float32_t firCoeffs32LP[NUM_TAPS] = {
	-0.001822523074f, -0.001587929321f, 1.226008847e-18f, 0.003697750857f, 0.008075430058f,
	0.008530221879f, -4.273456581e-18f, -0.01739769801f, -0.03414586186f, -0.03335915506f,
	8.073562366e-18f, 0.06763084233f, 0.1522061825f, 0.2229246944f, 0.2504960895f,
	0.2229246944f, 0.1522061825f, 0.06763084233f, 8.073562366e-18f, -0.03335915506f,
	-0.03414586186f, -0.01739769801f, -4.273456581e-18f, 0.008530221879f, 0.008075430058f,
	0.003697750857f, 1.226008847e-18f, -0.001587929321f, -0.001822523074f};
// float32_t
	float32_t expectoutput_f32_50Hz_200Hz[TEST_LENGTH_SAMPLES] = {0, 0.309016994374947, 0.587785252292473, 0.809016994374948, 0.951056516295154, 1, 0.951056516295154, 0.809016994374948, 0.587785252292473, 0.309016994374948, 1.22464679914735e-16, -0.309016994374947, -0.587785252292473, -0.809016994374947, -0.951056516295154, -1, -0.951056516295154, -0.809016994374947, -0.587785252292473, -0.309016994374948, -2.44929359829471e-16, 0.309016994374948, 0.587785252292473, 0.809016994374947, 0.951056516295154, 1, 0.951056516295154, 0.809016994374948, 0.587785252292473, 0.309016994374948, 3.67394039744206e-16, -0.309016994374947, -0.587785252292473, -0.809016994374948, -0.951056516295154, -1, -0.951056516295154, -0.809016994374948, -0.587785252292474, -0.309016994374948, -4.89858719658941e-16, 0.309016994374949, 0.587785252292474, 0.809016994374947, 0.951056516295153, 1, 0.951056516295154, 0.809016994374948, 0.587785252292472, 0.309016994374946, -1.16403343982657e-15, -0.309016994374945, -0.587785252292473, -0.809016994374948, -0.951056516295153, -1, -0.951056516295154, -0.809016994374947, -0.587785252292474, -0.309016994374950, -7.34788079488412e-16, 0.309016994374948, 0.587785252292473, 0.809016994374948, 0.951056516295153, 1, 0.951056516295153, 0.809016994374947, 0.587785252292471, 0.309016994374947, -2.69546091939735e-15, -0.309016994374945, -0.587785252292473, -0.809016994374946, -0.951056516295153, -1, -0.951056516295154, -0.809016994374947, -0.587785252292474, -0.309016994374947, -9.79717439317883e-16, 0.309016994374948, 0.587785252292475, 0.809016994374948, 0.951056516295154, 1, 0.951056516295154, 0.809016994374949, 0.587785252292474, 0.309016994374950, 1.10218211923262e-15, -0.309016994374948, -0.587785252292472, -0.809016994374948, -0.951056516295153, -1, -0.951056516295153, -0.809016994374947, -0.587785252292471, -0.309016994374947, 2.32806687965315e-15, 0.309016994374948, 0.587785252292469, 0.809016994374946, 0.951056516295153, 1, 0.951056516295153, 0.809016994374949, 0.587785252292474, 0.309016994374947, -2.20560219973841e-15, -0.309016994374951, -0.587785252292472, -0.809016994374948, -0.951056516295154, -1, -0.951056516295154, -0.809016994374947, -0.587785252292477, -0.309016994374951, -1.46957615897682e-15, 0.309016994374948, 0.587785252292475, 0.809016994374946, 0.951056516295153, 1, 0.951056516295153, 0.809016994374945, 0.587785252292474, 0.309016994374947, -1.96067283990894e-15, -0.309016994374951, -0.587785252292478, -0.809016994374948, -0.951056516295154, -1, -0.951056516295152, -0.809016994374947, -0.587785252292472, -0.309016994374944, 5.39092183879471e-15, 0.309016994374941, 0.587785252292469, 0.809016994374945, 0.951056516295153, 1, 0.951056516295155, 0.809016994374950, 0.587785252292475, 0.309016994374947, -1.71574348007947e-15, -0.309016994374944, -0.587785252292472, -0.809016994374947, -0.951056516295154, -1, -0.951056516295154, -0.809016994374948, -0.587785252292472, -0.309016994374944, -1.95943487863577e-15, 0.309016994374947, 0.587785252292474, 0.809016994374949, 0.951056516295155, 1, 0.951056516295153, 0.809016994374946, 0.587785252292469, 0.309016994374941, -1.47081412025000e-15, -0.309016994374951, -0.587785252292472, -0.809016994374947, -0.951056516295152, -1, -0.951056516295154, -0.809016994374948, -0.587785252292478, -0.309016994374951, -2.20436423846524e-15, 0.309016994374947, 0.587785252292474, 0.809016994374945, 0.951056516295153, 1, 0.951056516295153, 0.809016994374946, 0.587785252292475, 0.309016994374948, -1.22588476042053e-15, -0.309016994374950, -0.587785252292477, -0.809016994374947, -0.951056516295154, -1, -0.951056516295152, -0.809016994374944, -0.587785252292472, -0.309016994374945, 4.65613375930630e-15, 0.309016994374954, 0.587785252292474, 0.809016994374949, 0.951056516295151, 1, 0.951056516295155, 0.809016994374950, 0.587785252292475, 0.309016994374948, -9.80955400591059e-16, -0.309016994374950, -0.587785252292477, -0.809016994374943, -0.951056516295152, -1, -0.951056516295154, -0.809016994374948, -0.587785252292473, -0.309016994374945, 4.41120439947683e-15, 0.309016994374953, 0.587785252292480, 0.809016994374945, 0.951056516295153, 1, 0.951056516295153, 0.809016994374946, 0.587785252292470, 0.309016994374942, -7.84145339836259e-15, -0.309016994374957, -0.587785252292471, -0.809016994374947, -0.951056516295154, -1, -0.951056516295157, -0.809016994374952, -0.587785252292478, -0.309016994374952, -2.93915231795365e-15, 0.309016994374946, 0.587785252292474, 0.809016994374949, 0.951056516295155, 1, 0.951056516295156, 0.809016994374950, 0.587785252292476, 0.309016994374949, -4.91096680932118e-16, -0.309016994374950, -0.587785252292476, -0.809016994374951, -0.951056516295156, -1, -0.951056516295155, -0.809016994374948, -0.587785252292473, -0.309016994374945, 3.92134567981788e-15, 0.309016994374953, 0.587785252292479, 0.809016994374953, 0.951056516295157, 1, 0.951056516295154, 0.809016994374946, 0.587785252292470, 0.309016994374942, -7.35159467870365e-15, -0.309016994374956, -0.587785252292482, -0.809016994374955, -0.951056516295154, -1, -0.951056516295152, -0.809016994374944, -0.587785252292467, -0.309016994374939, 1.07818436775894e-14, 0.309016994374959, 0.587785252292462, 0.809016994374940, 0.951056516295150, 1, 0.951056516295156, 0.809016994374951, 0.587785252292476, 0.309016994374949, -1.23796127317672e-18, -0.309016994374936, -0.587785252292465, -0.809016994374942, -0.951056516295151, -1, -0.951056516295155, -0.809016994374949, -0.587785252292473, -0.309016994374946, 3.43148696015894e-15, 0.309016994374939, 0.587785252292467, 0.809016994374944, 0.951056516295152, 1, 0.951056516295154, 0.809016994374947, 0.587785252292471, 0.309016994374943, -6.86173595904471e-15, -0.309016994374942, -0.587785252292470, -0.809016994374946, -0.951056516295154, -1, -0.951056516295153, -0.809016994374945, -0.587785252292468, -0.309016994374939};
	float32_t error_ones[TEST_LENGTH_SAMPLES];
	float32_t testOutput_f32[TEST_LENGTH_SAMPLES],testOutput_f32_ref[TEST_LENGTH_SAMPLES];
	float32_t firStateF32_LMS[TEST_LENGTH_SAMPLES + NUM_TAPS - 1]={0};
	float32_t testInput_f32_50Hz_200Hz[TEST_LENGTH_SAMPLES] = {0, 1.26007351067010, 1.17557050458495, 0.221231742082474, -1.11022302462516e-16, 1.00000000000000, 1.90211303259031, 1.39680224666742, 4.44089209850063e-16, -0.642039521920206, -3.67394039744206e-16, 0.642039521920206, -1.22124532708767e-15, -1.39680224666742, -1.90211303259031, -1.00000000000000, -3.33066907387547e-16, -0.221231742082476, -1.17557050458495, -1.26007351067010, -1.22464679914735e-15, 1.26007351067010, 1.17557050458495, 0.221231742082475, 8.88178419700125e-16, 1.00000000000000, 1.90211303259031, 1.39680224666742, 1.33226762955019e-15, -0.642039521920206, -1.10218211923262e-15, 0.642039521920206, 1.55431223447522e-15, -1.39680224666743, -1.90211303259031, -0.999999999999995, -7.77156117237610e-16, -0.221231742082473, -1.17557050458495, -1.26007351067010, -2.44929359829471e-15, 1.26007351067010, 1.17557050458494, 0.221231742082476, -7.77156117237610e-16, 0.999999999999998, 1.90211303259031, 1.39680224666742, -4.88498130835069e-15, -0.642039521920206, 3.49210031947972e-15, 0.642039521920206, 2.55351295663786e-15, -1.39680224666742, -1.90211303259031, -0.999999999999996, -9.99200722162641e-16, -0.221231742082477, -1.17557050458494, -1.26007351067011, -3.67394039744206e-15, 1.26007351067010, 1.17557050458495, 0.221231742082472, -1.22124532708767e-15, 1.00000000000000, 1.90211303259031, 1.39680224666742, -1.09912079437891e-14, -0.642039521920206, 8.08638275819206e-15, 0.642039521920205, 3.55271367880050e-15, -1.39680224666741, -1.90211303259031, -0.999999999999997, -1.44328993201270e-15, -0.221231742082476, -1.17557050458494, -1.26007351067010, -4.89858719658941e-15, 1.26007351067010, 1.17557050458494, 0.221231742082472, 3.88578058618805e-15, 1.00000000000000, 1.90211303259031, 1.39680224666743, 4.44089209850063e-15, -0.642039521920207, -3.30654635769785e-15, 0.642039521920206, 4.55191440096314e-15, -1.39680224666742, -1.90211303259031, -0.999999999999998, 3.66373598126302e-15, -0.221231742082476, -1.17557050458495, -1.26007351067010, 1.16403343982657e-14, 1.26007351067010, 1.17557050458496, 0.221231742082482, -1.99840144432528e-15, 1.00000000000000, 1.90211303259031, 1.39680224666743, 5.44009282066327e-15, -0.642039521920206, 6.61680659921524e-15, 0.642039521920207, 5.55111512312578e-15, -1.39680224666742, -1.90211303259031, -0.999999999999984, -2.10942374678780e-15, -0.221231742082475, -1.17557050458493, -1.26007351067011, -7.34788079488412e-15, 1.26007351067010, 1.17557050458494, 0.221231742082483, -2.33146835171283e-15, 1.00000000000000, 1.90211303259031, 1.39680224666741, 6.32827124036339e-15, -0.642039521920206, 5.88201851972683e-15, 0.642039521920207, -2.22044604925031e-14, -1.39680224666742, -1.90211303259031, -0.999999999999985, 8.43769498715119e-15, -0.221231742082475, -1.17557050458495, -1.26007351067009, 2.69546091939735e-14, 1.26007351067009, 1.17557050458496, 0.221231742082484, -2.77555756156289e-15, 1, 1.90211303259030, 1.39680224666743, 7.32747196252603e-15, -0.642039521920206, 5.14723044023841e-15, 0.642039521920205, 7.54951656745106e-15, -1.39680224666742, -1.90211303259031, -0.999999999999986, -2.99760216648792e-15, -0.221231742082474, -1.17557050458495, -1.26007351067009, -9.79717439317883e-15, 1.26007351067010, 1.17557050458494, 0.221231742082465, 7.88258347483861e-15, 0.999999999999999, 1.90211303259031, 1.39680224666741, -2.04281036531029e-14, -0.642039521920204, 4.41244236075000e-15, 0.642039521920207, 8.43769498715119e-15, -1.39680224666742, -1.90211303259031, -1.00000000000002, -3.33066907387547e-15, -0.221231742082473, -1.17557050458493, -1.26007351067011, -1.10218211923262e-14, 1.26007351067010, 1.17557050458494, 0.221231742082485, -3.44169137633799e-15, 0.999999999999998, 1.90211303259031, 1.39680224666741, 9.32587340685132e-15, -0.642039521920206, 3.67765428126159e-15, 0.642039521920207, -1.93178806284777e-14, -1.39680224666742, -1.90211303259031, -0.999999999999988, 7.32747196252603e-15, -0.221231742082492, -1.17557050458495, -1.26007351067009, 2.32806687965315e-14, 1.26007351067012, 1.17557050458494, 0.221231742082467, -1.47659662275146e-14, 0.999999999999969, 1.90211303259030, 1.39680224666744, 1.02140518265514e-14, -0.642039521920206, 2.94286620177318e-15, 0.642039521920207, -1.83186799063151e-14, -1.39680224666739, -1.90211303259031, -1.00000000000002, -4.10782519111308e-15, -0.221231742082472, -1.17557050458495, -1.26007351067010, 2.20560219973841e-14, 1.26007351067011, 1.17557050458493, 0.221231742082486, -4.21884749357560e-15, 0.999999999999996, 1.90211303259031, 1.39680224666741, -1.75415237890775e-14, -0.642039521920204, 2.35243601950878e-14, 0.642039521920209, 1.15463194561016e-14, -1.39680224666742, -1.90211303259031, -0.999999999999990, -1.54321000422897e-14, -0.221231742082452, -1.17557050458493, -1.26007351067011, -1.46957615897682e-14, 1.26007351067010, 1.17557050458495, 0.221231742082468, 6.32827124036339e-15, 1.00000000000002, 1.90211303259030, 1.39680224666744, 1.23234755733392e-14, -0.642039521920207, 1.47329004279635e-15, 0.642039521920207, -1.62092561595273e-14, -1.39680224666744, -1.90211303259030, -1.00000000000002, -4.88498130835069e-15, -0.221231742082471, -1.17557050458495, -1.26007351067010, 1.96067283990894e-14, 1.26007351067011, 1.17557050458493, 0.221231742082450, 1.69864122767649e-14, 0.999999999999994, 1.90211303259031, 1.39680224666741, -1.54321000422897e-14, -0.642039521920205, 2.20547840361110e-14, 0.642039521920209, -4.39648317751562e-14, -1.39680224666747, -1.90211303259031, -0.999999999999992, 5.77315972805081e-15, -0.221231742082489, -1.17557050458496, -1.26007351067008, 5.39092183879471e-14, 1.26007351067013, 1.17557050458498, 0.221231742082507, -1.63202784619898e-14, 0.999999999999965, 1.90211303259030, 1.39680224666744, 1.43218770176645e-14, -0.642039521920207, 3.71388381953015e-18, 0.642039521920203, 4.31876756579186e-14, -1.39680224666739, -1.90211303259031, -1.00000000000002, -5.55111512312578e-15, -0.221231742082469, -1.17557050458495, -1.26007351067010, 1.71574348007947e-14, 1.26007351067008, 1.17557050458496, 0.221231742082489, -5.77315972805081e-15, 0.999999999999992, 1.90211303259031, 1.39680224666741, -1.34336985979644e-14, -0.642039521920205, 2.05852078771341e-14, 0.642039521920205, 1.54321000422897e-14, -1.39680224666741, -1.90211303259031, -0.999999999999994, 4.99600361081320e-15, -0.221231742082488, -1.17557050458496, -1.26007351067008};

//q31_t
	q31_t expectoutput_q31_50Hz_200Hz[TEST_LENGTH_SAMPLES];
	q31_t error_ones_q31[TEST_LENGTH_SAMPLES];
	q31_t firStateq31_LMS[TEST_LENGTH_SAMPLES + NUM_TAPS - 1];
	q31_t testInput_q31_50Hz_200Hz[TEST_LENGTH_SAMPLES] = {0}, testOutput_q31[TEST_LENGTH_SAMPLES] = {0},testOutput_q31_ref[TEST_LENGTH_SAMPLES] = {0};
	q31_t firCoeffs32LP_q31[NUM_TAPS] = {0};

//q15_t
	q15_t expectoutput_q15_50Hz_200Hz[TEST_LENGTH_SAMPLES];
	q15_t error_ones_q15[TEST_LENGTH_SAMPLES];
	q15_t firStateq15_LMS[TEST_LENGTH_SAMPLES + NUM_TAPS - 1];
	q15_t testInput_q15_50Hz_200Hz[TEST_LENGTH_SAMPLES] = {0}, testOutput_q15[TEST_LENGTH_SAMPLES] = {0},testOutput_q15_ref[TEST_LENGTH_SAMPLES] = {0};
	q15_t firCoeffs32LP_q15[NUM_TAPS] = {0};
