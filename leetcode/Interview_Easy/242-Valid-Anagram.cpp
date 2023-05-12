#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> track(26, 0);
        for (auto it : s) track[it - 'a']++;
        for (auto it : t) track[it - 'a']--;
        for (auto it : track)
            if (it != 0) return false;
        return true;
    }
};