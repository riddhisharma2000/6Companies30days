// Solution with time complexity n(klogk)
// n - number of strings , k - max length of string
class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& strl) {
       
       int n = strl.size();
       unordered_map<string, vector<string> > mymap;
       string temp;
       
       for(int i=0;i<n;i++)
       {
           temp = strl[i];
           sort(strl[i].begin(),strl[i].end());
           mymap[strl[i]].push_back(temp);
       }
       
       vector<vector<string> > ans;
       
       for(auto itr= mymap.begin(); itr != mymap.end() ;++itr)
       {
           ans.push_back(itr->second);
       }
       
       return ans;
    }
};
