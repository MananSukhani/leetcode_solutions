// https://leetcode.com/problems/reverse-string/

class Solution {
public:
    void reverseString(vector<char>& s) {
        int size = s.size()-1;
        vector<char> reverse;
        int i;
        for(i=size; i>=0; i--){
            reverse.push_back(s[i]);
        }
        s = reverse;
    }
};