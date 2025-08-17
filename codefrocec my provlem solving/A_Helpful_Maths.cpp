#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    vector<int> num;

    for (int i=0;i<s.length(); i+=2)
    {
        num.push_back(s[i]-'0');
    }
    sort(num.begin(),num.end());

    for (int i=0;i<num.size();i++)
    {
        cout << num[i];
        if (i != num.size()-1)
        {
            cout << "+";
        }
    }

    return 0;
}