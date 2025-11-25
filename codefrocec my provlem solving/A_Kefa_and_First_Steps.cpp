#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count=1;
    int max=1;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<=a[i+1])
        {
            count++;
            if(count>max)
            {
                max=count;
            }
        }
        else
        {
            count=1;
        }
    }
    cout<<max<<endl;
    return 0;
}
