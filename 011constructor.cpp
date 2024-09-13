#include <iostream>

using namespace std;

class Phone{
    string _name = "";
    string _os = "";
    int _price = 0;
    public:

    // default constructor
    // Phone(const string &name, const string &os, const int &price); // parameterized constructor
    // Phone(const Phone &); //Copy constructor
    // string getName(){return _os;}
    // ~Phone(); //destructor
    Phone() {
        cout << "Default constructor called" << endl;
    }
};

int main(){
    
    Phone ph,ph2;
    printf("value of the object is %p", &ph);
    return 0;
}