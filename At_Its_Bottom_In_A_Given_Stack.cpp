//Coding ninjas/code360
// Insert An Element At Its Bottom In A Given Stack

#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& st, int x) 
{
    stack<int>new_st;
    while(!st.empty())
    {
        new_st.push(st.top());
        st.pop();
    }
    st.push(x);

    while(!new_st.empty())
    {
        st.push(new_st.top());
        new_st.pop();
    }
    return st;
}
