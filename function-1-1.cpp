#include <iostream>
#include <string>

using namespace std;

int array_sum(int array[], int n){
    int sum = 0;
    if(n >= 1){
        for(int i = 0; i<=n; i++){
            sum += array[i];
        }
        return sum;
    } else{
        return 0;
    }
}