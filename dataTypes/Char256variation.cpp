#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    for (int i = 0; i <= 255; ++i) {
        cout << "Value: " << setw(3) << i << "  |  Char: ";
        
        // Printable characters only
        if (i >= 32 && i <= 126)
            cout << static_cast<char>(i);
        else
            cout << "Non-printable";
        
        cout << endl;
    }
    return 0;
}
