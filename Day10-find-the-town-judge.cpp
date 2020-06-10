class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) 
    {
        
        vector<int> trustcnt(n+1, 0);
        for (auto person: trust)
        {
            trustcnt[person[0]]--;
            trustcnt[person[1]]++;
        }
        for (int i=1; i<=n; i++)
        {
            if (trustcnt[i]==n-1)
                return i;
        }
        return -1;
       /* unordered_set<int> s;

        int size=trust.size();
        for (int i=0; i<size; i++)
        {
            //people who trust someone
            s.insert(trust[i][0]);
        }
        int judge=-1;
        for (int i=1; i<=n; i++)
        {
            if (s.find(i)==s.end()) //ith person trusts nobody - possible judge
            {
                judge=i;
                break;
            }
        }
        //check if all other trust judge - count=n-1
        //but won't work for duplicates
        int count=0;
        for (int i=0; i<size; i++)
        {
            //s.insert(trust[i][0]);
            if (trust[i][1]==judge)
                count++;
        }
        if (count==n-1)
            return judge;
        return -1; */
    }
};
