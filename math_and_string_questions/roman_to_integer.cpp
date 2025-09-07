/*
input: string containing roman numerals
output: integer with translated roman numeral

understanding the problem: add the value of each numeral together except if the previous numeral is smaller than the following numeral then its value is subtracted

Topics: hash table, math, string

pseudocode: 
1) loop through entire string from beginning to end.
2) if prev number (s[i]) is less than following number (s[i + 1]), then s[i + 1] - s[i] and add value to the rolling sum (sum) and set i = i + 2 
3) else add value found at s[i] to sum and set i = i + 1
*/

class Solution {
public:

    int romanToInt(string s) {
        unordered_map<char, int> numerals = {
            {'I', 1}, {'V', 5},{'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };    

        int sum = 0;
        for(int i = 0; i < s.size(); i+=1){
            auto it = numerals.find(s[i]);
            
            int temp = 0;
            if(it != numerals.end()){
                auto it2 = numerals.find(s[i + 1]);
                if(it2 != numerals.end() && it2->second > it->second){
                    temp = it2->second - it->second;
                    i+=1;
                    sum+=temp;
                }
                else{
                    sum+=it->second;
                }
            }
        }
        return sum;
    }
};
