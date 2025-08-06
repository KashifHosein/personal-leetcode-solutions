/*Inputs: int n = number of new flowers. 
          int flowerbed[] = array of 0's and 1's which represents a flowerbed 
          (1 = flower and 0 = no flower)
          
  Output: bool canPlaceFlowers = true if n flowers can be placed but not in adjacent plots else false
    
  Assume: input array will not have adjacent flowers, values in the array will only be 0 or 1
  
    Happy Case: the array has no adjacent flowers:
    Input: flowerbed = [1,0,0,0,1], n = 1
    Output: true

    Sad Case:
    Input: flowerbed = [1,0,1,0,1], n = 1
    Output: false

    Topic: array
    Edge cases: flowerbed has adjacent flowers, flower can be placed in the first or last index
    Pseudocode:
    for(i = 1 in flowerbed - 1):
        if(flowerbed[i] == 0):
            if(flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0):
                flowerbed[i] = 1;
            
*/

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n){
        int i = 1;
        int len = flowerbed.size();

        if(n == 0)
            return true;

        if(len == 1){
            if(flowerbed[0] == 1)
                return false;
            else return true;
        }

        if(flowerbed[0] == 0 && flowerbed[1] == 0){
            flowerbed[0] = 1;
            n-=1;
        }


        while(n != 0 && i < len - 1){
            if(flowerbed[i] == 0){
                if(flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0){
                    flowerbed[i] = 1;
                    n-=1;
                }
            }
            i+=1;
        }
        if(flowerbed[i] == 0 && i == len - 1 && flowerbed[i - 1] == 0){
            flowerbed[i] = 1;
            n-=1;
        }

    if(n == 0)
        return true;
    else
        return false;
    }
};
