class Solution{
public:

    bool isVowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
        else return false;
    }

    int maxVowels(string s, int k){
        
        int r = 0, l = 0, vCount = 0, vMax = 0;
        while(r < s.length()){
            
            if(isVowel(s[r])){
                vCount+=1;
            }
            if((r - l + 1) == k){
                vMax = max(vMax, vCount);
                if(isVowel(s[l]))
                    vCount-=1;
                l+=1;
            }
            r+=1;
        }
        return vMax;
    }
};
