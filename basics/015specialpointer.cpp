#include<iostream>
#include<memory> // needed for smart pointers

using namespace std;

class User{
    public:
    User(){
        cout<<"User constructor"<<endl;
    }
    ~User(){
        cout<<"User destructor"<<endl;
    }

    void testFunc(){
        cout<<"User test function"<<endl;
    }
};

int main(int argc, char const *argv[])
{
    {
        unique_ptr<User> sam = make_unique<User>(); // better way to create unique pointer
        sam->testFunc(); // Call test function
    }

    {
        shared_ptr<User> tim = make_shared<User>();
        tim->testFunc(); // Call test function
        shared_ptr<User> timm = tim; // copying here
    }

    

    return 0;
}
