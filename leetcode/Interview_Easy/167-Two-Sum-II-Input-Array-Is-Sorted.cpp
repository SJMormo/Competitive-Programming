#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = numbers.size() - 1;
        vector<int> ans;
        while (i < j) {
            int x = numbers[i] + numbers[j];
            if (x == target) {
                ans.push_back(i + 1);
                ans.push_back(j + 1);
                return ans;
            }
            else if (x > target) j--;
            else i++;
        }
        return ans;
    }
};