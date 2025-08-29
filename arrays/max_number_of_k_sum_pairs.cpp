class Solution {
public:
    int maxOperations(vector<int>& nums, int k){
        sort(nums.begin(), nums.end());
        int count = 0;
        int j = nums.size() - 1;
        int i = 0;
        
        while(i < j){
            int sum = nums[i] + nums[j];
            
            if(sum == k){
                i+=1;
                j-=1;
                count+=1;
            }
            else if(sum > k)
                j-=1;
            else
                i+=1;
            
        }
        return count;
    }
};
