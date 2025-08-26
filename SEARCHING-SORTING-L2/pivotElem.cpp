#include <iostream>
using namespace std;

int findPivot(int arr[], int n) {
    int s = 0, e = n - 1;
    int mid;    

    while (s < e) {
        mid = s + (e - s) / 2;

        // agar mid element last element se bada hai
        // to pivot right side me hoga
        if (arr[mid] > arr[e]) {
            s = mid + 1;
        }
        else {
            // warna pivot left side me ya khud mid hi hai
            e = mid;
        }
    }
    return arr[s];  // s ya e dono pivot index pe aa jayenge
}

int main() {
    int arr[] = {7, 9, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Pivot element is: " << findPivot(arr, n) << endl;
    return 0;
}
