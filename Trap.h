#ifndef TRAP_H
#define TRAP_H

#include "Cell.h"

class Trap:Cell{
    protected:
        char type = 'T';
        bool active = false;
    public:
        Trap(int x, int y){
            position = {x, y};
        }
        bool isActive(){
            return active;
        }
        void apply(Cell& cell){
            cell.setType('T');
            active = false;
        }

};




#endif