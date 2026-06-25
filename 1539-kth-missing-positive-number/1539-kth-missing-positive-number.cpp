class Solution {
public:
    int findKthPositive(vector<int>& arr, int k){

        vector<int>v;

        for(int i=0;i<3000;i++){
            v.push_back(i+1);
        }
        int i=0,j=0,ans=0;
 
        while(k){

            if(i < arr.size() && v[j] == arr[i]){
                i++;
                j++;
            } 
            else{
                ans = v[j];
                k--;
                j++;
            } 
        }
        
        return ans;
    }
};