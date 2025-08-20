class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums){
        vector<int> answer;
        int * temp = new int[nums.size()];
        for(int i = 0; i < nums.size(); i+=1){
            temp[i] = 1;
        }

        int prod = 1;
        for(int i = 0; i < nums.size(); i+=1){
            temp[i]*=prod; 
            prod*=nums[i];
        }

        prod = 1;
        for(int i = nums.size() - 1; i >= 0; i-=1){
            temp[i]*=prod;
            prod*=nums[i];
        }

        for(int i = 0; i < nums.size(); i+=1){
            answer.push_back(temp[i]);
        }

        return answer;
    }
};
