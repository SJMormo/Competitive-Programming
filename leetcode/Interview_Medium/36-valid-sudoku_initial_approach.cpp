#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<int> track(10, 0);
        // check row
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char x = board[i][j];
                if (x != '.') {
                    track[x - '1']++;
                    if (track[x - '1'] > 1)
                        return false;
                }
            }
            for (int i = 0; i < 10; i++)
                track[i] = 0;
        }

        // check col
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char x = board[j][i];
                if (x != '.') {
                    track[x - '1']++;
                    if (track[x - '1'] > 1)
                        return false;
                }
            }
            for (int i = 0; i < 10; i++)
                track[i] = 0;
        }

        // check sub box
        for (int i = 0; i < 9; i += 3) {
            for (int j = 0; j < 9; j += 3) {
                if (!traverse(board, i, j))
                    return false;
            }
        }
        return true;
    }
private:
    bool traverse(vector<vector<char>> board, int add_i, int add_j) {
        vector<int> track(10, 0);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                char x = board[i + add_i][j + add_j];
                if (x != '.') {
                    track[x - '1']++;
                    if (track[x - '1'] > 1)
                        return false;
                }
            }
        }

        return true;
    }
};