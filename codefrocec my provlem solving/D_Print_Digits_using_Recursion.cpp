#include<bits/stdc++.h>
using namespace std;

void fibo(int n)
{
    if(n < 10)
    {
        cout << n;
        return;
    }
    fibo(n/10);
    cout << " " << n%10;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        fibo(n);
        cout << endl;
    }
    return 0;
}
