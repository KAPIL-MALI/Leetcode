class Solution {
public:
    int addDigits(int num) {

        if(num < 10 )return num;

        int ans = 0;
        while(num > 9){
            while(num){
            int rem = num%10;
                ans += rem;
                num /= 10;
            }
            if(ans < 10){
                return ans;
            }
            else{
                num = ans;
                ans = 0;
            }
        }
        
        return ans;
    }
};