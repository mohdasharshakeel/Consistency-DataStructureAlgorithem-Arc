#include<iostream>
using namespace std;
void convertToUpperCae(char ch[], int size){
    int index = 0;

    while (ch[index] != '\0')
    {
        char currentIndex = ch[index];
        if(currentIndex >= 'a' && currentIndex <= 'z'){
            ch[index] = currentIndex - 'a' + 'A';
        }
        index++;
    }
    
}

int main(){

    char ch[100];
    cin.getline(ch, 100);
    convertToUpperCae(ch, 100);

    cout << "  to upper case " << ch << endl;
    

    //! formula for converting lower case to upper case
    //? lowercase( koi sa bhi jisko bade me convert krna hai )
    //! example c to C
    //? lowercase  99 - 'a' + 'A'
    //! 99 - 97 + 65  = 67
    //? 67 == C

    //* iska ulta for 'A' to 'a' krna hoga to formula hoga

    //? Upper Char  - 'A' + 'a'
    //! D ke liye example dekhte hai
    //? 68 - 65 + 97 = 100
    //! 100 = 'd'
    return 0;
}