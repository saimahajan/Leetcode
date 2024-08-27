class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        
        stack<int> st;
        set<int> s;
        int operations=0;
        for(int i=0;i<nums.size();i++)
        {
            st.push(nums[i]);
        }
        while(!st.empty())
        {
            operations++;
            if(st.top()<=k)
            {           
                s.insert(st.top());
            }
            st.pop();
            if(s.size()==k)
                break;
        }
    return operations;
    }
};