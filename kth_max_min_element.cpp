#include <iostream>
#include <queue>

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
    int k;
    cin>>k;

    priority_queue<int> p;
    for (int i = 0; i < size; i++)
    {
        p.push(arr[i]);
    } 

    int ans, i=1;
    while(!p.empty()){
        if(k==i){
            ans = p.top();
            break;
        }
        i++;
        p.pop();
    }
    cout<<ans<<endl;
    return 0;
}