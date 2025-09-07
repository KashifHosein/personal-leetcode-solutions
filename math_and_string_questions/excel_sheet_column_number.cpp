/*
Input: columnTitle eg. "AB"
Output: columnNumber eg. 27

Assumptions: only capital english letters and no spaces, uses A to Z so base26 as a number (1 to 26) corresponds to a letter

Constraints:

1 <= columnTitle.length <= 7
columnTitle consists only of uppercase English letters.
columnTitle is in the range ["A", "FXSHRXW"].

Topics: Math, String

Match the problem: like converting hexadecimal to decimal

Pseudocode:
1)use loop to start from end/beginning of columnTitle. For each index, turn the character from A to Z into its value from 1 to 26 and raise it to the power of the index
for example: AB = (1 * 26^0) + (2 * 26^0) = 28
*/
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        int count = 0, sum = 0;
        for(int i = columnTitle.size() - 1; i >= 0; i-=1){
            int curr = columnTitle[i] + 1 - 'A';
            sum+=(curr) * pow(26, count);
            count+=1;
        }
        return sum;
    }
};
