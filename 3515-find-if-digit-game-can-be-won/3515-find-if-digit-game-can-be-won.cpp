class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
       int sum1=0;
        int sum2=0;
        

for(int i=0; i<nums.size();i++)
{
        if(nums[i]<10)
        {
            sum1= nums[i]+sum1;

        }
        else 
        {
            sum2 = nums[i]+sum2;
        }
}

if(sum1==sum2)
{ 
    return false;
}
else{
    return true;
}


    }
};