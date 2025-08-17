#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    vector<vector<int>> matrix(n,vector<int>(m));
    vector<vector<int>> dp(n,vector<int>(m,0));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> matrix[i][j];
        }
    }

    dp[n-1][m-1] = matrix[n-1][m-1];
    for(int j = m-2; j >= 0; j--)
    {
        dp[n-1][j] = matrix[n-1][j] + dp[n-1][j+1];
    }
    for(int i = n-2; i >= 0; i--)
    {
        dp[i][m-1] = matrix[i][m-1] + dp[i+1][m-1];
    }

    for(int i=n-2;i>=0;i--)
    {
        for(int j=m-2;j>=0;j--)
        {
            dp[i][j] = matrix[i][j] + max(dp[i+1][j],dp[i][j+1]);
        }
    }
    cout << dp[0][0] << endl;

    return 0;
}
