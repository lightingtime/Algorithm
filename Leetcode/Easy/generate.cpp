//
// Created by HCY on 2018/5/4.
//

#include "easyHeader.h"

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ret;
    for (int i = 0; i < numRows; ++i) {
        vector<int> row(i+1,1);
        for (int j = 1; j < row.size()-1; ++j) {
            row[j] = ret[i-1][j-1]+ret[i-1][j];
        }
        ret.push_back(row);
    }
    return ret;
} 

