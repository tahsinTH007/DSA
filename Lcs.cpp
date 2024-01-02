#include<bits/stdc++.h>
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
    int L[m + 1][n + 1];
    int i, j;


    for (i = 0; i <= m; i++) {
        for (j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                L[i][j] = 0;

            else if (word1[i - 1] == word2[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;

            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }

    cout<<L[m][n]<<endl;

}
