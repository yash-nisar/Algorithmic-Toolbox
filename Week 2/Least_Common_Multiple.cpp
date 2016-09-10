#include <bits/stdc++.h>
using namespace std;

/*

   Given two integers a and b, find their least common multiple.

 */

long long int gcd(int a, int b) {

    return b == 0 ? a : gcd(b, a % b);

}

int main(){

    long long int a, b;
    cin >> a >> b;

    cout << (a * b) / gcd(a, b);

    return 0;
}
