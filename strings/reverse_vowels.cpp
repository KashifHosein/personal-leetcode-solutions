/*
Inputs: string
Outputs: reveresed string
Edge Cases: one char in string

Happy Case: string has vowels
Sad Case: no vowels, begins and ends with a vowel

Pseudocode:

int i = 0;
int j = 0;
string newStr = ""
string revVowels = ""

if (x == 'a' || x == 'e' || x == 'i' || x == 'o'
        || x == 'u' || x == 'A' || x == 'E' || x == 'I'
        || x == 'O' || x == 'U')
        cout << "Vowel" << endl;
    else
        cout << "Consonant" << endl;
}

for i in str.length(){
    if(str[i] == vowel)
    vowelsRev.push_back(str[i])
}

for i in str.length(){
    if(str[i] != vowel)
        newStr.push_back(str[i])
    else if j < vowels.length() && str[i] == vowel
        newStr.push_back(str[j])
        j+=1
}

Example: IceCreAm
(looking at newStr):
After first loop: vowelsRev: AeeI
Second loop:
Step 1: AceCreIm

*/

class Solution {
public:

    inline bool isVowel(char x){
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o'
        || x == 'u' || x == 'A' || x == 'E' || x == 'I'
        || x == 'O' || x == 'U')
        return true;
    else
        return false;
    }
    

    string reverseVowels(string s) {
        int j = 0;
        string newS = "";
        string vowelsRev = "";

        for(int i = s.length() - 1; i >= 0; i-=1){
            if(isVowel(s[i]))
                vowelsRev.push_back(s[i]);
        }
        
        for(int i = 0; i < s.length(); i+=1){
            if(isVowel(s[i]) && j < vowelsRev.length()){
                newS.push_back(vowelsRev[j]);
                j+=1;
            }
            else
                newS.push_back(s[i]);
        }

        return newS;
    }
    
};
