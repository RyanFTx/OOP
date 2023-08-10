#include <iostream>
extern int bin_to_int(int binary_digits[], int number_of_digits);
int main(void){
    int array[5] = {1,0,1,1,0};
    bin_to_int(array,5);
}