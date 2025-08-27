/// --------- La ilaha illallah Muhammadur Rasulullah sallalllahualhiosallam --------- ///
/*
||-------------------------------------------||
||                 Author :                  ||
||              Sifat Alam                   ||
|| Dept. of Computer Science and Engineering ||
||     Southeast University (SEU), Dhaka     ||
||     Email : sifaterabbi20@gmail.com       ||
||     ID    : 2024200000174                 ||
||-------------------------------------------||
*/

#include<bits/stdc++.h>
using namespace std;

#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define pb push_back
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define loop(i,a,b) for(int i=a;i<b;i++)
#define PRECISION(x) cout << fixed << setprecision(x)
#define min3(a,b,c) min(a, min(b,c))
#define max3(a,b,c) max(a, max(b,c))
#define ceil_div(a,b) ((a + b - 1) / (b))
#define TEST_CASES int t; cin >> t; while(t--)

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

#define read(arr,n) for(int i=0;i<n;i++) cin >> arr[i];
#define print(arr,n) for(int i=0;i<n;i++) cout << arr[i] << ' '; cout << endl;

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
int ddx[] = {-1,-1,-1,0,0,1,1,1};
int ddy[] = {-1,0,1,-1,1,-1,0,1};
int kx[] = {-2,-2,-1,-1,1,1,2,2};
int ky[] = {-1,1,-2,2,-2,2,-1,1};

template<typename T>
void debug_vec(const vector<T>& v) {
    cerr << "[ ";
    for(const T& val : v) cerr << val << " ";
    cerr << "]\n";
}

#define debug(x) cerr << #x << " = " << x << endl
#define debug_pair(p) cerr << "(" << p.first << ", " << p.second << ")" << endl

ll mod_add(ll a, ll b, ll m = MOD) { return (a % m + b % m) % m; }
ll mod_mul(ll a, ll b, ll m = MOD) { return ((a % m) * (b % m)) % m; }
ll mod_pow(ll a, ll b, ll m = MOD) {
    ll res = 1;
    while(b > 0) {
        if(b & 1) res = mod_mul(res, a, m);
        a = mod_mul(a, a, m);
        b >>= 1;
    }
    return res;
}

bool valid(int x, int y, int n, int m) {
    return (x >= 0 && x < n && y >= 0 && y < m);
}

int main() {
    FAST;
    int n;
    cin >> n;
    int x=0;
    string s;
    for(int i=0;i<n;i++)
    {
        cin >> s;
        if(s[0]=='+'||s[1]=='+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    cout << x << endl;
    return 0;
}