class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int r = 0;
        int l = 0;
        int maxOnesLen = 0;
        int k = 1;

        while(r < nums.size()){
            if(nums[r] == 0){
                k-=1;
            }
            
            while(k < 0){
                if(nums[l] == 0){
                    k+=1;
                }
                l+=1;
            }
            maxOnesLen = max(maxOnesLen, r - l);
            r+=1;
        }
        return maxOnesLen;
    }
    
};
