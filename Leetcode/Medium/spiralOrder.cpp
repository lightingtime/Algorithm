//
// Created by HCY on 2018/4/22.
//

#include "mediumHeader.h"
//Suppose we have a 5X3 matrix (5 == 列的个数 3== 行的个数) 这个矩阵是3X5的
//Notice that the directions we choose always follow the order ‘right->down->left->up’, and for horizontal movements,
// the number of shifts follows:{5, 4, 3}, and vertical movements follows {2, 1, 0}.
//Another good thing about this implementation is that: If later we decided to do spiral traversal on
// a different direction (e.g. Counterclockwise), then we only need to change the Direction matrix;
// the main loop does not need to be touched.
vector<int> spiralOrder(vector<vector<int>> &matrix) {
    vector<vector<int>> dirs{{0,1},{1,0},{0.-1},{-1,0}};
    vector<int> res;
    int nr=matrix.size();
    if (nr == 0) {
        return res;
    }
    int nc = matrix[0].size();
    if (nc == 0) {
        return res;
    }

    vector<int> nSteps{nc, nr - 1}; // 传入的是{列的个数，行的个数}
    int iDir=0; // index of direction
    int ir=0,ic=-1; // initial position
    while (nSteps[iDir%2]) {
        for (int i = 0; i < nSteps[iDir % 2]; ++i) {
            ir+= dirs[iDir][0];
            ic+= dirs[iDir][1];
            res.push_back(matrix[ir][ic]);
        }
        nSteps[iDir%2]--;
        iDir = (iDir+1)%4;
    }
    return res;
} 

