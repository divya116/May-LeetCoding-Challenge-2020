class Solution {
public:
    int maxSubarraySumCircular(vector<int>& a) 
    {
        if (a.size()==0)
            return 0;
        if (a.size()==1)
            return a[0];
        int maxsofar=a[0], curmax=a[0], minsofar=a[0], curmin=a[0], sum=a[0];
        for (int i=1; i<a.size(); i++)
        {
            sum+=a[i];
            curmax=max(a[i], curmax+a[i]);
            maxsofar=max(curmax, maxsofar);
            curmin=min(a[i], curmin+a[i]);
            minsofar=min(curmin, minsofar);
            
        }
        if (sum==minsofar)
            return maxsofar;
        return max(maxsofar, sum-minsofar);
    }
};
