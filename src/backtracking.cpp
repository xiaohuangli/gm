//
// Created by xhl on 2021/5/9.
//

#include "backtracking.h"
#include <iostream>

void backtracking_permute(const vector<int>& nums, vector<vector<int>>& result,
                          vector<int>& tmp, vector<int>& exist) {
    if (tmp.size() == nums.size()) {
        result.push_back(tmp);
        return;
    }
    for (int i = 0; i < nums.size(); i++) {
        if (exist[i])
            continue;
        tmp.push_back(nums[i]);
        exist[i] = 1;
        backtracking_permute(nums, result, tmp, exist);
        exist[i] = 0;
        tmp.pop_back();
    }
}

vector<vector<int>> backtracking::permute(vector<int> &nums) {
    vector<vector<int>> result;
    vector<int> exist(nums.size(), 0);
    vector<int> tmp;
    backtracking_permute(nums, result, tmp, exist);
    return result;
}

void backtracking_permuteUnique(const vector<int>& nums, vector<vector<int>>& result,
                                 vector<int>& tmp, vector<int>& exist) {
    if (tmp.size() == nums.size()) {
        result.push_back(tmp);
        return;
    }
    for (int i = 0; i < nums.size(); i++) {
        if (exist[i] || (i > 0 && exist[i - 1] == 0 && nums[i] == nums[i - 1])) {
            continue;
        }

        tmp.push_back(nums[i]);
        exist[i] = 1;
        backtracking_permuteUnique(nums, result, tmp, exist);
        exist[i] = 0;
        tmp.pop_back();
    }
}

vector<vector<int>> backtracking::permuteUnique(vector<int> &nums) {
    vector<vector<int>> result;
    vector<int> exist(nums.size(), 0);
    vector<int> tmp;
    sort(nums.begin(), nums.end());
    backtracking_permuteUnique(nums, result, tmp, exist);
    return result;
}

void backtracking::test_permute() {
    std::vector<int> nums = {1,1,3};
//    auto result = permute(nums);
    auto result = permuteUnique(nums);
    for (auto&& v : result) {
        std::cout << "[ ";
        for (int n : v) {
            std::cout << n << " ";
        }
        std::cout << "]" << ",";
    }
}