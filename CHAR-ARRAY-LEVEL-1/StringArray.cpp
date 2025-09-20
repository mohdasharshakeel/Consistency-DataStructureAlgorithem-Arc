#include <iostream>
#include <string> 
using namespace std;

int main() {
    //! why we need string
    // std::string dynamic hoti hai, run-time pe apna size badha/ghata sakti hai 
    // jaise vector karta hai.

    //! creation
    string st;
    getline(cin, st);

    cout << "Input string: " << st << endl;

    // safe access: string ke characters ko print karna
    for (int index = 0; index < st.size(); index++) {
        cout << " index " << index << " character " << st[index] << endl;
    }

    // agar index 5 exist karta hai tabhi access karo
    if (st.size() > 5) {
        cout << "Character at index 5: " << st[5] << endl;
        int val = (int)st[5];
        cout << "ASCII value of that character is " << val << endl;
    } else {
        cout << "Index 5 does not exist in the string!" << endl;
    }

    return 0;
}
