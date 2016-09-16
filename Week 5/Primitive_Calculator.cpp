#include <bits/stdc++.h>
using namespace std;

/*

   Given an integer n, compute the minimum number of operations 
   needed to obtain the number n starting from the number 1.

 */

int main(){

    int n, n1, n2, n3, result, counter = 0;
    vector<int> ans;
    cin >> n;
    int a[n + 1];
    int derived[n + 1];

    a[1] = 0; derived[1] = 0;
    a[2] = 1; derived[2] = 1;
    a[3] = 1; derived[3] = 1;

    for(int i = 4; i < n + 1; i++){

        n1 = INT_MAX, n2 = INT_MAX, n3 = INT_MAX;
        n1 = a[i - 1] + 1;

        if(i % 2 == 0){
            n2 = a[i / 2] + 1;
        }

        if(i % 3 == 0){
            n3 = a[i / 3] + 1;
        }

        result = (((n1 < n2) && (n1 < n3)) ? n1 : (n2 < n3) ? n2 : n3);

        if(result == n1){
            derived[i] = i - 1;
            a[i] = n1;
        }
        else if(result == n2){
            derived[i] = i / 2;
            a[i] = n2;
        }
        else{
            derived[i] = i / 3;
            a[i] = n3;
        }
    }

    ans.push_back(n);

    while(derived[n] != 0){

        n = derived[n];
        ans.push_back(n);
        counter++;

    }

    cout << counter << endl;

    for(int j = ans.size() - 1; j >= 0; j--){
        cout << ans[j] << " ";
    }

    cout << endl;

    return 0;
}

