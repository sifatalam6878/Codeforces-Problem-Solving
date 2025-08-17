#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int lucky_count = 0;
    while(n > 0)
    {
        int digit = n % 10;
        if(digit == 4 || digit == 7)
        {
            lucky_count++;
        }
        n /= 10;
    }

    if(lucky_count == 4 || lucky_count == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
