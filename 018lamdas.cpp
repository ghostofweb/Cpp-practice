#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    []{cout<<"hello lambda"<<endl;}();

    auto sum = [](auto a, auto b){return a+b;};
    cout<<sum(1,2)<<endl;
    
    return 0;
}
