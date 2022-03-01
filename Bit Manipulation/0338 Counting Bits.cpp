//https://leetcode.com/problems/counting-bits/

//Approach 1 :
//TC - O(n^2)

//did the right approach
// made mistake by initialising count outside of all lopps.
//it should be initialised inside for loop so we can reset it for each no.
// num = i should be done, else value of i will change and give wrong ans
//TC - O(n^2)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
       
        vector<int> ans;
        
        ans.push_back(0);
        for(int i = 1; i<=n; i++)
        {
            int num = i;
            int count = 0;
            while(num)
            {
                num = num & (num-1);
                count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};