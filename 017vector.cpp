#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int>inty;
    inty.push_back(2);
    inty.push_back(4);
    inty.push_back(27);

    // loop till
    for (auto i = inty.begin(); i != inty.end() ; i++) //i is the pointer
    {
        printf("%d\n",*i);
    }
    


    return 0;
}
