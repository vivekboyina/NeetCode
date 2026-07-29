class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int n = s.length();
        int i = -1;
        unordered_map<char,int>mp;
        for(int j = 0; j < n; j++)
        {
            if(mp.find(s[j]) != mp.end()) i = max(mp[s[j]],i);
            ans = max(ans,j - i);
            mp[s[j]] = j;
        }
        return ans;
    }
};
