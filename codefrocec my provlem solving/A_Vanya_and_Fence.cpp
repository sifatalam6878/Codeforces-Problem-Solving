#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h;
    cin >> n >> h;
    int wdth = 0;
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a > h)
            wdth += 2;
        else
            wdth += 1;
    } 
    cout << wdth << endl;
    return 0;
}
