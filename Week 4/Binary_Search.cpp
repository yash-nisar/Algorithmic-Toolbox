#include <bits/stdc++.h>
using namespace std;

/*

   The goal in this code problem is to implement the 
   Binary Search algorithm.

 */
int Binary_Search(int a[], int low, int high, int key){

    if(low > high){
        return -1;
    }

    int mid = low + ((high - low) / 2);

    if(a[mid] == key){
        return mid;
    }
    else if(key < a[mid]){
        return Binary_Search(a, low, mid - 1, key);
    }
    else{
        return Binary_Search(a, mid + 1, high, key);
    }

}



int main(){

    int n, k;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    cin >> k;
    int b[k];

    for(int i = 0; i < k; i++){
        cin >> b[i];
        cout << Binary_Search(a, 0, n - 1, b[i]) << " ";
    }

    return 0;
}
