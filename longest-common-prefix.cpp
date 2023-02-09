// https://leetcode.com/problems/longest-common-prefix/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }

        int sizeList = strs.size();
        int i, j, sizeString;
        string str, result;
        result = strs[0];
        sizeString = result.size();

        for (i = 1; i < sizeList; i++) {
            str = strs[i];
            for (j = 0; j < sizeString; j++) {
                if (j >= str.size() || str[j] != result[j]) {
                    sizeString = j;
                    break;
                }
            }
        }
        return result.substr(0, sizeString);
    }
};