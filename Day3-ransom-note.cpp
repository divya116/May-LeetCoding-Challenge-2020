class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        unordered_map<char, int> m;
        for (auto i:magazine)
            m[i]++;
        
        bool possible=1;
        for (auto i:ransomNote)
        {
            if (m[i]>0)
            {
                m[i]--;
            }
            else
            {
                possible=0;
                break;
            }
        }
        return possible;
    }
};
