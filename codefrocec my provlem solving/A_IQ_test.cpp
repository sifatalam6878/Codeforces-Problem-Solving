#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int num[100];
    int evcnt = 0, oddcnt = 0;
    int last_even = 0,last_odd = 0;
    for(int i=0;i<n;i++)
    {
        cin >> num[i];
        if(num[i]%2==0)
        {
            evcnt++;
            last_even = i + 1; // +1 because output uses 1-based indexing
        }
        else
        {
            oddcnt++;
            last_odd = i + 1;
        }
    }
    if(evcnt == 1)
    {
        cout << last_even << endl;
    }
    else
    {
        cout << last_odd << endl;
    }

    return 0;
}
