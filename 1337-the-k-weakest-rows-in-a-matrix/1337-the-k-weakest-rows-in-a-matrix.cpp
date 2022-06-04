class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k)
    {   vector<int>vec;
        for(int i=0;i<mat.size();i++)
        { int c=0;
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==1)
                    c++;
                else
                    break;
            }
         vec.push_back(c);
        }
        vector<int>count;
        while(k--)
        { int min=100000,f=0;
        for(int i=0;i<vec.size();i++)
        {if(vec[i]<min)
            {min=vec[i];
                f=i;
            }
        }count.push_back(f);
            vec[f]=10000;
        }
        return  count;
    }
};