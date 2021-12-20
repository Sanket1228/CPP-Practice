#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
        vector <int> smaller_number(vector<int> arr, int n){
            vector<int> vt;
            stack<int> st;
            for (int i = n-1; i < n; i++)
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
                    vt.push_back(arr[i]);
                }
                st.push(arr[i]);                
            }
            reverse(vt.begin(),vt.end());
            return vt;
        }
};

int main()
{
    int size;
    cin>>size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    Solution s;
    vector<int> ans = s.smaller_number(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout<<ans[i];
    }
    return 0;
}