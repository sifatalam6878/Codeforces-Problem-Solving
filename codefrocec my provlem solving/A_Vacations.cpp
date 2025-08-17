/// ------------------------- بسم الله الرحمن الرحيم ------------------------- ///
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

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

#define read(arr,n) for(int i=0;i<n;i++) cin >> arr[i];
#define print(arr,n) for(int i=0;i<n;i++) cout << arr[i] << ' '; cout << endl;

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

template<typename T>
void debug_vec(const vector<T>& v) {
    cerr << "[ ";
    for(const T& val : v) cerr << val << " ";
    cerr << "]\n";
}

int main() {
    FAST;
    
    int n;
    cin >> n;
    vector<int>v(n);
    for(auto &x:v)
    cin >> x;
    vector<vector<int>>d(n,vector<int>(3,1000000000));
    d[0][0] = 1;
    if(v[0] & 1)
        d[0][1] = 0;
    if(v[0] & 2)
        d[0][2] = 0;
    for(int i=1;i<n;i++)
    {
        d[i][0]=1+min({d[i-1][0],d[i-1][1],d[i-1][2]});
        if(v[i]&1)
            d[i][1]=min(d[i-1][0],d[i-1][2]);
        if(v[i]&2)
            d[i][2]=min(d[i-1][0],d[i-1][1]);
    }
    cout << min({d[n-1][0], d[n-1][1], d[n-1][2]}) << endl;
    return 0;
}