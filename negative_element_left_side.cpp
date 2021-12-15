#include <iostream>

using namespace std;

int main()
{
    int size;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size;  i++)
    {
        cin>>arr[i];
    }
    
    int pivot = 0;
    int i=-1;
    for (int j = 0; j < size; j++)
    {
        if(arr[j]<pivot){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }    
    }
    for (int j = 0; j < size; j++)
    {
        cout<<arr[j]<<" ";  
    }
    

    return 0;
}