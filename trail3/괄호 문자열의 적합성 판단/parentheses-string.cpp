#include <iostream>
#include <string>
#include <stack>
using namespace std;

string str;
stack<char> st;

bool CheckBracket(string& str)
{
    for(auto ch : str)
    {
        if(ch == '(') st.push(ch);
        else 
        {
            if(st.empty()) return false;
            st.pop();
        }
    }
    if(!st.empty()) return false;
    return true;
}

int main() {
    cin >> str;
    bool result = CheckBracket(str);
    if(result) cout<<"Yes";
    else cout<<"No";


    return 0;
}
