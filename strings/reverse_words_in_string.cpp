class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        vector<string> words;
        string temp = "";
        string rev = "";
        while (i < s.length()){
            if(s[i] != ' ')
                temp+=s[i];
        
            if((s[i] == ' ' || (i == s.length() - 1 && s[i] != ' ')) && temp.length() > 0){
                words.push_back(temp);
                temp = "";
            }
            i+=1;
        }

        for(i = words.size() - 1; i >= 0; i-=1){
            if(i != 0)
                rev+=words[i] + ' ';
            else
                rev+=words[i];
        }
        return rev;
    }
};
