#include <iostream>
#include <vector>
#include <climits> // for INT_MIN
using namespace std;

// Function to find row with maximum number of 1s
vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
    vector<int> ans;
    int n = mat.size();
    int OneCount = INT_MIN;
    int rowNo = -1;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < mat[i].size(); j++) {
            if (mat[i][j] == 1) {
                count++;
            }
        }

        if (count > OneCount) {
            OneCount = count;
            rowNo = i;
        }
    }

    ans.push_back(rowNo);
    ans.push_back(OneCount);
    return ans;
}

int main() {
    // Example matrix
    vector<vector<int>> mat = {
        {0, 1, 1},
        {1, 0, 1},
        {0, 0, 0}
    };

    vector<int> result = rowAndMaximumOnes(mat);

    cout << "Row with maximum 1s: " << result[0] << endl;
    cout << "Number of 1s in that row: " << result[1] << endl;

    return 0;
}
