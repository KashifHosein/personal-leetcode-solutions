/*
Topics: Array, Hash Table, Sorting

Input: nums array
Output: true or false

Happy Case: There is a element repeated more than once
Sad case: there are no repeats

Constraints:

1 <= nums.length <= 105
-109 <= nums[i] <= 109

pseudocode:
1)sort nums array in ascending order
2) use while loop from beginning of nums until a repeated element (return true) is found or nums.size() - 1 is reached (return false)
*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int i = 0;
        while(i < nums.size() - 1){
            if(nums[i] == nums[i + 1]){
                return true;
            }
            i+=1;
        }
        return false;
    }
};
