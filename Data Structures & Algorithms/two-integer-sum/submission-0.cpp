class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       map<int,int> mpp;
       for(int i=0;i<nums.size();i++){
        int rem=target-nums[i];
        if(mpp.find(rem)!=mpp.end()){
            if(mpp[rem]<i) return {mpp[rem],i};
            else return {i,mpp[rem]};


            
        }
        mpp[nums[i]]=i;
       }
       

        
        
    }
};
