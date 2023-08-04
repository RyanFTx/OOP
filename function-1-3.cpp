#include <iostream>


void count_digits(int array[4][4]){
    int count = 0;
    int num = 0;
    for(int k = 0; k <=9; k++){
        for(int i = 0; i < 4 ; i++){
            for(int j = 0 ; j < 4 ;j++){
                array[i][j] == num ? count++ : count = count;

            }

        }
        printf("%d:%d;",num,count);
        count = 0;
        num++;
    }
}


