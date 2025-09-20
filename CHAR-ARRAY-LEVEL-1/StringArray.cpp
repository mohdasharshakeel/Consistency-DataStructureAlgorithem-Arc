#include<iostream>
using namespace std;

int main(){

    //! why we need string array 
    //? jaise vector apne size ko change kr skta hai aise hi string apne size ko run time per change kr skti hai dynamicly ghata ya bhada sakti hai 
    //! creation
    string st;
    cin >> st;
    cout << st <<  endl;
    cout << st[2] <<  endl;

    int index = 0;
    while(st[index] != '\0'){
        cout << " index " << index << " charecter " << st[index] << endl;
        index++;
    }

    cout << st[5];

    return 0;
}