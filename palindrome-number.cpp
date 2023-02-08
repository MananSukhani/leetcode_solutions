// https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {
        long orig, rev=0, rem;
        orig = x;
        while(x>0){
            rem = x%10;
            rev = (rev*10)+rem;
            x = x/10;
        }
        if(orig == rev){
            return true;
        }
        else{
            return false;
        }
    }
};
