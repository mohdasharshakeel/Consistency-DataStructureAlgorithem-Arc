#include<iostream>
using namespace std;

int main(){

    char ch[10];
    cin >> ch;

    //! char array me jab bhi hum input le rhe hoge to isme space ke sace me hum by default ruk jate hai 
    //? like 10 size ke array me maine DING DONG enter kiya to sirf DING print hoga kyuki DING ke bd space hai

    cout << "the value of ch is " << ch << endl;


    return 0;
} 

