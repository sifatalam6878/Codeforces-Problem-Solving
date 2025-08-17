#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mxcapa = 0, curr = 0;
    while(n--)
    {
        int exit,enter;
        cin >> exit >> enter;

        curr = curr - exit + enter;
        mxcapa = max(mxcapa,curr);
    }
    cout << mxcapa << endl;
    return 0;
}
