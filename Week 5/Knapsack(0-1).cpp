#include <bits/stdc++.h>
#define max(a, b) (a > b ? a : b)
using namespace std;

/*

   In this problem, you are given a set of bars of gold and your goal 
   is to take as much gold as possible into your bag. There is just 
   one copy of each bar and for each bar you can either take it or 
   not (hence you cannot take a fraction of a bar).

 */

int dp[301][10001];
int bars[301];

int main(){

    int capacity, n;
    cin >> capacity >> n; n++; capacity++;

    bars[0] = 0;

    for(int i = 1; i < n; i++){
        cin >> bars[i];
    }

    sort(bars, bars + n);

    for(int i = 0; i < capacity; i++){
        dp[0][i] = 0;
    }

    for(int i = 0; i < n; i++){
        dp[i][0] = 0;
    }

    for(int i = 1; i < n; i++){
        for(int j = 1; j < capacity; j++){
            if(j < bars[i]){
                dp[i][j] = dp[i - 1][j];
            }
            else{
                dp[i][j] = max(dp[i - 1][j], bars[i] + dp[i - 1][j - bars[i]]);
            }
        }
    }

    cout << dp[n - 1][capacity - 1];
    
    return 0;
}
