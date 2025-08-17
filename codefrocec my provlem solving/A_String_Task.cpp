#include<bits/stdc++.h>
using namespace std;
int main()
{
    string input, result = "";
    cin >> input;
    for(char c : input)
    {
        c = tolower(c);
        if (c != 'a' && c != 'o' && c != 'y' && c != 'e' && c != 'u' && c != 'i')
        {
            result += '.';
            result += c;
        }
    }

    cout << result << endl;
    return 0;
}
