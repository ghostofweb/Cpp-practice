#include <iostream>
using namespace std;

int get(){
    return 2;
}

int main(){
    int (*pointsToGetTwo)() = get;
    cout<< pointsToGetTwo()<<endl;

    return 0;
}