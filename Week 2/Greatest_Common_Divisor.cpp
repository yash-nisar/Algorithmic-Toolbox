#include <bits/stdc++.h>
using namespace std;

/*

   Given two integers a and b, find their greatest common divisor.

 */

int gcd(int a, int b) {
    
    return b == 0 ? a : gcd(b, a % b);

}

int main(){
    
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b);

    return 0;
}
