/*
Input: int array called nums, int k
Output: length of longest consecutive row of 1's

Topics: sliding window, two pointers, array

Happy Case: array has 1 longest row
Sad Case: array has no longest row

Sliding Glass Method:
1) have a pointer called r that looks at the rightmost zero
2) have a pointer called l that startss from index 0 and looks for the first 0
3) if l == 0 then move right until r == 0 and k == 0
4) counter should maintain current length of row and greatest length should be stored
5) return greatest row length
*/
class Solution {
public:
    int longestOnes(vector<int>& nums, int k){
        int r = 0;
        int l = 0;
        int maxOnesLen = 0;

        while(r < nums.size()){
            if(nums[r] == 0){
                k-=1;
            }
            r+=1;
            while(k < 0){
                if(nums[l] == 0){
                    k+=1;
                }
                l+=1;
            }
            maxOnesLen = max(maxOnesLen, r - l);
        }
        return maxOnesLen;
    }
};
