#include<iostream>
using namespace std;
int main(){
    string name;
    cin >> name;

   //! length of string
    cout << " the length of the string is : " << name.length() << endl;

    //! is empty 
    cout << " the sting is empty or not : " << name.empty() << endl;

    //! at function
    cout << " the string at : " << name.at(0) <<  endl;

    //! front char of string
    cout << " the front char of string is : " << name.front() << endl;

    return 0;
}