class Solution {
public:
    string reverseWords(string s) {
        int i = 0, j = s.length() - 1;
        while(i < j){
            swap(s[i], s[j]);
            i+=1;
            j-=1;
        }
        istringstream stream(s);
        string word;
        vector<string> revWords;

        while (stream >> word) {
            revWords.push_back(word);
        }

        string revString = "";
        for(int k = revWords.size() - 1; k >= 0; k-=1){
            if(k == 0){
                revString = revString + revWords[k];
            }
            else{
                revString+=revWords[k];
                revString+=" ";
            }
        }

        return revString;
    }
};
