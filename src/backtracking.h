//
// Created by xhl on 2021/5/9.
//

#ifndef ALGORITHM_BACKTRACKING_H
#define ALGORITHM_BACKTRACKING_H
#include "utils/contain_inc.h"

class backtracking {
public:
    static vector<vector<int>> permute(vector<int>& nums);
    static vector<vector<int>> permuteUnique(vector<int>& nums);
    static int longestSubstring(string s, int k);
public:
    static void test_permute();
};


#endif //ALGORITHM_BACKTRACKING_H
