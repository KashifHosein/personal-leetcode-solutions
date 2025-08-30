/*
input: string with alphanumeric chars
output: true or false

pseudocode:
1)loop through s to get a new string with only lowercase letters
2)loop through s but backwards and get the reverses string
3)check new string and reversed string to see if they match and return true or false 
*/
class Solution {
public:
    bool isPalindrome(string s){
        string newS = "";
        for(int i = 0; i < s.length(); i+=1){
            if(isalpha(s[i]) || (s[i] >= '0' && s[i] <= '9')){
               char ch = tolower(s[i]);
               newS.push_back(ch);
            }
        }
        string rev = "";
        for(int i = newS.length() - 1; i >= 0; i-=1){
            rev.push_back(newS[i]);
        }
        
        if(rev == newS){
            return true;
        }
        return false;
    }
};
