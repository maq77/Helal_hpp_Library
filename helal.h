// Helal.h : Defines the func for the static library.
//


#include <iostream>
#include <string>
#include <ctime>    // For seeding std::rand
#include <cstdlib>  // For std::rand, std::srand
#include <random>   // For std::mt19937, std::uniform_int_distribution
#include <vector>
#include <chrono>
#include <iomanip>
#include <cassert>
#include <limits>
using namespace std;

using ll = long long;
using db = long double;  // or double, if TL is tight
using str = string;      // python!

// pairs
using pi = pair<int, int>;
using pl = pair<ll, ll>;
using pd = pair<db, db>;
#define mp make_pair
#define f first
#define s second

#define tcT template <class T   //// it should have '>' in the end but leave it if you want to add Args
#define tcTU tcT, class U
// ^ this makes everything look weird but I'll try it
tcT > using V = vector<T>;
tcT, size_t SZ > using AR = array<T, SZ>;
using vi = V<int>;
using vb = V<bool>;
using vl = V<ll>;
using vd = V<db>;
using vs = V<str>;
using vpi = V<pi>;
using vpl = V<pl>;
using vpd = V<pd>;

// vectors
// oops size(x), rbegin(x), rend(x) 
#define sz(x) int((x).size())
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define rall(x) x.rbegin(), x.rend()
#define sor(x) sort(all(x))
#define rsz resize
#define ins insert
#define pb push_back
#define eb emplace_back
#define ft front()
#define bk back()

#define lb lower_bound
#define ub upper_bound
tcT > int lwb(V<T>& a, const T& b) { return int(lb(all(a), b) - bg(a)); }
tcT > int upb(V<T>& a, const T& b) { return int(ub(all(a), b) - bg(a)); }

// loops
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i, a) ROF(i, 0, a)
#define rep(a) F0R(_, a)
#define each(a, x) for (auto &a : x)

const int MOD = 998244353;  // 1e9+7;
const int MX = (int)2e5 + 5;
const ll BIG = static_cast<ll>(1e18);  // not too close to LLONG_MAX
const int MAX_STREAM_SIZE = 1000000;
const db PI = acos((db)-1);
const int dx[4]{ 1, 0, -1, 0 }, dy[4]{ 0, 1, 0, -1 };  // for every grid problem!!
mt19937 rng((uint32_t)chrono::steady_clock::now().time_since_epoch().count());

tcT > bool ckmin(T& a, const T& b) {
	return b < a ? a = b, 1 : 0;
}  // set a = min(a,b)
tcT > bool ckmax(T& a, const T& b) {
	return a < b ? a = b, 1 : 0;
}  // set a = max(a,b)
tcT > T& get_min(T& a, T& b) { //return min without changing in a
	return a < b ? a : b;
}  // set a = min(a,b)
tcT > T& get_max(T& a, T& b) { //return max without changing in a
	return a < b ? b : a;
}  // set a = max(a,b)
tcT > void remDup(vector<T>& v) {  // sort and remove duplicates
	sort(all(v));
	v.erase(unique(all(v)), end(v));
}
tcTU > void safeErase(T& t, const U& u) {
	auto it = t.find(u);
	assert(it != end(t));
	t.erase(it);
}
/// 
/// Debug Namespace , Helping with Algorithm Analaysis By Helal
/// 
inline namespace Debug {
	
	const auto beg_time = std::chrono::high_resolution_clock::now();
	//Source: https://stackoverflow.com/questions/47980498/accurate-c-c-clock-on-a-multi-core-processor-with-auto-overclock?noredirect=1&lq=1
	double time_elapsed() {
		return chrono::duration<double>(std::chrono::high_resolution_clock::now() -
			beg_time)
			.count();
	}
}  // namespace Debug

