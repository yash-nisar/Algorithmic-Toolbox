#include <bits/stdc++.h>
using namespace std;

/*

   Given two sequences a1 , a2 , . . . , an (ai is the profit per click 
   of the i-th ad) and b1 , b2 , . . . , bn (bi is the average number 
   of clicks per day of the i-th slot), we need to partition them into 
   n pairs (ai , bj) such that the sum of their products is maximized.

 */

int main(){

    long num_of_ads, profit_per_click[1001], avg_clicks[1001];
    long long int total = 0;

    cin >> num_of_ads;

    for(int i = 0; i < num_of_ads; i++){
        cin >> profit_per_click[i];
    }

    for(int i = 0; i < num_of_ads; i++){
        cin >> avg_clicks[i];
    }

    sort(profit_per_click, profit_per_click + num_of_ads);
    sort(avg_clicks, avg_clicks + num_of_ads);

    for(int i = 0; i < num_of_ads; i++){
        total += (avg_clicks[i] * profit_per_click[i]);
    }

    cout << total << endl;

    return 0;
}
