class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int a = nums1.size(), b = nums2.size();
        vector<int> ans;

        if(a > b)
        {
            for(int i = 0; i < a; i++)
            {
                int j = 0;

                while(j < b)
                {
                    if(nums1[i] == nums2[j] && nums2[j] != -1)
                    {
                        ans.push_back(nums1[i]);
                        nums2[j] = -1;
                        break;              // changed
                    }
                    j++;
                }
            }
        }
        else
        {
            for(int i = 0; i < b; i++)
            {
                int j = 0;

                while(j < a)
                {
                    if(nums2[i] == nums1[j] && nums1[j] != -1)
                    {
                        ans.push_back(nums2[i]);  // changed
                        nums1[j] = -1;            // changed
                        break;                    // changed
                    }
                    j++;
                }
            }
        }

        return ans;
    }
};