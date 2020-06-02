class Solution {
public:
    int numJewelsInStones(string J, string S) 
    {
        unordered_set<char> jewels;
        for (auto i:J)
            jewels.insert(i);
        int nojewels=0;
        for (auto i:S)
        {
            if (jewels.find(i)!=jewels.end())
                nojewels++;
        }
        return nojewels;
    }
};
