#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    int mx = arr[0], step = arr[0], jump=1;
    for (int i = 1; i < size; i++)
    {
        if(i == size-1){
            cout<<jump;
            break;
        }
        mx = max(mx,arr[i]+i);
        step--;
        if (step==0)    
        {
            jump++;
            if (i>=mx)
            {
                cout<<-1;
                break;
            }
            step = mx-i;
        }
        
        if(i!=1){
            cout<<-1;
        }
        cout<<endl;
      
    }
    
    
    return 0;
}