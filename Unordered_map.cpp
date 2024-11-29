#include <bits/stdc++.h>

using namespace std;
int main() {
  unordered_map<string, int> m;
  m["faiz"] = 1;
  m["Ahmad"] = 2;
  m["prince"] = 3;

  for (auto item : m) {
    cout << item.first << " " << item.second << endl;
  }

  return 0;
}