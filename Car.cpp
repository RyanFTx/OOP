#include <iostream>

class Car{
    private:
        int price;
        int emissions = 0;
    public:
        Car(){};
        Car(int price){
            this->price = price;
        }
        int getPrice(){
            return price;
        }
        int getEmissions(){
            return emissions;
        }
        void setPrice(int price){
            this->price = price;
        }
        void setEmissions(int emissions){
            this->emissions = emissions;
        }
        virtual void drive(int kms){
            this->emissions = 20 * kms;
        }

};