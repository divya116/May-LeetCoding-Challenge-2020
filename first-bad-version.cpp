// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) 
    {
        int low=1, high=n, mid;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if (isBadVersion(mid))
            {
                if (mid==0) //first element is bad
                    return mid;
                else if (!isBadVersion(mid-1))//prev el is okay so this is first bad
                    return mid;
                else
                    high=mid-1;//worst element came before mid
                //high=mid;
            }
            
            else
            {
                low=mid+1;//mid is okay, check ahead
            }
                
        }
        //added to resolve compiler error - control may reach end of fn with no return value - int specified.
        return -1;
    }
};
