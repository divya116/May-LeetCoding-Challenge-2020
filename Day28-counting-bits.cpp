class Solution {
public:
    vector<int> countBits(int num) 
    {
       vector<int> count(num+1, 0);
        for (int i=1; i<=num; i++)
        {
            //cout<<"For i = "<<i<<" /2="<<i/2<< " "<<i%2<<endl;
           // count[i]=count[i/2]+(i%2);
            count[i]=count[i>>1]+(i&1);
        }
     return count;   
    }
};
