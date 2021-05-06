//
// Created by xhl on 2021/5/3.
//
#include <stack>
#include <iostream>
#include "stack_lt.h"



int main() {
    std::string str = ")()((()())";
    int len = StackLt::longestValidParentheses(str);
    std::cout << "len: " << len << std::endl;
}
