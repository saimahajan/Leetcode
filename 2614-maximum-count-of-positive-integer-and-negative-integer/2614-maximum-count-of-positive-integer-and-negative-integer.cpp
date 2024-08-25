class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int count=0;
        int mount=0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]>0){
                count++;
            }
            else if(nums[i]<0){
                mount++;
            }
        }

        int ma =max(count,mount);
        
        return ma;
    }
};