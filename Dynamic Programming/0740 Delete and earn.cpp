//https://leetcode.com/problems/delete-and-earn/submissions/

//https://leetcode.com/problems/delete-and-earn/discuss/1344748/C%2B%2B-solution-using-unordered_map-and-DP
//Time complexity = O(N) or O(max_val) which ever is greater
//Space complexity = O(N)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        unordered_map<int, int> A;
        int max_val = INT_MIN;
        for(int i=0; i<nums.size(); i++)
        {
            A[nums[i]]++;
            if(max_val<nums[i])
                max_val = nums[i];
        }
        vector<int> sum(max_val+1);
        sum[0] = 0;
        sum[1] = A[1];
        for(int i=2; i<=max_val; i++)
        {
            sum[i] = max(sum[i-2] + A[i]*i, sum[i-1]);
        }
        return sum[max_val];
    }
};