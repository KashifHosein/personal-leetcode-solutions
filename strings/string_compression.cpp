class Solution {
public:
    int compress(vector<char>& chars) {
        string s = "";
        int read = 0;
        int write = 0;

        while(read < chars.size()){
            int count = 0;
            char curr = chars[read];
            while(read < chars.size() && chars[read] == curr){
                count+=1;
                read+=1;
            }
            if(count > 1){
                chars[write] = curr;
                write+=1;
                string temp = to_string(count);
                int i = 0;
                char charArray[temp.length() + 1];
                strcpy(charArray, temp.c_str());
                charArray[strlen(charArray)] = '\0';
                while(charArray[i] != '\0'){
                    chars[write] = charArray[i];
                    write+=1;
                    i+=1;
                }
            }

            else{
                chars[write] = curr;
                write+=1;
            }
        }
        for(int i = 0; i < chars.size(); i+=1){
            cout << chars[i] << ' ';
        }
        return write;
    }
};
