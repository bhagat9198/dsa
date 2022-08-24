// [1,2, 3, 4]
// so we have to print all the pairs with each number
// (1,2), (1,3), (1,4)
// (2,3), (2, 4)
// (3, 4)

#include <iostream>

using namespace std;

void formingAllPairs(int arr[], int n) {
  for(int i = 0; i < n-1; i++) {
    for(int j = i+1; j < n; j++) {
      cout << "(" << arr[i] << "," << arr[j] << ") , ";
    }
    cout << endl;
  }
}

int main() {
  int arr[] = {1, 2, 3, 4};
  int n = sizeof(arr)/sizeof(int);
  formingAllPairs(arr, n);

  return 0;
}
