#include<iostream>
#include "header.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int life = 10;
    callbyvalue(life);
    cout<<"after call by value "<<life<<endl;
    callbyref(&life);
    cout << "after call by ref " << life << endl;
    return 0;
}
