#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <typeinfo>
#include <string.h>
using namespace std;

// vector of int.
// used to store the records
typedef vector<int> Records;

bool isInt(string &s){
    for(char c : s){ // for-each loop
        if(!isdigit(c)){
            return false;
        }
    }
    return true;
}

// https://www.cplusplus.com/doc/tutorial/files/
class RecordsManager {
private:
    fstream _file;
    string _filename;

public:
    RecordsManager(string filename) : _filename(filename) {}
    void read(Records &records) {
        _file.open(_filename, ios::in);
        if (_file.is_open()) {
            string line; //reference : https://www.tutorialspoint.com/how-to-check-if-a-c-cplusplus-string-is-an-int#:~:text=Using%20built%2Din%20method%20isdigit,string%20does%20not%20contain%20int.
            while (std::getline(_file, line)) {
                if(isInt(line)){
                    int value = stoi(line);
                    records.push_back(value);
                } else{
                    throw("Invalid line format (Not an integer)");
                }
            }
            _file.close();
        }
    }
};

int main() {
        
        RecordsManager receordM("test_clean-1.txt");
        RecordsManager receordM("test_corrupt1.txt");
        RecordsManager receordM("test_corrupt2.txt");
        Records myRecords;

        // reads records
        try
        {
            receordM.read(myRecords);
        }
        catch(const char* msg)
        {
            cerr << msg << endl;
        } catch(std::out_of_range r){
            cerr<< "Integer value is out of range (exceeds 32 bit)" << endl;
        }
        

        // calculate and print out the sum
        int sum = 0;
        for (int i = 0; i < myRecords.size(); i++) {
             sum += myRecords[i];
        }
        cout << sum << endl;
    return 0;
}