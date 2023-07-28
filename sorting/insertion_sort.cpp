#include <bits/stdc++.h>
#include <future>

using namespace std;

void insertion_sort(int arr[], int n) {

  for (int i = 1; i < n; i++) {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}

void print_array(int arr[], int n) {
  cout << "Sorted array : ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
}

int main() {
  int size;
  cin >> size;

  int arr[size];
  for (int i = 0; i < size; i++)
    cin >> arr[i];

  insertion_sort(arr, size);
  print_array(arr, size);

  return 0;
}
