#include <iostream>
extern void print_summed(int array1[3][3], int array2[3][3]);
int main(void){
    int mat1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int mat2[3][3] = {{10,11,12}, {13,14,15}, {16,17,18}};
    print_summed(mat1, mat2);
}