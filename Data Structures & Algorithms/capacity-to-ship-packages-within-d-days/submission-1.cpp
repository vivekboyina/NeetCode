class Solution {
public:
    int shipWithinDays(vector<int>& wei, int days) {
        int low = INT_MIN;
        int high = 50000;
        for(int i : wei) low = max(low,i);
        int mid;
        int ans = INT_MAX;
        int cnt = 0;
        int w = 0;
        while(low <= high)
        {
            mid = low + (high - low)/2;
            cnt = 0;
            w = 0;
            for(int i : wei)
            {
                w+=i;
                if(w > mid)
                {
                    cnt++;
                    w = i;
                }
            }
            if(w > 0) cnt++;
            ans = min(w,ans);
            if(cnt > days) low = mid + 1;
            else high = mid - 1;
        }
        return low;
    }
};