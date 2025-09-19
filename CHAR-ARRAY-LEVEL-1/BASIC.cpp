#include<iostream>
#include<string.h>
using namespace std;

int lengthCharArray(char ch[], int size ){
    int length = 0;
    for (int i = 0; i < size; i++){
        if (ch[i] == '\0'){
            // break [ ruk jao]
            break;
        }
        else{
            length++;
        }
    }

    return length;
}

int main(){
    char ch[100];
    cin >> ch;

    // int len = lengthCharArray(ch, 100);
    // cout << "the length of the char array is :" << len << endl;

    cout << " the length of the char array is " << strlen(ch) << endl;

    return 0;
}