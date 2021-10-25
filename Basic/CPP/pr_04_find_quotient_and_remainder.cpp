#include<iostream>
using namespace std;

int main() {

    int dividend, divisor, quotient, remainder;
    cin>>dividend; 
    cin>>divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout<<"The quotient is "<<quotient<<endl;
    cout<<"The remainder is "<<remainder<<endl;

    return 0;
}