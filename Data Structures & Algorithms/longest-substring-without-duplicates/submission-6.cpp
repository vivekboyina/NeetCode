class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 1;
        int n = s.length();
        if(n == 0) return n;
        int i = -1;
        unordered_map<char,int>mp;
        for(int j = 0; j < n; j++)
        {
            if(mp.find(s[j]) != mp.end() && mp[s[j]] > i) i = mp[s[j]];
            ans = max(ans,j - i);
            mp[s[j]] = j;
        }
        return ans;
    }
};
