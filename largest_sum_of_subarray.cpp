#include <iostream>

using namespace std;

int main()
{
    int size;
    cin>>size;
    int arr[size+1];
    for (int i = 1; i <= size; i++)
    {
        cin>>arr[i];
    }
    int ma = INT8_MIN;
    int max_till_here = 0;
    
    for (int i = 1; i <= size; i++)
    {
        max_till_here = max_till_here + arr[i];
        if(max_till_here>ma){
            ma = max_till_here;
        }
        if(max_till_here<0){
            max_till_here = 0;
        }
    }
    

    cout<<ma<<endl;
    

    

    return 0;
}