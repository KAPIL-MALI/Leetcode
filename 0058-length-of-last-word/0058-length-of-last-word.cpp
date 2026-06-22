class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size(),count = 0;

        for(int i = n-1; i >= 0; i--){
            if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')){
                count++;
            }
            else if(s[i] == ' ' && count > 0){
                break;
            }
        }
        return count;
    }
};