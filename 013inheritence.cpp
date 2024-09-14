#include<iostream>

using namespace std;

class Man{
    string _name;
    int _age;
    Man(){}
    protected:

    Man(const string & name, const int & age)
    :_name(name),
    _age(age){} // paramatric constructor

    void run(){puts("i can run");}

    public:
    void sayName() const;
};

void Man::sayName() const{
    cout << _name << endl;
}


class Superman : public Man{
    bool flight;
    public:
    Superman(string name) : Man(name, 26){}
    void run(){puts("fast boiii");}
};

// spider man
class SpiderMan : public Man{
    bool web;
    public:
    SpiderMan(string name) : Man(name, 25){}
    void run(){puts("spidey sense");}
};

int main(){
    Superman clark("ayo");
    clark.sayName();
}
