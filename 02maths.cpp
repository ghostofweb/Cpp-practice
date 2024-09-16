#include<iostream>
#include<vector>
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

void armstrong(int n){
    int sum = 0;
    int temp = n;

    while(temp > 0){

        int lastDigit = temp % 10;
        sum = sum + lastDigit*lastDigit*lastDigit;
        temp /= 10;
    }
    if(n == sum){
        cout <<"The Number is Armstrong"<<endl;
    }
    else{
        cout <<"The Number is not Armstrong"<<endl;
    }
}

void divisors(const int n){
    int sum = 0;
    vector<int>divisorSum;

    for(int i = 1; i<=n;i ++){
        for (int j = i; j<= n ; j++)
        {
            /* code */
        }

    } 
}

void prime(int n){
    int temp = n;
    int count = 0;
    for(int i = 1; i <= temp; i++)
    {
        if( temp % i == 0){
            count++;
        }
    }
    if (count == 2)
    {
        cout<< n <<" is the whole number";
    }else{
        cout<< n <<" is the not whole number";
    }
    
    
}

void max_num(){
    int max = 0;
    cout << "enter 5 numbers and count the highest"<<endl;
    for (int i = 0; i < 5; i++)
    {
        int n;
        cin>>n;
        if(n > max){
            max = n;
        }
    }
    cout<<"the highest number is "<<max;
    
}

void gcdlcm(int a, int b){
    vector<int>vec;
    int hcf = 1;
    int lcm = 1;
    for(int i = 1; i<= min(a,b);i ++){
        if(a % i ==0 && b % i == 0){
                hcf = i;
        }
    }
    lcm = (a * b) / hcf;
    vec.push_back(lcm);
    vec.push_back(hcf);
    cout<<"lcm is "<< lcm << " hcf is " << hcf;
}



int main(int argc, const char** argv) {
    int n;
    // cout<<"enter the number "<<endl;
    // cin>>n;
    gcdlcm(5,10);
}

