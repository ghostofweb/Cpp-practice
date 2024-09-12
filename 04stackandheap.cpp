#include<iostream>;

using namespace std;

struct User
{
    const int id;
    int age;

    User(): id(20), age(123) {}; // way to make constructor in the struct
};


int main()
{     
    int score = 100;
    User mike;
    //stack


    //heap
    int* heap_score = new int; // heap memory
    *heap_score = 200;

    User* nike = new User;

    // we have to delete the new keyword variable which are in the heap
    delete heap_score;
    delete nike;
    return 0;
}

