#include <iostream>
using namespace std;
int secondLargestElement(int arr[], int n) {
  cout << endl;
  int largest, _2ndLargest, temp;
  if (arr[0] > arr[1]) {
    largest = arr[0];
    _2ndLargest = arr[1];
  } else {
    _2ndLargest = arr[0];
    largest = arr[1];
  }

  for (int i = 1; i < n; i++) {
    temp = arr[i];
    if (temp > largest) {
      _2ndLargest = largest;
      largest = temp;
    } else if (temp > _2ndLargest) {
      _2ndLargest = temp;
    }
  }
  // cout << _2ndLargest << largest;
  if (_2ndLargest == largest) {
    cout << "invalid output" << endl;
    return -1;
  } else {
    cout << "Second largest element: " << _2ndLargest << endl;
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
  secondLargestElement(arr, n);
  return 0;
}