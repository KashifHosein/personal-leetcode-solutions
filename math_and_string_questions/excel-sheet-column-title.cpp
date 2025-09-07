/*
input: column number
output: the column title as a string eg) Z -> 26 and AA -> 27

constraint: 1 <= columnNumber <= 231 - 1

Happy Case: input corresponds exactly to a single letter of the alphabet (can be returned early)
Sad Case: input is multiple letters long: eg) "AAAAA"

assumptions: all input is capital letters with no spaces

Topics: Math, String

Match the problem: like converting decimal to hexadecimal

pseudocode:
1)if colmnNumber corresponds with exactly one letter of the alphabet return the corresponding letter.
2)else loop until columnNumber becomes 0
3)divide columnNumber by 26 to get how many letters are required. Use mod to get remainder (rem).
4)push_back remainder into result as a character pertaining to the letter indicated by the value of the integer obtained (ch = rem - 1 + 'A')
5)reverse result and return.
*/
class Solution {
public:
    string convertToTitle(int columnNumber){
        string result = "";
        char ch;
       
            while(columnNumber > 0){
                columnNumber-=1;
                int rem = columnNumber % 26;
                char ch = rem + 'A';
                result.push_back(ch);
                columnNumber/=26;
            }

        reverse(begin(result), end(result));
        return result;
    }
};
