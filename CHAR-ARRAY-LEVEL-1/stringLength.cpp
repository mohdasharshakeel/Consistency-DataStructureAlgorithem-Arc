#include<iostream>
using namespace std;
int main(){
    string name;
    cin >> name;
    string LastName;
    cin >> LastName;

    //! length of string
    cout << " the length of the string is : " << name.length() << endl;

    //! is empty 
    cout << " the sting is empty or not : " << name.empty() << endl;

    //! at function
    cout << " the string at : " << name.at(0) <<  endl;

    //! front char of string
    cout << " the front char of string is : " << name.front() << endl;


    //! back char of string
    cout << " the back char of string is : " << name.back() << endl;

    //! append string

    cout << " append string :" << name.append(LastName) << endl;
    return 0;
}