class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        int n = arr.size();
        vector<int> ans;

        int count = 1, i = 0;
        while(i < n){
            while(arr[i] != count){
                ans.push_back(count++);
            }
            i++;
            count++;
        }

        int sizeofans = ans.size();

        if(sizeofans >= k)
            return ans[k-1];

        while(ans.size() < k){
            ans.push_back(count++);
        }

        return ans[k-1];
    }
};