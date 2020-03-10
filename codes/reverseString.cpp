#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    string temp = "";

    cin >> s;

    /*for( int i = s.size() - 1; i >= 0; i-- ){
        temp = temp + s[i];
    }
    */
    stack <char> st;

    for( int i = 0; i < s.size(); i++ ){
        st.push(s[i]);
    }

    while( !st.empty() ){
        temp += st.top();
        st.pop();
    }

    cout << "Reverse Result is: " << temp << endl;


}
