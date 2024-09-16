#include<iostream>

using namespace std;

void countDigit(int n){
    int count = 0 ;
    while(n > 0 ){
        int lastdigit = n % 10;
        count = count + 1;
        n = n  / 10;
    }

    cout<<"the number of digits is "<< count <<endl;
}

void reverseDigit(int n){
    int oldN = n;
    int reverse = 0;
    while(n > 0){
        int lastDigit = n % 10;
        reverse = (reverse * 10) + lastDigit;
        n = n/10;
    }
    cout<<"the reverse of "<< oldN <<" is "<<reverse<<endl;
}

// Given a number n. Count the number of digits in n which evenly divide n. Return an integer, total number of digits of n which divides n evenly.

void divideNumber(int n){
    int count = 0;
    int orgNumber = n;
    while (n > 0 )
    {
        int lastDigit = n % 10;
        if (lastDigit != 0 && orgNumber % lastDigit == 0)
        {
            count = count + 1;
        }
        n = n / 10;
        
    }
    cout << count <<endl;
}

int main(int argc, const char** argv) {
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    divideNumber(n);
}

