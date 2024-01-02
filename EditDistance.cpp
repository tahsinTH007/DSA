#include<bits/stdc++.h>
#include<string>
#include<math.h>
using namespace std;

int main(){
   string word1;
   string word2;
   cout<<"Enter you first word:"<<endl;
   cin>>word1;
   cout<<"Enter you Second word:"<<endl;
   cin>>word2;

    int m = word1.length();
    int n = word2.length();
    int dp[m+1][n+1];

    for (int i = 0; i <= m; ++i) {
        for (int j = 0; j <= n; ++j) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            } else if (word1[i - 1] == word2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 0;
            } else {
                dp[i][j] = min(min(dp[i - 1][j] + 1, dp[i][j - 1] + 1), dp[i - 1][j - 1] + 2);
            }
        }
    }

   cout<<"Edit distance:"<<dp[m][n]<<endl;

}

