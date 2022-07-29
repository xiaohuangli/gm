//
// Created by xhl on 2021/5/3.
//

#include "stack_lt.h"

int StackLt::longestValidParentheses(string s) {
    stack<int> stack;
    for (int i = 0; i < s.length(); i++) {
        if (stack.empty() || s[i] == '(' || s[stack.top()] == ')') {
            stack.push(i);
        } else {
            stack.pop();
        }
    }

    int max_len = 0;
    int last = s.length();
    while(stack.empty() == false) {
        int cur = last - stack.top() - 1;
        max_len = std::max(cur, max_len);
        last = stack.top();
        stack.pop();
    }
    return std::max(last, max_len);
}

int StackLt::test_longestValidParentheses() {
    string str = ")()((()())";
    int len = StackLt::longestValidParentheses(str);
    cout << "len: " << len << endl;
    return 0;
}


bool StackLt::checkInclusion(string s1, string s2) {
  if (s2.length() < s1.length())
    return false;

  map<char, int> character1;
  for (char c : s1) {
    character1[c]++;
  }

  auto func = [](const map<char, int>& m1, const map<char, int>& m2) -> bool {
    if (m1.size() != m2.size())
      return false;
    for (auto&& pair : m1) {
      if (m2.find(pair.first) == m2.end() || m2.find(pair.first)->second != pair.second)
        return false;
    }
    return true;
  };

  map<char, int> character2;
  int start = 0;
  int end = 0;
  while (true) {
    if (end - start < s1.length()) {
      character2[s2[end]]++;
      end++;
    } else {
      if (func(character1, character2)) {
        return true;
      } else {
        character2[s2[start]]--;
        if (character2[s2[start] <= 0]) {
          character2.erase(s2[start]);
        }
        start++;
        end++;
        if (end >= s2.length())
          return false;
        character2[s2[end]]++;
      }
    }
  }
}

void StackLt::test_checkInclusion() {
  string s1 = "ba";
  string s2 = "eidbaooo";
  auto ret = StackLt::checkInclusion(s1, s2);
  cout << "checkInclusion ret: " << ret << endl;
}