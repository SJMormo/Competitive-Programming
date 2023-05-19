#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string st = "";
        for (auto it : s) {
            if (it >= 'A' and it <= 'Z')
                st += it + ('a' - 'A');
            else if (it >= 'a' and it <= 'z')
                st += it;
            else if (it >= '0' and it <= '9')
                st += it;
        }

        int i = 0, j = st.size() - 1;
        while (i <= j) {
            if (st[i] != st[j])
                return false;
            ++i;
            --j;
        }
        return true;
    }
};