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
bool isPrime(long long x)
{
    if(x<2)
    return false;
    if(x%2==0)
       return(x==2);
    for(long long i=3;i*i<=x;i+=2)
    {
        if(x%i==0)
           return false;
    }
    return true;
}
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

int main()
{
    FAST;
    int t;
    if(!(cin >> t))
      return 0;
    while(t--)
    {
        long long n;
        cin >> n;
        if(n==1)
        {
            cout << "FastestFinger\n";
            continue;
        }
        if(n==2)
        {
            cout << "Ashishgup\n";
            continue;
        }
        if(n%2==1)
        {
            cout << "Ashishgup\n";
            continue;
        }
        long long m = n;
        int k = 0;
        while(m%2==0)
        {
            m/= 2;
            k++;
        }
        if(m==1)
        {
            cout << "FastestFinger\n";
            continue;
        }
        if(k>1)
        {
            cout << "Ashishgup\n";
            continue;
        }
        if(isPrime(m))
           cout << "FastestFinger\n";
        else
           cout << "Ashishgup\n";
    }
    return 0;
}