#include <iostream>
#include <queue>
using namespace std;

int N, K;
queue<int> q;

int main() {
    cin >> N >> K;
    for(int i=1;i<=N;i++) q.push(i);

    while(!q.empty())
    {
        for(int i=1;i<K;i++)
        {
            q.push(q.front()); 
            q.pop();
        }
        cout<<q.front()<<" ";
        q.pop();

        if(q.size()==1)
        {
            cout<<q.front();
            break;
        } 
    }
    

    return 0;
}
