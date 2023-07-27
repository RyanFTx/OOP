#include <iostream>
extern int array_sum(int array[], int n);

int main(){
    int myArray[] = {1,2,3,4,5};
    int size = 5;
    int sum = array_sum(myArray,size);

    std::cout << "Sum of array elements: " << sum << std::endl;

    return 0;
}