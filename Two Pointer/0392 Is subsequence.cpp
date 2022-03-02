//https://leetcode.com/problems/is-subsequence/

//Approach 1 : Two pointer approach
//TC - O(n)
//SC - O(1)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int j = 0;

        //here we are keeping check on both string so that we end loop when even one string gets over.
        //however, there is no index out of bound in c++ so, even if we remove this check, it will remain correct.
        //but we should do that as in other language it will create error
        for(int i = 0; i<t.length() && j<s.length(); i++)
        {
            if(s[j] == t[i])
                j++;
        }
        if(j == s.length())
            return true;
        else 
            return false;
    }
};