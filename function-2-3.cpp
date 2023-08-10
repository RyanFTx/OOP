#include <iostream>

int palindrome_sum(int integers[], int length){
    int sum = 0;
    for(int i = 0; i < length; i++){
    sum += integers[i];
    }
    return sum;
}

bool is_array_palindrome(int integers[], int length){
    if(length > 0){
        int flip[100];
        int j = 0;
        for(int i = length; i > 0 ; i--){
            flip[j] = integers[i];
            j++;
        }

        for(int k = 0; k < length; k++){
            if(integers[k] != flip[k]){
                return -2;
            } else {return 0;}
        }
    } else{
        return false;
    }
    return false;

}

