#include <bits/stdc++.h>
using namespace std;
#define min(a, b, c) (((a < b) && (a < c)) ? a : (b < c) ? b : c)

/*

   The goal of this problem is to implement the algorithm for 
   computing the edit distance between two strings.

 */

int dp[101][101];

int main(){

    string s1, s2;
    cin >> s1 >> s2;

    int l1 = s1.length(); l1++;
    int l2 = s2.length(); l2++;

    for(int i = 0; i < l2; i++){
        for(int j = 0; j < l1; j++){

            if(i == 0){
                dp[i][j] = j;
            }

            else if(j == 0){
                dp[i][j] = i;
            }

            else if(s2[i - 1] == s1[j - 1]){
                dp[i][j] = dp[i - 1][j - 1];  
            }

            else{
                dp[i][j] = min(1 + dp[i - 1][j], 
                               1 + dp[i][j - 1], 
                               1 + dp[i - 1][j - 1]);     
            }

        }

    }

    cout << dp[l2 - 1][l1 - 1] << endl;

    return 0;
}
