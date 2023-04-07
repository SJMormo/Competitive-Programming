#include <bits/stdc++.h>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>>&MATRIX) {
    int top = 0, left = 0, right = MATRIX[0].size() - 1, bottom = MATRIX.size() - 1;

    vector<int> ans;
    while (top <= bottom and left <= right) {
        for (int i = left; i <= right; i++) {
            ans.push_back(MATRIX[top][i]);
        }
        top++;
        for (int i = top; i <= bottom; i++) {
            ans.push_back(MATRIX[i][right]);
        }
        right--;
        if (top <= bottom and left <= right) {
            for (int i = right; i >= left; i--) {
                ans.push_back(MATRIX[bottom][i]);
            }
            bottom--;
        }
        if (top <= bottom and left <= right) {
            for (int i = bottom; i >= top; i--) {
                ans.push_back(MATRIX[i][left]);
            }
            left++;
        }
    }
    return ans;
}