#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
        vector<int> greatest_number(vector <int> arr, int n){
            stack<int> st;
            vector<int> v;
            // st.push(arr[n-1]);
            // v.push_back(-1);
            for (int i = n-1; i >= 0; --i)
            {           
                while (!st.empty() && st.top() <= arr[i])
                {
                   st.pop();
                }
                if(st.empty()){
                    v.push_back(-1);
                }
                else{
                    v.push_back(st.top());
                }
                st.push(arr[i]);
            }

            // for (int i = 0; i < st.size(); i++)
            // {
            //     cout<<st.top()<<" ";
            //     st.pop();
            // }
            
                reverse(v.begin(),v.end());
                return v;
        }
};

int main()
{
    int size,temp;
    cin>>size;
    vector <int> arr;
    for (int i = 0; i < size; i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }

    // for (int i = 0; i < size; i++)
    // {
    //     cout<<arr[i]<<" "; 
    // }
    
    Solution s;
    // s.greatest_number(arr, size);
    vector<int> res = s.greatest_number(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout<<res[i]<<" ";
    } 
    
   
    return 0;
}