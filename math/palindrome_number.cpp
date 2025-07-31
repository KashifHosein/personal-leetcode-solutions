class Solution {
public:
    bool isPalindrome(int x) {
        if(x < pow(-2, 31) || x > (pow(2, 31) - 1) || x < 0)
            return false;

        if(x < 10)
            return true;

        string strX = to_string(x);
        int j = strX.length() - 1;

        for(int i = 0; i < strX.length() / 2; i+=1){
            if(strX.at(i) != strX.at(j))
                return false;
            j-=1;
        }
        return true;
    }
};
