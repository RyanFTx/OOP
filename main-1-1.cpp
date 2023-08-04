#include <iostream>
extern int sum_diagonal(int array[4][4]);

int main(void){
    int arr[4][4] = {
        {1,2},
        {5,6},
        {9,10}
    };
    int sum = sum_diagonal(arr);
    printf("%d",sum);

}