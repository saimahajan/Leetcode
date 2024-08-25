class Solution {
public:
    int pivotIndex(vector<int>& nums)
    {
        
        int sum=0;
        int tsum=0;
        

        for(int i=0;i<nums.size();i++)
        {
            tsum+=nums[i];
            
        }

        for(int i=0;i<nums.size();i++)
        {
            tsum-=nums[i];
            if(sum==tsum)
            {
                return i;

            }
            sum+=nums[i];
          

        }
       
    return -1;
    }
};