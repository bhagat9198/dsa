#include<iostream>

using namespace std;

int main() {
  int marks[100];
  int n;
  cout << "enter the number of students";
  cin >> n;

  for(int i = 0; i < n; i ++) {
    cin >> marks[i];
  }

  cout << "marks are : -";
  for (int i = 0; i < n; i++) {
    // cout << marks[i] << " , ";
    cout << marks[i] << '\n';
  }

  cout << endl;
  return 0;
}
