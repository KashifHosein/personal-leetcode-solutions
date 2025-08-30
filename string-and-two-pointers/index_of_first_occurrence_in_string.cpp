class Solution {
public:
    int strStr(string haystack, string needle) {
        int l = 0;

        if(needle.length() > haystack.length())
            return -1;

        while(l < haystack.length()){
            string sub = haystack.substr(l, needle.length());
            if(sub == needle)
                return l;
            l+=1;
        }
        return -1;
    }
};
