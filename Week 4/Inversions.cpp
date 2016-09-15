#include <bits/stdc++.h>
using namespace std;

/*

The goal in this problem is to count the number of inversions of a given
sequence.

*/

long long int inversions = 0;

void Merge(int left[], int right[], int a[], int nl, int nr){
    int i = 0, j = 0, k = 0;

    while((i < nl) && (j < nr)){

        if(left[i] <= right[j]){
            a[k++] = left[i++]; 
        }
        else{
            a[k++] = right[j++];
            inversions += (nl - i);
        }
    }

    while(i < nl){
        a[k++] = left[i++];
    }

    while(j < nr){
        a[k++] = right[j++];
    }

}

void Merge_Sort(int a[], int n){
    if(n < 2)
        return;
    else{
        int mid = n / 2;
        int left[mid];
        int right[n - mid];

        for(int i = 0; i < mid; i++){
            left[i] = a[i];
        }

        for(int i = mid; i < n; i++){
            right[i - mid] = a[i];
        }

        Merge_Sort(left, mid);
        Merge_Sort(right, n - mid);
        Merge(left, right, a, mid, n - mid);
    }

}


int main(){

    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    Merge_Sort(a, n);
    
    cout << inversions << endl;

    return 0;
}
