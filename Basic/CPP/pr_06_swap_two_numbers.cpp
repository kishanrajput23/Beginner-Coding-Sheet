#include<iostream>
using namespace std;

int main() {

    int a, b, temp;
    cin>>a;
    cin>>b;

    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;

    temp = a;
    a = b;
    b = temp;

    cout<<"After swapping two numbers"<<endl;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    
    return 0;
}