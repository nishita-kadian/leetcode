//FIRST BAD VERSION -> 07/10/2021 20:53
//https://leetcode.com/problems/first-bad-version/submissions/
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long int low = 0;
        long int high = n;
        long int mid = (low + high)/2;
        while(low <= high)
        {
            if(isBadVersion(mid)==false)
            {
                low = mid + 1;
                mid = (low + high)/2;
            }
            else
            {
                if(isBadVersion(mid-1)==false)
                    return mid;
                else
                {
                    high = mid - 1;
                    mid = (low + high)/2;
                }
            }
        
        }
        return mid;
    }
};
