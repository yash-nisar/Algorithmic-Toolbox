#include <bits/stdc++.h>
using namespace std;

/*

Find the minimum number of coins needed to change the input value 
(an integer) into coins with denominations 1, 5 and 10.

*/

int main(){

    int money, min_coins = 0; 

    cin >> money;

    if(!money){
        cout << min_coins << endl;
        return 0;
    }
    min_coins = min_coins + (money / 10);
    money = money % 10;

    if(!money){
        cout << min_coins << endl;
        return 0;
    }
    min_coins = min_coins + (money / 5);
    money = money % 5;

    if(!money){
        cout << min_coins << endl;
        return 0;
    }
    min_coins = min_coins + (money / 1);
    money = money % 1;

    cout << min_coins << endl;

    return 0;
}
