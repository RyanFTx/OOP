#include <iostream>
extern int palindrome_sum(int integers[], int length);
extern bool is_array_palindrome(int integers[], int length);
int main(void){
    int array[5] = {2,2,3,4,5};
    if(is_array_palindrome(array,5)){
        std::cout << "Sum is " << palindrome_sum(array,5) << std::endl;
    }

}