#include<iostream>
#include<cmath>
using namespace std;

int main() {

    float a, b, c, x1, x2, descriminant, real_part, img_part;
    cout<<"Enter the coefficients "<<endl;
    cout<<"Enter the value of a ";
    cin>>a;
    cout<<"Enter the value of b ";
    cin>>b;
    cout<<"Enter the value of c ";
    cin>>c;

    descriminant = b*b - 4*a*c;

    if (descriminant > 0) {
        x1 = (-b + sqrt(descriminant)) / (2*a);
        x2 = (-b - sqrt(descriminant)) / (2*a);

        cout<<"The roots are real and different"<<endl;
        cout<<"x1 = "<<x1<<endl;
        cout<<"x2 = "<<x2<<endl;
    }

    else if (descriminant == 0) {
        cout<<"The roots are real and same"<<endl;
        x1 = -b / (2*a);
        cout<<"x1 = x2 = "<<x1<<endl;
    }

    else {
        real_part = -b/(2*a);
        img_part = sqrt(-descriminant) / (2*a);
        cout<<"The roots are complex and different"<<endl;
        cout<<"x1 = "<<real_part<<" + "<<img_part<<"i"<<endl;
        cout<<"x2 = "<<real_part<<" - "<<img_part<<"i"<<endl;
    }

    return 0;
    
}