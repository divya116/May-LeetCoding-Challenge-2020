class Solution {
public:
    void print(multiset<char> s)
    {
        cout<<"Now temp is ";
        for (auto c : s)
            cout<<c<<" ";
        cout<<endl;
    }
    vector<int> findAnagrams(string s, string p) 
    {
        vector<int> res;
        map<char,int> map;
        int start=0;
        int matched = 0;
        for(auto x : p){
            map[x]++;
        }
        
        for(int end =0 ; end<s.size(); end++){
            char right  = s[end];
            if(map.find(right)!=map.end()){
                map[right]--;
                if(map[right]==0){
                    matched++;
                }
            }
            if(matched==map.size())
            {
                res.push_back(start);
            }
            if(end>=p.size()-1){
                char left = s[start++];
                if(map.find(left)!=map.end()){
                    if(map[left]==0){
                        matched--;
                    }
                    map[left]++;
                }
            }
            
        }
        return res;

       /* int anlen=p.size();
        multiset<char> org;
        for (auto c:p)
            org.insert(c);
        //print(org);
        vector<int> res;
        if (s.size()<p.size())
            return res;
        int start=0;
        multiset<char> temp = org;
        for (int j=0; j<=s.size()-p.size(); j++)
        {
               // cout<<"starting from "<<s[j]<<endl;
                temp=org;
            //print(temp);
                for (int i=j; s[i]!=NULL; i++)
                {
                    if (temp.find(s[i])!=temp.end())
                    {
                       //cout<<s[i]<<" found in set, after removing it\n";
                        temp.erase(temp.lower_bound(s[i])); 
                       // print(temp);
                        if (temp.empty())
                        {
                            res.push_back(j);
                            //cout<<"Pushing "<<j<<endl;
                            temp=org;
                            //print(temp);
                            break;
                        }
                    }
                    else
                        break;
                }
            
        }
        return res;*/
        
    }
};
