#ifndef USB_CONNECTION_H
#define USB_CONNECTION_H

#include <iostream>
#include <stack>


class USBConnection {
private:
    int ID;

    // Private constructor
    USBConnection(int id) : ID(id) {}

public:
    static std::stack<int> ids;
    //static function to create new objects
    static USBConnection* createConnection() {
        if (!ids.empty()) {
            int id = ids.top(); // Retrieves first value of ID stack. 
            ids.pop(); //Removes top element from stack
            return new USBConnection(id); // creates usbconnection object with ID
        }
        return nullptr; // returns nothing if the stack is empty
    }    
};

// Initialize the stack with available IDs
std::stack<int> USBConnection::ids({3, 2, 1});


#endif