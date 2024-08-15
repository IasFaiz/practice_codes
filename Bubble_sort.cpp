#include <iostream>
using namespace std;
int sort(int arr[], int n) {
  cout << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      int temp;
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  return 0;
}

int main() {
  int n;
  cout << "Enter the number of elements: " << endl;
  cin >> n;
  int arr[n];
  cout << "Enter the elements: " << endl;
  for (int i = 0; i < n; i++) {
    cout << "Element " << i + 1 << endl;
    cin >> arr[i];
  }
  cout << "Given array: [ ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << ' ';
  }
  cout << "]" << endl;
  sort(arr, n);
  cout << "Sorted array: [ ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << ' ';
  }
  cout << "]" << endl << endl;
  return 0;
}