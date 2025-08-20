class Solution {
public:
    int maxArea(vector<int>& height){
        int i = 0;
        int j = height.size() - 1;
        int maxA = -1;

        while(i < j){
            int area = (j - i) * (min(height[i], height[j]));
            if(area > maxA){
                maxA = area;
            }
            if(height[j] < height[i]){
                j-=1;
            }
            else{
                i+=1;
            }
        }
        return maxA;
    }
};
