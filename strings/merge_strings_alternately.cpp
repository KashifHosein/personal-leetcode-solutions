class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int maxLength = max(word1.length(), word2.length());
        string merged = "";
        if(word1.length() == 0 && word2.length() == 0)
            return merged;
        else if(word1.length() == 0)
            return word2;
        else if(word2.length() == 0)
            return word1;

        merged.reserve(word1.length() + word2.length());//pre-allocationg memory helps boost performance by preventing further unecessary memory re-allocation, speeding up the program. 

        for(int i = 0; i < maxLength; ++i){
            if(i < word1.length())
                merged+=word1[i];
            if(i < word2.length()){
                merged+=word2[i];
            }
        }
        return merged;
    }
};
