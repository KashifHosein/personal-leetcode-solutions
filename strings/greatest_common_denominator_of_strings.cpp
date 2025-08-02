class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1.length() < 1 || str2.length() > 1000){
            return "";
        }
        if(str1.length() == 0 && str2.length() == 0)
            return "";

        int shortestLength = 0;
        string shortestString;

        if(str1.length() < str2.length()){
            shortestLength = str1.length();
            shortestString = str1;
        }

        else{
            shortestLength = str2.length();
            shortestString = str2;
        }
        cout << "shortestString: " << shortestString << endl;
        string sub;
        int j = 0;
        for(int i = shortestLength - 1; i >= 0; i-=1){
            string temp1 = "";
            string temp2 = "";
            sub = shortestString.substr(0, shortestLength - j);
            cout << "sub: " << sub << ' ';
            if((str1.length() % sub.length() == 0) && (str2.length() % sub.length() == 0)){
                
                cout << "temp1: ";
                for(int x = 0; x < (str1.length() / sub.length()); x+=1){//multiply string
                    temp1 = temp1 + sub;
                    cout << temp1 << ' ';
                }
                cout << endl;
                cout << "temp2: ";
                for(int x = 0; x < (str2.length() / sub.length()); x+=1){//multiply string
                    temp2 = temp2 + sub;
                    cout << temp2 << ' ';
                }
                cout << endl;
                if(temp1 == str1 && temp2 == str2)
                    return sub;
            }

            j+=1;
        }
        
    return "";
    }
};
