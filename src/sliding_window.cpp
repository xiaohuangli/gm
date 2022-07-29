//
// Created by seamonwang on 2021/5/18.
//

#include "sliding_window.h"

bool SlidingWindow::checkInclusion(string s1, string s2) {
  if (s2.length() > s1.length())
    return false;

  map<char, int> character1;
  for (char c : s1) {
    character[c]++;
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
        start++;
        end++;
        if (end >= s2.length())
          return false;
        character2[s2[end]]++;
      }
    }
  }
  return false;
}

void SlidingWindow::test_checkInclusion() {
  string s1 = "ab";
  string s2 = "boalk";
  auto ret = checkInclusion(s1, s2);
  cout << "checkInclusion ret: " << ret << endl;
}
