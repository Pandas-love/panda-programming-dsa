#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int constant;
    Node *next = NULL; // getting Node

    Node(int constant)
    {
        this->constant = constant;
        this->next = NULL;
    }
};

void bottomin(Node *&top, Node *&bottom, int value)
{
    Node *new_node = new Node(value);

    if (top == NULL)
    {
        top = new_node;
        bottom = new_node;return;
    }

    bottom->next = new_node; // passing to next
    bottom = new_node;
}

int main()
{
    Node *top = NULL;
    Node *bottom = NULL;
    int beshi = INT_MIN;
    int kom = INT_MAX;

    while (1)
    {
        int mai;
        cin >> mai;

        if (mai == -1)
        {
            break;
        }
        else
        {
            bottomin(top, bottom, mai);
        }
    }

    Node *t = top;

    while (t != NULL)
    {
        beshi = max(beshi, t->constant);
        kom = min(kom, t->constant);
        t = t->next;
    }

    cout << beshi << " " << kom << endl;
    return 0;
}