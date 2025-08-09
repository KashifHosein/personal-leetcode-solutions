/*
Input: vector<int> candies[], int extraCandies

Output: array containing true or false depending if the index of the corresponding child has the most candy when the kid receives the extra candies.

pseudocode:
maxCandies = -1
for kid in candies:
    1) find maxCandies without adding any extraCandies first.
    2)declare a vector<bool> result with size
    3)use for loop to iterate through candies
    for(i in candies):
        if(candies[i] + maxCandies > maxCandies)
            result[i] = true
        else result[i] = false
    
    return result
    
return candies
*/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies){
        vector<bool> result;
        int maxCandies = *max_element(candies.begin(), candies.end());
        
        for(int i = 0; i < candies.size(); i+=1){
            if(candies[i] + extraCandies >= maxCandies){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }

        return result;
    }
};
