#define ll long long
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
    ll n = nums.size(), limit = 0, minInd = -1, maxInd = -1, res = 0;
    for(ll i=0; i<n; i++){
      if(nums[i] == minK) 
        minInd = i;
      if(nums[i] == maxK)
        maxInd = i;
      if(nums[i] < minK || nums[i] > maxK)
        limit = i + 1;
      res += max(0ll, min(minInd, maxInd) - limit + 1);
    }
    return res;
    }
};
