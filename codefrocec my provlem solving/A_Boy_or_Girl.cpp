#include<bits/stdc++.h>
using namespace std;
int main()
{
    string username;
    cin >> username;

    int freq[26] = {0};
    
    int distinct_count = 0;

    for(char c : username)
    {
        int index = c - 'a';
        if (freq[index] == 0)
        {
            distinct_count
            ++;
        }
        freq[index]
        ++;
    }

    if (distinct_count % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
