class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        for (int i = 0; i < (int)nums.size();i++){
            if (hash.find(target-nums[i])!=hash.end()){
                return {hash[target-nums[i]],i};
            }
            else{
                hash.insert({nums[i],i});
            }
        }
        return {-1,-1};
    }
}; 
