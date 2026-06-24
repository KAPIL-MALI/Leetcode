class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int>ans;

        if(n < 1)return {-1,-1};

        for(int i = 0; i < n; i++){
            if(nums[i] == target){
                ans.push_back(i);
                break;
            }
        }
        for(int i = n-1; i >= 0; i--){
            if(nums[i] == target){
                ans.push_back(i);
                break;
            }
        }
        
        if(ans.size() > 1)return ans;
        else return {-1,-1};
    }
};