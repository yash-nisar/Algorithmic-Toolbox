#include <bits/stdc++.h>
using namespace std;

/*

   Given an integer n, find the last digit of the sum 
   F0 + F1 +·· + Fn.

 */
int base_case(int x){
    if(x == 0)
        return 0;
    else if(x == 1)
        return 1;
    else
        return x;
}

int main(){

    long long int n, ans = 0;
    int fibo[100], sum = 0;
    cin >> n;

    fibo[0] = 0;
    fibo[1] = 1;
    sum = 1;

    if(base_case(n) == 0 || base_case(n) == 1)
        cout << base_case(n);

    else{
        // Pisano period for (Fn % 10) is 60.
        for(int i = 2; i <= 59; i++){
            fibo[i] = (fibo[i - 1] + fibo[i - 2]) % 10;
            sum += fibo[i];
        }
        // The period occurs (n / 60) number of times
        ans += (((n / 60) * (sum % 10))) % 10;

        if((base_case(n % 60) == 0) || (base_case(n % 60) == 1)){
            ans += base_case(n % 60);
        }
        else{
            ans += 1;
            for(int i = 2; i <= (n % 60); i++){
                ans += fibo[i];
            }

        }
        cout << ans % 10 << endl;

    }

    return 0;
}
