#include<bits/stdc++.h>

using namespace std;

void selectio_sort(int arr[] , int n){
    int i , j , min_index;
    for(i = 0 ; i < n ; i++){
        min_index = i;
        for(j = i + 1 ; j < n ; j++){
            if(arr[min_index] > arr[j]){
                min_index = j;
            }
        }
        swap(arr[min_index] , arr[i]);
    }
}

void print_array(int arr[] , int n){
    cout << "Sorted array : ";
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

    selectio_sort(arr , n);
    print_array(arr , n);

    return 0;
}