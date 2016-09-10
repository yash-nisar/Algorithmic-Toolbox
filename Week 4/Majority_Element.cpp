#include <bits/stdc++.h>
using namespace std;

/*

   The goal in this code problem is to check whether an input 
   sequence contains a majority element.

 */

int main(){

    int n, key, flag = 0;
    scanf("%d",&n);

    map<int, int> a;
    map<int, int> :: iterator it;

    for(int i = 0; i < n; i++){
        scanf("%d", &key);
        a[key]++;
    }

    for(it = a.begin(); it != a.end(); it++){
        if(it->second > n / 2){
            flag = 1;
            break;
        } 
    }

    cout << flag << endl; 

    return 0;
}
