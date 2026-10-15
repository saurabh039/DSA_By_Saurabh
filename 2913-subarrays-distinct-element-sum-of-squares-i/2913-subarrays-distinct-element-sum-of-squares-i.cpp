class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            unordered_set<int>st;
            int distinct=0;
            for(int j=i;j<nums.size();j++)
            {
                if(st.insert(nums[j]).second)
                {
                    distinct++;
                }
                ans+=distinct*distinct;
            }
        }
        return ans;
    }
};