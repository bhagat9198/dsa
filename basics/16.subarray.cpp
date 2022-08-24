// number of subarrays for an "n" size array will be
// nC2 ie N combination 2
// roughtly equal to n2 (n square)
#include <iostream>

using namespace std;

void allSubArrays(int arr[], int start, int end)
{
  for (int i = start; i < end; i++)
  {
    for (int j = i; j < end; j++)
    {
      cout << "( ";
      for (int k = i; k < j; k++)
      {
        cout << arr[k] << " , ";
      }
      cout << "), ";
    }
    cout << endl;
  }
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  allSubArrays(arr, 2, 8);

  return 0;
}