#include<iostream>
// #define NULL 0; 
// a way to use NULL as number and make the error go away
using namespace std;

void printval(int a)
    {
        printf("the value of int is %d", a); //expects the int value
    }
void printval(float a)
    {
        printf("the value of int is %f", a); // expects the float value
    }
void printval(int *a)
    {
        printf("the value of int is %d", a); // expects the pointer value
    }

int main()
{   
    printval(nullptr);
    return 0;
}
