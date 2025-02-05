#include <iostream>
using namespace std;
int main() {
    float num1, num2, res;
    char mathsymb;
    cout<<"Enter num1";
    cin>> num1;
    cout<<"Enter num2";
    cin>> num2;
    cout<<"Enter math symbol";
    cin>> mathsymb;
    if(mathsymb == '+') {
        res = num1 += num2;
        cout<<"Result: "<< res;
    }
    else if(mathsymb == '-') {
        res = num1 -= num2;
        cout<<"Result: "<< res;
    }
    else if(mathsymb == '*') {
        res = num1 *= num2;
        cout<<"Result: "<< res;
    }
    else if(mathsymb == '/') {
        res = num1 /= num2;
        cout<<"Result: "<< res;
    }
    
    
    return 0;
}