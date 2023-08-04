#include <iostream>
extern void count_digits(int array[4][4]);
int main(void){
    int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,11,12,13}};
    count_digits(arr);
}