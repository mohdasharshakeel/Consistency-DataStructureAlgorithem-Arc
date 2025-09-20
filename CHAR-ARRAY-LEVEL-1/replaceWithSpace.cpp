#include<iostream>
using namespace std;

void replaceWithSpace(char ch[], int size) {
    int index = 0;
    while (ch[index] != '\0') {
        char curr = ch[index];
        if (curr == '@') {   // single quotes
            ch[index] = ' '; // single quotes
        }
        index++;
    }
}

int main() {
    char ch[100];
    cin.getline(ch, 100);

    replaceWithSpace(ch, 100);

    cout << ch;  // output bhi print karna hoga

    return 0;
}
