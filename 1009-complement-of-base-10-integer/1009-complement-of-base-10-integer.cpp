class Solution {
public:
    int bitwiseComplement(int x) {

        if(x == 0) return 1;

        string binary = "";

        while(x){
            int rem = x % 2;
            x /= 2;
            binary.push_back(rem + '0');
        }

        int n = binary.size();

        for(int i = 0; i < n; i++){
            if(binary[i] == '1'){
                binary[i] = '0';
            }
            else{
                binary[i] = '1';
            }
        }

        int ans = 0;
        int k = 1;

        for(int i = 0; i < n; i++){
            if(binary[i] == '1'){
                ans += k;
            }
            k *= 2;
        }

        return ans;
    }
};