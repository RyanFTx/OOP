#include <iostream>
extern void print_matrix(int array[10][10]);
int main(void){
    int array[10][10] = {{1,2,3},{4,5,6},{7,8,9}};
    print_matrix(array);
}