#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
        vector<int> greater_ele(vector<int> arr, int n){
            stack<int> st;
            vector<int> vt;

            for (int i = 0; i < n; i++)
            {
                while(!st.empty() && st.top()>=arr[i]){
                    st.pop();
                }
                if(st.empty()){
                    vt.push_back(-1);
                }
                else{
                    vt.push_back(st.top());
                }
                st.push(arr[i]);
            }
            return vt;
        }
};

int main()
{
    int size,a;
    cin>>size;
    vector <int> arr;
    for (int i = 0; i < size; i++)
    {
        cin>>a;
        arr.push_back(a);
    }

    Solution s;
    vector<int> res = s.greater_ele(arr,size);
    for (int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<" ";
    }
    
    
    return 0;
}