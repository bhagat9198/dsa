#include <iostream>

using namespace std;

void reverseArray(int arr[], int n)
{
  for (int i = 0; i < n / 2; i++)
  {
    int temp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = temp;
  }

  cout << "array after reverse " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " , ";
  }
  cout << endl;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6};
  int n = sizeof(arr) / sizeof(int);

  cout << "array before reverse " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " , ";
  }
  cout << endl;

  reverseArray(arr, n);
  return 0;
}

// time : o(n/2) => o(n)
// space : o(1) 
  // not taking any extra space