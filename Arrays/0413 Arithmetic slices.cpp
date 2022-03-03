//https://leetcode.com/problems/arithmetic-slices/

//TC - O(n^2)
//SC - O(1)

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
		// if nums size is less than 3 return false
        if(nums.size() < 3)
            return 0;
        
        int cnt = 0, diff;
        
        for(int i = 0; i<nums.size()-2; ++i)
        {
			// storing diff of first 2 elements
            diff = nums[i+1] - nums[i];
			
			// checking for consecutive elements with same difference.
            for(int j = i+2; j<nums.size(); ++j)
            {
				// if we find the same diff of next 2 elements
				// this means we  find consecutive elements
				// increase the Count
                if(nums[j] - nums[j-1] == diff)
                    ++cnt;
                else
				// break as we need to cnt for consecutive diff elements
                    break;
            }
        }
		// return cnt
        return cnt;
    }
};

//Approach 2
//TC - O(n)
//SC - O(1)

/*

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
     
        if(nums.size() < 3)
            return 0;
        
        //to store count of current continuous sequence of arithmetic numbers
        int count = 0;
        
        //to store no. of arithmetic sequence
        int ans = 0;        
        
        int prevDiff = nums[1] - nums[0];
        int currDiff;
        for(int i = 1; i<nums.size()-1; i++)
        {
            currDiff = nums[i+1] - nums[i];
            
            // if we find same diff of consecutive elements
            // increase count
            if(currDiff == prevDiff)
                count++;
            
            else
            {
                // update prev diff with curr diff
                // as we don't find consecutive elements with same diff
                prevDiff = currDiff;
                count = 0;
            }
            // add current continuous arithmetic sequence count to ans
            ans = ans + count;
        }
        return ans;
    }
};

*/