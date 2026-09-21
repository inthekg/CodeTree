#include <iostream>
#include <string>
using namespace std;

int N;
string command[10000];
int value[10000];
int idx = -1;

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push") {
            cin >> value[++idx];
        }
        else if(command[i] =="pop")
        {
            if(idx != -1)
                cout<<value[idx--]<<endl;
        }
        else if(command[i] == "size")
        {
            cout<<idx+1<<endl;
        }
        else if(command[i] == "empty")
        {
            cout<<(idx==-1?1:0)<<endl;
        }
        else if(command[i] == "top")
        {
            if(idx!=-1) cout<<value[idx]<<endl;
        }
    }

    // Please write your code here.

    return 0;
}
