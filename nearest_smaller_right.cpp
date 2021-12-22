#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
        vector <int> smaller_number(vector<int> arr, int n){
            vector<int> vt;
            stack<int> st;
            for (int i = n-1; i >= 0; --i)
            {
                while (!st.empty() && st.top() >= arr[i])
                {
                    st.pop();
                }
                if (st.empty())
                {
                    vt.push_back(-1);
                }
                else{
                    vt.push_back(st.top());
                }
                st.push(arr[i]);                
            }
            reverse(vt.begin(),vt.end());
            return vt;
        }
};

int main()
{
    int size,a;
    cin>>size;
    vector<int> arr;
    for (int i = 0; i < size; i++)
    {
        cin>>a;
        arr.push_back(a);
    }

    // for (int i = 0; i < size; i++)
    // {
    //     cout<<arr[i];
    // }

    Solution s;
    vector<int> ans = s.smaller_number(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0; 
}