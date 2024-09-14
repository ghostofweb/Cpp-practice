#include <iostream>
using namespace std;

class Phone {
    string _name;
    string _number;
    int _price;

public:
Phone();
    // Constructor with one parameter (name) using an initializer list
    Phone(const string &name) : _name(name), _number("unknown"), _price(0) {
        cout << "Your phone name is " << _name << endl;
    }
};
// default values
Phone::Phone() :  _name(), _number(),_price(){
    cout << "Your phone name is " << _name << endl;
}

int main() {
    Phone bp("abc");
    return 0;
}
