#include<iostream>

using namespace std;

int main(){
    int *myp;
    try
    {
        myp = new int[100];
        cout << "Memory address of myp: " << myp << endl;
    }
    catch(...)
    {
        cout<<"failed";
    }

    delete [] myp; 
    
}