class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = INT_MIN;
        for(int i : piles) high = max(high,i);
        int mid;
        int cnt = 0;
        while(low <= high)
        {
            
            mid = low + (high - low)/2;
            cnt = 0;
            for(int i : piles)
            {
                if(i % mid == 0) cnt+=(i/mid);
                else cnt+=((i/mid) + 1);
            }
            if(cnt > h) low = mid + 1;
            else high = mid - 1;
        }
        return low;
    }
};
