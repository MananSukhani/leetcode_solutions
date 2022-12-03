// https://leetcode.com/problems/richest-customer-wealth/description/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int rows = accounts.size();
        int cols = accounts[0].size();
        int rich = 0;
        int max = 0;
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                rich += accounts[i][j];
            }
            if (max<rich){
                max = rich;
            }
            rich = 0;
        }
        return max;
    }
};