class Solution {
public:
    int findComplement(int n) {
        if (n==0)
            return 1;
        if (n==1)
            return 0;
        
        int a[32], i=0, rem;
        while(n)
        {
            rem=n%2;
            if (rem==0)
                a[i++]=1;
            else
                a[i++]=0;
            n=n/2;
        }
        int ans=0;
        i--;
        for (int j=0; j<=i; j++)
        {
            ans+=a[j]*pow(2, j);
        }
        return ans;
    }
};
