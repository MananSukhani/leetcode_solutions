// https://leetcode.com/problems/running-sum-of-1d-array/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int size = nums.size();
        int sum = 0;
        vector<int> result;
        for(int i = 0; i<size; i++){
            sum += nums[i];
            result.push_back(sum);
        }
        return result;
    }
};