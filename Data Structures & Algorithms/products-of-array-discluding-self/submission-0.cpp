class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++){
            vector<int> temp= nums;
            temp.erase(temp.begin()+i);
             int prod=1;
             for(int n:temp){
                prod*=n;
             }
             ans[i]=prod;
        }
        return ans;


    }
};
