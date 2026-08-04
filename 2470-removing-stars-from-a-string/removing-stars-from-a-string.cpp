class Solution {
public:
    string removeStars(string s) {
        string ans = "";
        
        for (char c : s) {
            if (c == '*') {
                ans.pop_back(); // Remove the last added non-star character
            } else {
                ans.push_back(c); // Push non-star character
            }
        }
        
        return ans;
    }
};