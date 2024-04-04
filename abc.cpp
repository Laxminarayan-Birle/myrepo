// https://leetcode.com/problems/bitwise-ors-of-subarrays/
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int subarrayBitwiseORs(vector<int> &arr)
    {
        int i;
        int j, n = arr.size();
        unordered_set<int> st;
        for (i = 0; i < n; i++)
        {

            int pre = 0, curr = arr[i];
            st.insert(arr[i]);
            for (j = i + 1; j < n; j++)
            {

                curr = (curr | arr[j]);
                pre = pre | arr[j];
                st.insert(curr);
                if (pre == curr)
                    break;
            }
        }
        return st.size();
    }
};