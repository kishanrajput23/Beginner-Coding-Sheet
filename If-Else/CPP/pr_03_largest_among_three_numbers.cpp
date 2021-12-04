#include<iostream>
using namespace std;

int main() {

    int a, b, c;
    cout<<"Enter the value of a ";
    cin>>a;
    cout<<"Enter the value of b ";
    cin>>b;
    cout<<"Enter the value of c ";
    cin>>c;

    if (a>b) {
        if (a>c) {
            cout<<a<<" is a larger number";
        }
        else {
            cout<<c<<" is a larger number";
        }
    }
    else {
        if (b>c) {
            cout<<b<<" is a larger number";
        }
        else {
            cout<<c<<" is a larger number";
        }
    }

    return 0;
}