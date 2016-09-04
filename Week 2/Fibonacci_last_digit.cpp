#include <bits/stdc++.h>
using namespace std;

/*

   Given an integer n, find the last digit of the nth
   Fibonacci number Fn.

 */

int fibo[10000001];

int main(){

    int n;
    cin >> n;

    fibo[0] = 0;
    fibo[1] = 1;

    if(n == 1 || n == 0){
        cout << fibo[n] << endl;
    }

    else{

        for(int i = 2; i <= n; i++){
            fibo[i] = (fibo[i - 1] + fibo[i - 2]) % 10;
        }

        cout << fibo[n] << endl;
    }

    return 0;

}
