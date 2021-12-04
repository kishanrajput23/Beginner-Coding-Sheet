#include<iostream>
using namespace std;

int main() {
    char c;
    bool isLowercaseVowel, isUppercaseVowel;
    cout<<"Enter an alphabet ";
    cin>>c;

    isLowercaseVowel = (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');

    isUppercaseVowel = (c=='A' || c=='E' || c=='I' || c=='O' || c=='U');

    if (!isalpha(c)) {
        cout<<"Error - please enter valid character";
    }
    else if (isLowercaseVowel || isUppercaseVowel) {
        cout<<c<<" is Vowel";
    }
    else {
        cout<<c<<" is Consonant";
    }
    return 0;
}