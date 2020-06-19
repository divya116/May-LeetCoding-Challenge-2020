class Solution {
public:
    bool checkInclusion(string s1, string s2) 
    {
        //hashmap gives tle so use array
        //unordered_map<char, int> m;
        //unordered_map<char, int> temp;
        vector<int> m(26, 0);
        vector<int> temp (26, 0);
        for (auto c: s1)
            m[int(c-'a')]++;
        temp=m;
        int len=s1.size();
        int n=s2.size();
        int flag=1;
        for (int i=0; i<=n-len; i++)
        {
            temp=m;
            flag=1;
            for (int j=i; j<i+len; j++)
            {
                if (temp[int(s2[j]-'a')]>0)
                {
                   // cout<<s2[j]<<"is part of temp\n";
                    temp[int(s2[j]-'a')]--;
                }
                else
                {
                    //cout<<s2[j]<<" not found\n";
                    flag=0;
                    break;
                }
            }
            if (flag)
            {
                //cout<<"found at index "<<i;
                return true;
            }
        }
        return false;
        
    }
};
