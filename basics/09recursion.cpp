#include<iostream>

using namespace std;

int fact(int a){
    if(a > 1) {
         return a * fact(a-1);
    }
}

int main(){
    int value = fact(5);
    printf("%d", value);
    cout << "hrllo";
}