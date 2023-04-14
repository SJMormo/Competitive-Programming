#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(), digits.end());

        for (int i = 0; i < digits.size(); i++) {
            digits[i]++;

            cout << digits[i] << endl;
            if (i == digits.size() - 1 && digits[i] == 10) {
                digits[i] = 0;
                digits.push_back(1);
                break;
            }
            else if (digits[i] == 10)
                digits[i] = 0;
            else break;
        }

        reverse(digits.begin(), digits.end());
        return digits;
    }
};