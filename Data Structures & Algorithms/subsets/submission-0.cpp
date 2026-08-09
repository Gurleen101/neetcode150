class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> current;
        vector<vector<int>> ans;
        solve(nums,current,ans,0);
        return ans;
        



       
    }
    void solve(vector<int> &nums, vector<int> &current, vector<vector<int>> &ans,int i){
        if(i==nums.size()){
            ans.push_back(current);
            return;
        }
        current.push_back(nums[i]);
        solve(nums,current,ans,i+1);
        current.pop_back();
        solve(nums,current, ans, i+1);


    }
};