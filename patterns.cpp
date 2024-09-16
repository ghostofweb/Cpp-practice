#include<iostream>

using namespace std;

void print1(int n) {
    for(int i = 0; i <= n; ++i) {
        for(int j = 0; j <= n; ++j) {
            cout << "#";
        }
        printf("\n");
    }
    cout << endl;
}

void print2(int n) {
    for(int i = 0; i <= n; ++i) { //outer loop for rows <horizontal lines>
        for(int j = 0; j <= i; ++j) { //inner loop for columns <vertical lines>
            cout << "#";
        }
        printf("\n");
    }
    cout << endl;
}

void print3(int n) {
    for(int i = 1; i <= n + 1; i++) {
        for(int j = 1; j <= i ; j++) {
            cout << i; // just printing up the row number 
        }
        cout << endl;
    }
    cout << endl;
}

void print4(int n) {
    for(int i = n + 1; i >= 1; i--) {
        for(int j = 1; j <= i ; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

void print5(int n) {
    for(int i = n + 1; i >= 1; i--) {
        for(int j = 1; j <= i ; j++) {
            cout << j;
        }
        cout << endl;
    }
    cout << endl;
}

void print6(int n) {
    for (int i = 1 ; i <= n + 1; i++) {
        for(int j = 1; j <= n + 1 - i; j++) {
            cout << j;
        }
        cout << endl;
    }
    cout << endl;
}

void print7(int n) {
    for(int i = 0; i < n; i++) {

        // space
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // star
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }

        // space
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    

    return 0;
}
