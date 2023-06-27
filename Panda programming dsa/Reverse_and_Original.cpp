#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int number;
    Node *next;

    Node(int number)
    {
        this->number = number;
        this->next = NULL;
    }
    static void reversible(Node *top);
};

void Node::reversible(Node *top)
{
    Node *hold = top;
    if (hold == NULL)
    {
        return;
    }
    reversible(hold->next);
    cout << hold->number << " ";
}

void bottomfinder(Node *&top, Node *&bottom, int value)
{
    Node *new_Node = new Node(value);

    if (top == NULL)
    {
        top = new_Node;
        bottom = new_Node;
    }

    bottom->next = new_Node;
    bottom = new_Node;
}

void get_output(Node *top)
{
    Node *hold = top;

    while (hold != NULL)
    {
        cout << hold->number << " ";
        hold = hold->next;
    }

    cout << endl;
}

int main()
{
    Node *top = NULL;
    Node *bottom = NULL;

    while (1)
    {
        int value;
        cin >> value;
        if (value == -1)
        {
            break;
        }
        bottomfinder(top, bottom, value);
    }

    Node::reversible(top);
    cout << endl;
    get_output(top);
    return 0;
}