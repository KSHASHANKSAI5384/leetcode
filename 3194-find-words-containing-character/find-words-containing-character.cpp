class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int n=words.size();
        vector<int> index;
        for(int i=0;i<n;i++){
            for(auto ch:words[i]){
                if(ch==x){
                    index.push_back(i);
                    break;
                }
            }
        }
        return index;
        
    }
};