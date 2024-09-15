#include <iostream>

using namespace std;

class User
{
private:
    int secret = 22;
public:
    void defineLaterClass(); // defining the class to write the expression later
    string name = "default";
    void classMessage(){cout << "This is a class name : d"<<name<<  endl;}

    //getter and setter
    void setSecret(const int &newsecret) //const for protection layer
    {
        secret = newsecret;
    }

    int getSecret(){
        return secret;
    }
};


void User::defineLaterClass(){ //defineLaterClass
    cout<<"defined the class later"<<endl;
}


int main()
{
    User sam;
    sam.name = "Sam";
    sam.classMessage();
    sam.setSecret(333);
    int a = sam.getSecret();
    cout <<"the secret is "<< a<<endl;
}
