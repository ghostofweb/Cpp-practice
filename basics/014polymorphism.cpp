#include<iostream>
#include <memory>
using namespace std;

class One{
    public:
    virtual void intro(){
        cout<<"This is class One \n"<<endl;
    }
};

class Two : public One{
    public:
    void intro(){
        cout<<"This is class Two\n"<<endl;
    }
};

class Three : public One{
    public:
    void intro(){
        cout<<"This is class three\n"<<endl;
    }
};

int main(){
    One *a;// pointer of a with the datatype One
    Two b;
    Three c;
   
   a = &b;
   a->intro(); // without virtual 
}