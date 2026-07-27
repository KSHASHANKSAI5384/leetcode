class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> ans;
        map<int, string> mymap;
        for(int i=0;i<names.size();i++){
            mymap[heights[i]]=names[i];
        }
        for(auto a: mymap){
            ans.push_back(a.second);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

