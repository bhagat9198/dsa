#include <iostream>
using namespace std;

void binarySearch(int arr[], int n, int k)
{
  int start = 0;
  int end = n - 1;
  int flag = 0;

  while (start < end)
  {
    int modKey = (end - start) / 2;
    if (arr[modKey] < k)
    {
      end = modKey;
    }
    else if (arr[modKey] > k)
    {
      start = modKey;
    }
    else
    {
      flag = 1;
      cout << "found " << endl;
      break;
    }
  }
  if(!flag) {
    cout << "not found " << endl;
  }
}

int main()
{
  int arr[] = {3, 5, 1, 9, 7, 2, 8};
  int arrSize = sizeof(arr) / sizeof(int);
  int key = 5;
  binarySearch(arr, arrSize, key);

  cout << endl;
  return 0;
}