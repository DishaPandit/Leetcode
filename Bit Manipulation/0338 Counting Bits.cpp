//https://leetcode.com/problems/counting-bits/

//Approach 1 :
//TC - O(nlog n)
//SC - O(n)
//Its clear from the first approach that its using one loop which is running 0 <= i <=n and for each 'i' we are counting the set bits which is calculated in logN time.
//for explain why counting set bit is logN? this is because we are dividing each ith number by 2 until it's not become 0 and checking if 'i' is odd, if yes then its set bit else it's not a set bit (if you know binary search this is similar to that)
//concluding all these facts we can say, the complexity is N*logN.

//did the right approach
// made mistake by initialising count outside of all lopps.
//it should be initialised inside for loop so we can reset it for each no.
// num = i should be done, else value of i will change and give wrong ans

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

//Approach 2 :
//https://leetcode.com/problems/counting-bits/discuss/1808016/C%2B%2B-oror-Vectors-Only-oror-Easy-To-Understand-oror-Full-Explanation

//TC - O(n)
//SC - O(n)

/*

class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> ans(n+1);
        ans[0] = 0;
        
        for(int i = 1; i<=n; i++)
        {
            ans[i] = ans[i/2] + i%2;
        }
        return ans;
    }
};

*/