#ifndef FORD_H
#define FORD_H


#include <iostream>
using namespace std;
#include "Car.h"

class Ford: public Car{
    private:
        int badgeNumber;
        float litresOfFuel = 60;
    public:
        Ford(int badgeNumber, int price){
            this->badgeNumber = badgeNumber;
            this->price = price;
        }
        void set_Fuel(float fuel){
            litresOfFuel = fuel;
        }
        float get_litresOfFuel(){
            return litresOfFuel;
        }
        void set_badgeNumber(int num){
            badgeNumber = num;
        }
        int get_badgeNumber(){
            return badgeNumber;
        }
        void drive(int kms){
            for(int i = 0; i < kms / 5 && litresOfFuel > 0; i++){
                litresOfFuel -= 1;
                emissions = 234 * i;

            }
        }
        void refuel(int fuel){
            if(fuel >= 60){
                litresOfFuel += 60;
            } else {
                litresOfFuel += fuel;
            }
        }


};

#endif
