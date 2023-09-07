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
        void setFuel(float fuel){
            litresOfFuel = fuel;
        }
        float getFuel(){
            return litresOfFuel;
        }
        void setbadgeNumber(int num){
            badgeNumber = num;
        }
        int getbadgeNumber(){
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
