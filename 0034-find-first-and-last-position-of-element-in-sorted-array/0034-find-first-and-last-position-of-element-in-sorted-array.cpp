class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int>ans;

        if(n < 1)return {-1,-1};

        int start = 0, end = n-1,firstpos = -1,secondpos = -1;
        while(start <= end){
            
            int mid = start+(end-start)/2;

            if(nums[mid] == target){
                firstpos = mid;
                end = mid-1;
            }
            else if(nums[mid] < target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }

        start = 0, end = n-1;
        while(start <= end){
            
            int mid = start+(end-start)/2;

            if(nums[mid] == target){
                secondpos = mid;
                start = mid+1;
            }
            else if(nums[mid] < target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }

        if(firstpos != -1 && secondpos != -1){
            ans.push_back(firstpos);
            ans.push_back(secondpos);
        }
        else return {-1,-1};
        
        return ans;
    }
};