//
// Created by xhl on 2021/5/3.
//

#ifndef ALGORITHM_STACK_LT_H
#define ALGORITHM_STACK_LT_H

#include "utils/contain_inc.h"

class StackLt {
public:
    static int longestValidParentheses(string s);

  static bool checkInclusion(string s1, string s2);
  static void test_checkInclusion();

public:
    static int test_longestValidParentheses();
};


#endif //ALGORITHM_STACK_LT_H
