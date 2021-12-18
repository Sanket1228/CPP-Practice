#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size,k;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cin>>k;

    sort(arr, arr+size);
    int ans = arr[size-1] - arr[0];
    int small, big;
    small = arr[0] + k;
    big = arr[size-1] - k;
    if(small>big){
        swap(small, big);
    }

    int sub, add;
    for (int i = 1; i < size-1; i++)
    {
        sub = arr[i] - k;
        add = arr[i] + k;

        if(sub>=small || add<=big){
            continue;
        }

        else if(big-sub <= add-small){
            small = sub;
        }

        else{
            big = add;
        }
    }
    cout<<min(ans,big-small);
    
    
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    
    return 0;
}