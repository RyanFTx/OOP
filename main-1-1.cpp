#include <iostream>
extern int sum_diagonal(int array[4][4]);

int main(void){
    int arr[4][4] = {
        {1,2},
        {5,6},
        {9,10}
    };
    int sum = sum_diagonal(arr);
    printf("%d\n",sum);

    int arr2[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int sum2 = sum_diagonal(arr2);
    printf("%d\n",sum);

    int arr3[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int sum3 = sum_diagonal(arr3);
    printf("%d\n",sum);

}