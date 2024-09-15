#include<iostream>

using namespace std;

// struct User
// {
//     const int uId;
//     const char * name;
//     const char *email;
//     int course_count;
// };


// int main(){
//     User mick = {001,"mick","mick@gmail.com",4};
//     cout << mick.uId << endl;
//     cout << mick.name << endl;
//     cout << mick.email << endl;
//     cout << mick.course_count << endl;
//     User *m = &mick; 
//     cout << m ->course_count << endl; // using pointer to access the field of that struct
//     return 0;
// }


// AUTO keyword

string api_call(){
    return "Hello, World!";
}

int main()
{
    auto response = api_call(); // automatically assigning data type 
    cout << response << endl;
    return 0;
}
