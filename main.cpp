#include <iostream>
#include <cstring>
#include <string>
#include "Leetcode/Easy/easyHeader.h"
#include "Leetcode/Medium/mediumHeader.h"

using namespace std;

int main() {
    vector<int> x {6,14,2,11,2,7,0,9,12,7};
    //vector<int> x {1,1};
    cout<<x[0]<<endl;
    cout<<maxArea(x)<<endl;
    return 0;
}