inline namespace handle_error { ////Handling error by Exception made by Helal
	
	class HelalException : public runtime_error { ////class for exceptions inherted from runtime_error
	public:
		HelalException(const string& message) : runtime_error(message) {}
	};

	/// **
	/// functions to manipulate exceptions
	/// **
	
	// Function to handle invalid input errors
	void handleInvalidInput() {
		cout << "Error: Invalid input." << endl;
		// Additional error handling logic can be added here if needed
	}

	// Function to handle file I/O errors
	void handleFileError(const str& filename) {
		cout << "Error: Unable to open file '" << filename << "'." << endl;
		// Additional error handling logic can be added here if needed
	}

	// Function to handle other runtime errors
	void handleRuntimeError(const str& message) {
		cout << "Runtime Error: " << message << endl;
		// Additional error handling logic can be added here if needed
	}
	// Function to handle input data error, designed to be used to any data type BY HELAL
	tcT >
		istream& getInput(istream& in, T& data) {
		in.exceptions(std::ios_base::failbit);
		try {
			in >> data;
		}
		catch (const std::ios_base::failure&) {
			cout << "\n\t\t\tError in Input Data!" << endl;
			in.clear(); // Clear the error state
			//in.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard input 
			in.ignore(MAX_STREAM_SIZE, '\n'); // Discard input
		}
		return in;
	}

}
/**
/// 
/// FileIO Namespace , This improves the efficiency of input/output operations By Helal
/// 

#ifdef _MSC_VER // Check if compiling with Visual Studio
#define freopen freopen_s //// replace 
#endif

inline namespace FileIO { 
	void setIn(str s) { freopen(s.c_str(), "r", stdin); }
	void setOut(str s) { freopen(s.c_str(), "w", stdout); }
	void setIO(str s = "") {
		cin.tie(0)->sync_with_stdio(0);  // unsync C / C++ I/O streams
		cout << fixed << setprecision(12);
	    // cin.exceptions(cin.failbit);
		// throws exception when do smth illegal
		// ex. try to read letter into int
		if (sz(s)) setIn(s + ".in"), setOut(s + ".out");  // for old USACO
	}
}  // namespace FileIO
*/


 /**
 * Description: Dist, Randomize V2
 * Source: Helal + Dhruv Rohatgi
 */
/////////////// Randomize V_2 using random Library (Modern Solution)
 ////////////// DISTRIBUTIONS

 // return int in [L,R] inclusive
int rng_int(int L, int R) {
	assert(L <= R);
	return uniform_int_distribution<int>(L, R)(rng);
}
ll rng_ll(ll L, ll R) {
	assert(L <= R);
	return uniform_int_distribution<ll>(L, R)(rng);
}

// return double in [L,R] inclusive
db rng_db(db L, db R) {
	assert(L <= R);
	return uniform_real_distribution<db>(L, R)(rng);
}


// TODO: This is an example of a library function
// V1 Functions before optimization

void Welcome_Helal()
{
	cout << "Welcome To My Library <Helal> ! " << endl;
}
void print(string& message)
{
	cout << message << endl;
}
void print(int& message)
{
	cout << message << endl;
}
int ret_Mo()
{
	return 1;
}

int random()
{
	// get seed value based on time which changes every second
	time_t current_time = time(NULL);
	srand((unsigned)current_time);
	// Get Random Num
	int random = rand();

	// Print the random number
	return random;
}
tcT>
T random(T Begin, T End)
{
	// get seed value based on time which changes every second
	//time_t current_time = time(NULL);
	srand((unsigned)time(NULL));
	////////////////////////////////////
	T offset = Begin-1;
	T range = (T)2 + (End - Begin); /// range between begin and end + limit
	// Get Random Num
	T random = offset + ((T)rand()% range);

	// Print the random number
	return random;
}
tcT >
T random(T Begin, T End, bool borders)
{
	// get seed value based on time which changes every second
	if (borders = true)
	{
		//time_t current_time = time(NULL);
		srand((unsigned)time(NULL));
		////////////////////////////////////
		T offset = Begin;
		T range = (T)1 + (End - Begin); /// range between begin and end + limit
		// Get Random Num
		T random = offset + ((T)rand() % range);

		// Print the random number
		return random;
	}
	else
	{
		return NULL;
	}
}
char random(char A, char Z)
{
	int ascii_A = int(A);
	int ascii_Z = int(Z);
	int ascii_Random = random(ascii_A, ascii_Z);
	return char(ascii_Random);
}
/*

1- (mt19937) random number generator is seeded with the current time
2- (uniform_int_distribution) is used to generate random indices within the range of the array
3- (rand) and (srand) are considered outdated for modern C++ random number generation
and <random> facilities are preferred

*/
// Function to get a random element from an array
tcT, size_t N>

T getRandomElement(const T(&arr)[N]) {
	static mt19937 mt(static_cast<unsigned int>(time(nullptr)));  // Mersenne Twister 19937 generator
	uniform_int_distribution<size_t> dist(0, N - 1);  // Distribution for indices of the array
	return arr[dist(mt)];  // Return a random element
}