class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i = 0, j = 0; //i reps locs in nums1 and j reps locs in nums2
        vector<vector<int>> result;
        vector<int> nums1Unique;
        vector<int> nums2Unique;

        for(int i = 0; i < nums1.size(); i+=1){
            bool isCopy = false;
            for(int j = 0; j < nums2.size(); j+=1){
                if(nums1[i] == nums2[j]){
                    isCopy = true;
                }
            }
            if(!isCopy){
                nums1Unique.push_back(nums1[i]);
            }
        }
        set<int> s1(nums1Unique.begin(), nums1Unique.end());
        vector<int> result1(s1.begin(), s1.end());

        for(int i = 0; i < nums2.size(); i+=1){
            bool isCopy = false;
            for(int j = 0; j < nums1.size(); j+=1){
                if(nums2[i] == nums1[j]){
                    isCopy = true;
                }
            }
            if(!isCopy){
                nums2Unique.push_back(nums2[i]);
            }
        }
        set<int> s2(nums2Unique.begin(), nums2Unique.end());
        vector<int> result2(s2.begin(), s2.end());

        result.push_back(result1);
        result.push_back(result2);

        return result;
    }
};
