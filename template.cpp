#include <iostream>

using namespace std;

template<typename T>

T add(T a, T b){
    return a + b;
}

int main(){
    int a = 10;
    int b = 20;
    float c = 22.23;
    float d = 12.66;
    cout << add(a, b) << endl;
    cout<< add(c,d) <<endl;

    return 0;
}