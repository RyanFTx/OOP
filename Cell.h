#ifndef CELL_H
#define CELL_H

#include <iostream>
#include <random>

class Cell{
    protected:
        std::tuple<int, int> position;
        char type;
    public:
        Cell(int x,int y, char type){
            position = {x,y};
            type = type;
        }
        Cell(){
            position = {0,0};
            type = ' ';
        }
        
        std::tuple<int, int> getPos(){
            return position;
        }

        char getType(){
            return type;
        }

        void setPos(int x, int y){
            position = {x,y};
        }

        void setType(char type){
            type = type;
        }


};






#endif