/*
input: char array 
output: reversed char array
pseudocode:
1) use two pointers: i = 0 and j = s.size() - 1
2) swap char at index i with char at index j

while loop condition: i < j so that already swapped characters are not swapped again
*/
class Solution {
public:
    void reverseString(vector<char>& s){
        int i = 0, j = s.size() - 1;
        while(i < j){
            swap(s[i], s[j]);
            i+=1;
            j-=1;
        }
    }
};
