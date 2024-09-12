#include <iostream>

using namespace std;

void callbyvalue(int life){
    ++life;
}

void callbyref(int *life){
    ++*life;
}

int main(int argc, char const *argv[])
{
    int life = 10;
    callbyvalue(life);
    cout<<"after call by value "<<life<<endl;
    callbyref(&life);
    cout << "after call by ref " << life << endl;
    return 0;
}







// Read the pointers_and_reference_notes.md
int pointer(int argc, char const *argv[])
{   
    int number = 10;
    int *p;
    p = &number;
    int &refnum = number;

    cout<<refnum<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;


    return 0;
}
