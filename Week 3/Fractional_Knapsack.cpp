#include <bits/stdc++.h>
using namespace std;

/*

   The goal of this code problem is to implement an algorithm for the 
   fractional knapsack problem.

 */

int main(){

    long long int num_of_items, capacity, value[1001], weight[1001], t, 
    last_index = -1;
    long double ratio[1001], temp, max_value = 0;

    cin >> num_of_items >> capacity;

    for(int i = 0; i < num_of_items; i++){
        cin >> value[i] >> weight[i];
        ratio[i] = (long double)value[i] / (long double)weight[i];
    }

    for(int i = 0; i < num_of_items - 1; i++){
        for(int j = 0; j < num_of_items - i - 1; j++){

            if(ratio[j] > ratio[j + 1]){
                temp = ratio[j];
                ratio[j] = ratio[j + 1];
                ratio[j + 1] = temp;

                t = value[j];
                value[j] = value[j + 1];
                value[j + 1] = t;

                t = weight[j];
                weight[j] = weight[j + 1];
                weight[j + 1] = t;

            }
        }
    }

    for(int i = num_of_items - 1; i >= 0; i--){

        if(capacity - weight[i] < 0){
            last_index = i;
            break;
        }

        capacity -= weight[i];
        max_value += value[i];

    }

    if(last_index != -1)
        max_value += capacity * ratio[last_index];

    cout << setprecision(4) << fixed << max_value << endl;

    return 0;
}
