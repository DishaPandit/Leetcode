//https://leetcode.com/problems/champagne-tower/

//TC - O(row^2)
//SC - O(row^2)

//glasses[i][j] = 1 kr de rhe kyuki max capacity to 1 hai glass ki

#include<iostream>
using namespace std;

class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        
        double glasses[101][101] = {0.0};
        glasses[0][0] = poured;
        for (int i = 0; i <= query_row; i++) {
            for (int j = 0; j <= i; j++) {
                if (glasses[i][j] > 1) {
                    
                    double rem = glasses[i][j] -1;
                    glasses[i + 1][j] += rem / 2.0;
                    glasses[i + 1][j + 1] += rem / 2.0;
                    glasses[i][j] = 1;
                }
            }
        }
        return glasses[query_row][query_glass];
    }
};



