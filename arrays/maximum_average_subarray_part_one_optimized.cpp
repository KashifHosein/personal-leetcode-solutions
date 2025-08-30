class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxSum = INT_MIN;
        double sum = 0.0;

        for(int i = 0; i < k; i+=1){//compute initial window sum
            sum+=nums[i];
        }

        maxSum = sum;//maxSum = initial sum

        for(int i = k; i < nums.size(); i+=1){
            sum = sum - nums[i - k] + nums[i]; // remove leftmost number and add rightmost number
            maxSum = max(sum, maxSum);
        }

        return maxSum / k;
    }   
};
