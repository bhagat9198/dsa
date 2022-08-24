#include <iostream>

using namespace std;

void linerSearchFun(int arr[], int n, int k)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == k)
    {
      cout << "Element present at index " << i << endl;
    }
  }
}

int main()
{
  int arr[] = {3, 5, 1, 9, 7, 2, 8};
  int arrSize = sizeof(arr) / sizeof(int);
  int key = 15;
  linerSearchFun(arr, arrSize, key);

  // cout << "sorted array" << endl;

  // for(int i = 0; i < arrSize; i++) {
  //   cout << arr[i] << " , " ;
  // }
  cout << endl;
  return 0;
}