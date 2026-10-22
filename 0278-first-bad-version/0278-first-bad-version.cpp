// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low=1;
        int high=n;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            bool ans=isBadVersion(mid);
            if(ans==true)
                high=mid-1;
            else if(ans==false)
                low=mid+1;
        }
        return low;
    }
};