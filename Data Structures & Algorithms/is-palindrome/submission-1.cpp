class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        for(char ch:s){
            
            if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')|| (ch>='0' && ch<='9') ){
                temp.push_back(tolower(ch));

            }
            
        }
        int i=0;
        int j=temp.size()-1;
        while(i<j){
            if(temp[i]==temp[j]){
            i++;
            j--;
            }
            else return false;
        }
        return true;
        
    }
};
