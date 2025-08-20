class Solution {
public:
    bool isSubsequence(string s, string t) {
        string temp = "";
        int j = 0;
        for(int i = 0; i < t.length(); i+=1){
            if(t[i] == s[j]){
                temp+=t[i];
                j+=1;
            }
        }
    
    
    if(s == temp)
        return true;
    else 
        return false;
    }
};
