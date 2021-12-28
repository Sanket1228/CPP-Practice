#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
        vector<int> consecutive_smaller_number(int arr[], int n){
            vector <int> vt;
            stack<int> st;
            vt.push_back(1);
            st.push(0);
            for (int i = 1; i < n; i++)
            {
                while (!st.empty() && arr[st.top()] < arr[i])
                {
                    st.pop();
                }

                if(st.empty()){
                    vt.push_back(i+1);
                }
                else{
                    vt.push_back(i - st.top());
                }
                st.push(i);                
            }
        return vt;
        }
};

int main()
{   
    int arr [] = {100, 80, 60, 70, 60, 75, 85};
    Solution s;
    int n = sizeof(arr)/sizeof(arr[0]);
    vector <int> res = s.consecutive_smaller_number(arr,n);
    for (int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<" ";
    }
    
    return 0;
}