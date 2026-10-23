class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int sum=0;
        for(int i:nums)
        {
            sum^=i;       
        }
        return sum;
    }
};