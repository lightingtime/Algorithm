#include "Leetcode/Easy/easyHeader.h"
#include "Leetcode/Medium/mediumHeader.h"
int main() {
    //vector<int> x={9};
    //vector<int> x={1,0};
    vector<int> x={1,9};
    x=plusOne(x);
    for (int i = 0; i < x.size(); ++i) {
        cout<<x[i];
    }
    return 0;
}