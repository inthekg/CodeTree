#include <iostream>
#include <string>

using namespace std;

struct Node {
    Node* pNext = nullptr;
    int value;
    Node(int v) : value(v) {}
};

Node* pHead = nullptr;
Node* pTail = nullptr;
int N;
string command[10000];
int value;

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push") {
            cin>>value;
            Node* newNode  = new Node(value);
            if(pHead == nullptr) 
            {
                pHead = newNode;
                pTail = newNode;
            }
            else
            {
                pTail->pNext = newNode;
                pTail = newNode;
            }
        }

        else if(command[i]=="pop")
        {
            if(pHead != nullptr)
            {
                cout<<pHead->value<<endl;
                Node* pNextNode = pHead->pNext;
                delete(pHead);
                if(pNextNode ==nullptr)
                {
                    pHead = nullptr; 
                    pTail = nullptr;
                }
                else
                {
                    pHead = pNextNode;
                }
            }
        }

        else if(command[i] == "size")
        {
            if(pHead == nullptr) cout<<"0"<<endl;
            else
            {
                int count = 1;
                Node* pNode = pHead;
                while(pNode != pTail)
                {
                    count++;
                    pNode = pNode->pNext;
                }    
                cout<<count<<endl;
            }
        }
        else if(command[i] == "front")
        {
            if(pHead != nullptr) cout<<pHead->value<<endl;
        }

        else if(command[i] == "empty")
        {
            cout<<(pHead==nullptr?1:0)<<endl;
        }

    }


    return 0;
}
