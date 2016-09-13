#include <bits/stdc++.h>
#define min(a, b) (a < b ? a : b)
using namespace std;

/*

   Compose the largest number out of a set of integers.

 */

string get_max(string a, string b){

    string c = a + b;
    string d = b + a;

    if(c >= d)
        return a;
    else
        return b;

}

int main(){

    int n, index;
    vector<string> a;
    vector<string> ans;
    string x, max;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x;
        a.push_back(x);
    }

    while(a.size()){
        max = "0";

        for(int i = 0; i < a.size(); i++){
            x = max;
            max = get_max(max, a[i]);
            if(x != max)
                index = i;
        }

        ans.push_back(max);
        a.erase(a.begin() + index);
    }

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i];
    }

    return 0;
}
