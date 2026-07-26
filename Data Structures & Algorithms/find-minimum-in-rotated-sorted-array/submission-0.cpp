class Solution {
public:
    int ans = INT_MAX;
    void binarysearch(vector<int> nums,int l,int r)
    {
        if(l > r) return;
        int m = l + (r - l)/2;
        ans = min(ans,nums[m]);
        binarysearch(nums,m + 1,r);
        binarysearch(nums,l,m - 1);
    }
    int findMin(vector<int> &nums) {
        binarysearch(nums,0,nums.size() - 1);
        return ans;
    }
};
