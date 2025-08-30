/*
input: gain array
output: highest altitude of a point
Topics: prefix sum and array

Example: [-5,1,5,0,-7] 0 + -5 + 1 = -4
                       -4 + 5 = 1
                       1 + 0 = 1
                       1 + -7 = -6
                       So 1 is highest altitude attained.
Pseudocode:
1) initialization: maxAltitude = 0
2) Use for loop to iterate through array. keep track of the value of maxAltitude as numbers are kept adding to the sum.

*/

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxAltitude = 0, sum = 0;
        for(int i = 0; i < gain.size(); i+=1){
            sum+=gain[i];
            if(sum > maxAltitude){
                maxAltitude = sum;
            }
        }
        return maxAltitude;
    }
};
