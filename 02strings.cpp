#include<iostream>

using namespace std;
// int main()
// {
//     char a[] = "hello world"; // the way to define a string using char
//     cout << a <<endl;
//     char b[] = {'f','e','d','b','a',0};
//     cout<<b<<endl;

//     for (int i = 0; i < a[i] ; i++) //looping till the array terminates
//     {
//         cout<<a[i];
//     }
//     return 0;

//     for (char *cp = a; *cp != 0 ; cp++) // pointing towards the first element then looping till we get 0 by derefrencing it each time and then ++ for next index
//     {<<endl;
//     }
    
// }


// //TRY-CATCH

// int main(int argc, char const *argv[])
// {
//     try
//     {
//         /* code */
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
    
//     return 0;
// }

//Quantifires
// static


int lifeup(){
    static int life = 3;
    return ++life;
}

int main(int argc, const char** argv) {
    int life;
    life = lifeup();
    life = lifeup();
    cout<<life<<endl;
    return 0;
}