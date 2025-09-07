/*
Input: num
Output: num in hexadecimal (result)

Topics: Math String Bit Manipulation

Assumptions: number given is a 32-bit number

Happy case: positive number
Sad case: negative number

Constraints:

-2^31 <= num <= 2^31 - 1

Match the problem: like excel sheet column title which involves turning decimal to base26

Pseudocode:
1)if num is negative: perform NOT operation on the number and add 1 (num = ~num + 1;)
2)find rem and quotient: rem = num % 16 and num/=16
3)repeat until num == 0, appending the hexadecimal value 
*/
class Solution {
public:
    string toHex(int num) {
        string result = "";
        unordered_map<int, char> hex = {
            {0, '0'}, {1, '1'}, {2, '2'}, {3, '3'}, {4, '4'}, {5, '5'},
            {6, '6'}, {7, '7'}, {8, '8'}, {9, '9'}, {10, 'a'}, {11, 'b'},
            {12, 'c'}, {13, 'd'}, {14, 'e'}, {15, 'f'}
        };
        unsigned int t = num;
        
        if(num == 0)
            return result + '0';
        
        while(t != 0){
            int rem = t % 16;
            t/=16;
            auto it = hex.find(rem);
            if(it != hex.end()){
                result.push_back(it->second);
            }
        }
        reverse(begin(result), end(result));
        return result;
    }
};
