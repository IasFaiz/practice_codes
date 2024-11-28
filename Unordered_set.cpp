#include <bits/stdc++.h>
// #include <iostream>
// #include <unordered_set>
using namespace std;
int main() {
  unordered_set<int> s;
  s.insert(1);
  s.insert(3);
  s.insert(5);
  s.insert(7);
  s.insert(9);

  cout << "First element: " << *s.begin();
  cout << endl;
  // s.clear();// will clear whole set to zero elements
  //   cout << *(s.end()); // end does not have value
  cout << "All elements: ";
  for (auto itr = s.begin(); itr != s.end(); itr++) {
    cout << *itr << " ";
  } // not sorted as this un_Ord_set is based on hashing
  cout << endl;
  cout << "Size: " << s.size(); // 6 because duplicates are not allowed
  cout << endl;
  srand(static_cast<unsigned int>(time(
      0))); // Seeds different values to rand() so it changes sequence everytime
  int key1 = rand() % 10 + 1;
  int key2 = rand() % 10 + 1;
  if (s.find(key1) != s.end()) // find() will give reference
    cout << key1 << " : Yes it is there";
  else
    cout << key1 << " : No, it is not there";
  cout << endl;
  if (s.count(key2)) // count() will give Boolean value
    cout << key2 << " : Yes it is there";
  else
    cout << key2 << " : No, it is not there";
  cout << endl;
  if (s.erase(key1)) // erase(key) erases given element
    cout << key1 << " : Deleted!";
  else
    cout << key1 << " : Not There, Can't Delete";
  cout << endl << "Current elements: ";
  for (auto itr = s.begin(); itr != s.end(); itr++) {
    cout << *itr << " ";
  }
  cout << endl;

  return 0;
}