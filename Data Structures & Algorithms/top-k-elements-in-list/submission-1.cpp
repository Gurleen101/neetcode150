class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        for(int n:nums){
            mpp[n]++;
        }
        vector<vector<int>> bucket(nums.size()+1);
        for(auto &it:mpp){
            int num= it.first;
            int freq=it.second;
            bucket[freq].push_back(num);
        }
        vector<int> topK;
        for(int pos=bucket.size()-1;pos>=0 && topK.size()<k;pos--){
            for(int num: bucket[pos]){
                topK.push_back(num);
                
            }
        }
        return topK;
    }
};
