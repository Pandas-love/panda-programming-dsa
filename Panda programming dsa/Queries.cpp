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
    static void bottomfinder(Node *&top, Node *&bottom, int receive);
    static void bottomfinder2(Node *&top, Node *&bottom, int receive);
};

void Node::bottomfinder(Node *&top, Node *&bottom, int receive)
{
    Node *new_node = new Node(receive);
    if (top == NULL)
    {
        top = new_node;
        bottom = new_node;
        return;
    }

    new_node->next = top;
    top = new_node;
}

void Node::bottomfinder2(Node *&top, Node *&bottom, int receive)
{
    Node *new_node = new Node(receive);

    if (top == NULL)
    {
        top = new_node;
        bottom = new_node;
        return;
    }

    bottom->next = new_node;
    bottom = new_node;
}

int main()
{
    Node *top = NULL;
    Node *bottom = NULL;

    int mai;
    cin >> mai;

    while (mai--)
    {
        int get1, get;
        cin >> get1 >> get;

        if (get1 == 0)
        {
            Node::bottomfinder(top, bottom, get);
        }
        else
        {
            Node::bottomfinder2(top, bottom, get);
        }

        cout << top->number << " " << bottom->number << endl;
    }
    return 0;
}