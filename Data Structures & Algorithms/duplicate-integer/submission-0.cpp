class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       unordered_set<int> intSet;
       for(int num : nums){
        if(intSet.find(num)!=intSet.end())
        return true;
        intSet.insert(num);
       }
       return false;
    }
};