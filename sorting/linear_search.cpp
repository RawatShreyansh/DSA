#include<bits/stdc++.h>

using namespace std;

int linear_search(vector<int> &nums, int target)
{
    int size = nums.size();
    for(auto i = 0 ; i < size ; i++)
        if(nums[i]==target)
            return i;
    return -1;
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums;
    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        
        nums.push_back(x);
    }

    int target;
    cin >> target;

    cout << linear_search(nums , target) << endl;

    return 0;
}
