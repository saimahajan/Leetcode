class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> v;
        for(int i=0; i<nums.size();i++)
        {
            v.push_back(nums[i]);
        }
        for(int j=0;j<nums.size();j++){
            v.push_back(nums[j]);
        }
        return v;
        
    }
};