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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define FAST ios_base::sync_with_stdio(0);cin.tie(0); // (C++ only, ignore in C)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define YES printf("YES\n");
#define NO printf("NO\n");
#define loop(i,a,b) for(int i=a;i<b;i++)
#define min3(a,b,c) ((a)<(b)?((a)<(c)?(a):(c)):((b)<(c)?(b):(c)))
#define max3(a,b,c) ((a)>(b)?((a)>(c)?(a):(c)):((b)>(c)?(b):(c)))
#define ceil_div(a,b) (((a) + (b) - 1) / (b))

typedef long long ll;
typedef unsigned long long ull;

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
int ddx[] = {-1,-1,-1,0,0,1,1,1};
int ddy[] = {-1,0,1,-1,1,-1,0,1};
int kx[] = {-2,-2,-1,-1,1,1,2,2};
int ky[] = {-1,1,-2,2,-2,2,-1,1};

ll mod_add(ll a, ll b, ll m) { return ((a % m) + (b % m)) % m; }
ll mod_mul(ll a, ll b, ll m) { return ((a % m) * (b % m)) % m; }
ll mod_pow(ll a, ll b, ll m) {
    ll res = 1; a %= m;
    while(b > 0) {
        if(b & 1) res = mod_mul(res, a, m);
        a = mod_mul(a, a, m);
        b >>= 1;
    }
    return res;
}

int main(void) {
    // Input fast I/O optional in C

    return 0;
}
