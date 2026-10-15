class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

    // Brute force apporach

    //     vector<string>copy;
    //     unordered_map<string,bool>m;
    //     int i=0;
    //     while(i<strs.size())
    //     {
    //         copy.push_back(strs[i]);
    //         i++;
    //     }
    //    for(int i = 0; i < copy.size(); i++)
    //    {
    //       sort(copy[i].begin(), copy[i].end());
    //    }
    //     i=0;
    //     vector<vector<string>>ans;
    //     while(i<strs.size())
    //     {
    //         if(m[copy[i]]==true)
    //         {
    //             i++;
    //         }
    //         else
    //         {
    //         vector<string>p;
    //         p.push_back(strs[i]);
    //         for(int j=i+1;j<strs.size();j++)
    //         {
    //             if(copy[i]==copy[j])
    //             {
    //                 p.push_back(strs[j]);
    //                 m[copy[j]]=true;
    //             }
    //         }
    //         ans.push_back(p);
    //         i++;
    //       }
    //     }
    //     return ans;

    // optimised apporoach
    
    unordered_map<string,vector<string>>m;
    vector<vector<string>>ans;
    for(int i=0;i<strs.size();i++)
    {
        string copy=strs[i];
        sort(copy.begin(),copy.end());
        m[copy].push_back(strs[i]);
    }
     for(auto it: m)
     {
        ans.push_back(it.second);
     }
     return ans;
    }
};