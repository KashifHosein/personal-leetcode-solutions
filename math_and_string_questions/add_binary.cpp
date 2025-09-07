/*
Topics: math, string, bit manipulation, simulation

inputs: two binary strings (a and b)
output: sum of the two binary strings understood as being the sum of two binary numbers returned as a new binary string (sum)


Happy case: when the binary numbers added, there is no carry bit
Sad case: there is a carry bit

Assumptions: move only one carry bit at a time 

Constraints:

1 <= a.length, b.length <= 10^4
a and b consist only of '0' or '1' characters.

pseudocode:
1) start at the ends of both strings and go backwards using a loop
2) if a[i] == 1 and b[i] == 1 then we add one to the carry bit (c) which is initialised to 0. 
NOTE: if i goes out of bounds for either string just append carry bit (c).
3) keep adding the binary values stored at a[i] and b[i] and c. Then push resulting value to result string (sum). If there was a carry bit that was used i.e. the carry bit was equal to 1 (c = 1) then we have to minus one from c (c-=1)
4) When loop is finished, sum must be reversed using the string reverse function to get the correct binary number.
*/

class Solution{
public:
    string addBinary(string a, string b){
        int i = a.length() - 1, j = b.length() - 1, sum = 0;
        int len = max(a.length(), b.length());
        string result = "";
        while(i >= 0 || j >= 0 || sum){
            if(i >= 0){
                sum = sum + (a[i] - '0');
            }
            if(j >= 0){
                sum = sum + (b[j] - '0');
            }
            result+=sum % 2 + '0';
            sum = sum / 2;

            
            i-=1;
            j-=1;
        }
        reverse(begin(result), end(result));
        return result;
    }
};
