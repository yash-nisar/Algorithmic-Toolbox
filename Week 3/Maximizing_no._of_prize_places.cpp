#include <bits/stdc++.h>
using namespace std;

/*

   The goal of this problem is to represent a given positive integer n as a 
   sum of as many pairwise distinct positive integers as possible. 
   That is, to find the maximum k such that n can be written as
   a1 + a2 + · · · + ak where a1 , . . . , ak are positive integers and 
   ai ̸= aj for all 1 ≤ i < j ≤ k.

 */

int main(){

    long num_of_candies, total = 0;

    cin >> num_of_candies;

    int places = (-1 + sqrt(1 - 4*(-2 * num_of_candies)))/2;
    cout << places << endl;

    for(int i = 1; i < places; i++){
        cout << i << " ";
        total += i;
    }

    cout << num_of_candies - total << endl;

    return 0;
}
