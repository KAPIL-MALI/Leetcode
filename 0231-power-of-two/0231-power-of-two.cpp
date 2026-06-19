class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if(n == 1)return true;

        long long power = 2;

        while(power <= n){
            if(power == n){
                return true;
            }
            power = power*2;
        }
        return false;
    }
};