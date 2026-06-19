class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int n = nums.size(),k = 1;

        int i = 0;
        while(i < n){
            if(nums[i] == k){
                i++;
                k++;
            }
            else if(nums[i] < k){
                i++;
            }
            else{
                ans.push_back(k++);
            } 
        }
        //handling the extra values which were not covered
        while(k <= n){
            ans.push_back(k++);
        }

        return ans;
    }
};