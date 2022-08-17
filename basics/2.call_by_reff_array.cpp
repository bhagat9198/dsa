// passing arrays to functions

#include <iostream>

using namespace std;

// 3.

// void getSizeOfAarray(int * arr[]) // making it more explicit taht its a pointer variable
// void getSizeOfAarray(int arr[]) // this and above syntax is same
void getSizeOfAarray(int arr[], int n) // so, in order to get the correct size of araay, we need to pass size of array
{
  cout << "In function" << endl;
  cout << "size of array " << sizeof(arr) << endl;
  // int n = sizeof(arr) / sizeof(int);
  cout << "val of n " << n << endl;
  arr[0] = 100;
  cout << "printing array values" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " , ";
  }
  cout << endl;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6};
  cout << "in main" << endl;
  cout << "size of array " << sizeof(arr) << endl;

  int n = sizeof(arr) / sizeof(int);
  cout << "value of n " << n << endl;

  getSizeOfAarray(arr, n);

  cout << "In main, printing array values" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " , ";
  }
  cout << endl;

  return 0;
}

// output
// in main
//     size of array 24 value of n 6 In function
//         size of array 8 val of n 6 printing array values 100,
//     2, 3, 4, 5, 6,
//     In main, printing array values 100, 2, 3, 4, 5, 6,

// as arrays are passed by reffernce, value of orginal value changes 



    // 2.

    // void getSizeOfAarray(int arr[])
    // {
    //   cout << "In function" << endl;
    //   cout << "size of array " << sizeof(arr) << endl;
    //   int n = sizeof(arr) / sizeof(int);
    //   cout << "val of n " << n << endl;

    //   cout << "printing array values" << endl;
    //   for (int i = 0; i < n; i++)
    //   {
    //     cout << arr[i] << " , ";
    //   }
    //   cout << endl;
    // }

    // int main()
    // {
    //   int arr[] = {1, 2, 3, 4, 5, 6};
    //   cout << "in main" << endl;
    //   cout << "size of array " << sizeof(arr) << endl;

    //   int n = sizeof(arr) / sizeof(int);
    //   cout << "value of n " << n << endl;

    //   cout << "printing array values" << endl;
    //   for (int i = 0; i < n; i++)
    //   {
    //     cout << arr[i] << " , ";
    //   }
    //   cout << endl;

    //   getSizeOfAarray(arr); // we are passing as pass by reffernce not pass by value. thus function recives teh pinter to array instaed of array
    //   return 0;
    // }

    // output
    // in main
    //     size of array 24 value of n 6 printing array values 1,
    //     2, 3, 4, 5, 6,
    //     In function
    //         size of array 8 val of n 2 printing array values 1,
    //     2,

    // 1.

    // void getSizeOfAarray(int arr[])
    // {
    //   cout << "In function, size of array " << sizeof(arr) << endl; // sizeof on array function parameter will return size of 'int *' instead of 'int []'
    // }

    // int main()
    // {
    //   int arr[] = {1, 2, 3, 4, 5, 6};

    //   int n = sizeof(arr);
    //   cout << "In main,, size of array " << n << endl;

    //   getSizeOfAarray(arr);
    //   return 0;
    // }

    // output
    // In main, size of array 24
    // In function, size of array 8

    // this is bec, in main we have the array of int => 6 * 4 = 24 bytes
    // in function we are just having the address of the array which is int. address store in form of pointers and pointers have size of 8 bytes
