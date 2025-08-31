/*
input: nums array
output: pivot of the array where all numbers on either side have the same sum

match the problem: Solution may be similar to the solution for Find DIfference of Two Arrays (i think that was the name...)

Topics: Prefix Sum (like the similar problem), Array

pseudocode:
1) first loop to iterate through entire array from beginning to end.
2) First loop stores mounting sum in a leftSum array and saves the mounting sum before the current index (curr) in this array at the curr in the leftSum array
3) Second loop repeats this process
4) use 3rd for loop to find which sum in both arrays are equal at index i and if found return that index else return -1
*/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int* leftSum = new int[nums.size()];
        int* rightSum = new int[nums.size()];

        int sum = 0;
        leftSum[0] = sum;
        for(int i = 0; i < nums.size() - 1; i+=1){// get leftSum
                sum+=nums[i];
                leftSum[i + 1] = sum;
                cout << i + 1 << ' ' << leftSum[i + 1] << ' ';
        }

        sum = 0;
        rightSum[nums.size() - 1] = sum; 
        for(int i = nums.size() - 1; i > 0; i-=1){// get rightSum
                sum+=nums[i];
                rightSum[i - 1] = sum;
        }

        for(int i = 0; i < nums.size(); i+=1){//find if rightSum = leftSum for any index in nums
            if(leftSum[i] == rightSum[i]){
                return i;
            }
        }

        return -1;
    }
};
