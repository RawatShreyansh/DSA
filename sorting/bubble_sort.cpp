#include<bits/stdc++.h>

using namespace std;

void bubble_sort(int arr[] , int n){
    for(int i = 0 ;i < n - 1 ; i ++){
        int swapped = 0;
        for(int j = 0 ; j < n - i - 1 ; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j] , arr[j + 1]);
                swapped = 1;
            }
        }
        if(swapped == 0)
            break;
    }
}

void print_array(int arr[] , int n){
    cout << "Sorted arry :";
    for(int i = 0 ; i < n ; i++)
        cout << arr[i] << " ";
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0 ; i < n ; i++)
        cin >> arr[i];

    cout << endl;

    bubble_sort(arr , n);
    print_array(arr , n);

    return 0;
}