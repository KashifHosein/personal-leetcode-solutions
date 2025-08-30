/*
input: nums array, int k (size of sliding window)
output: maximum average value 

pseudocode:
1) right(r) = k - 1 and left (l) = 0 pointers
2) while loop (r < nums.size()) where each pass calculates the average value of the sum of k elements
3) do nested loop to calculate average and store maximum average found
[1,12,-5,-6,50,3], k = 4
   l        r
*/

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i = 0, l = 0;
        double maxAverage = INT_MIN;
        double sum = 0.0;
        int count = 0;
        double average = 0.0;
        while(i < nums.size()){
            sum+=nums[i];
            count+=1;
            if(count == k){
                average = sum / k * (1.0);
                maxAverage = max(average, maxAverage);
                count-=1;
                sum-=nums[l];
                l+=1;
            }
            i+=1;
        }
        return maxAverage;
    }   
};
