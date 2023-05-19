#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = 9;
        bool row[9][9] = {false};
        bool col[9][9] = {false};
        bool sub[9][9] = {false};

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == '.')
                    continue;
                int indx = board[i][j] - '1';
                int area = i / 3 * 3 + j / 3;

                if (row[i][indx] or col[j][indx] or sub[area][indx])
                    return false;

                row[i][indx] = true;
                col[j][indx] = true;
                sub[area][indx] = true;
            }
        }
        return true;
    }
};