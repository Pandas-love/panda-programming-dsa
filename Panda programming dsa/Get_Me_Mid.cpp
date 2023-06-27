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
   static void bottomfinder(Node *&top,Node *&bottom,int receive);
};

void Node::bottomfinder(Node *&top, Node *&bottom, int receive)
{
    Node *new_node = new Node(receive);

    if (top == NULL)
    {
        top = new_node;
        bottom = new_node;
    }

    bottom->next = new_node;
    bottom = new_node;
}

int main()
{
    Node *top = NULL;
    Node *bottom = NULL;

    int mai = 0;

    while (1)
    {
        int value;
        cin >> value;

        if (value == -1)
        {
            break;
        }
        else
        {
            Node::bottomfinder(top, bottom, value);
            mai++;
        }
    }

    int middle1, middle2;

    if (mai == 1)
    {
        middle1 = top->number;
    }
    else
    {
        for (Node *i = top; i->next != NULL; i = i->next)
        {
            for (Node *j = i->next; j != NULL; j = j->next)
            {
                if (i->number > j->number)
                {
                    swap(i->number, j->number);
                }
            }
        }

        Node *tmp = top;

        if (mai % 2 != 0)
        {
            for (int i = 1; i <= mai; i++)
            {
                if (i == (mai / 2) + 1)
                {
                    middle1 = tmp->number;
                }
                tmp = tmp->next;
            }
        }
        else
        {
            for (int i = 1; i <= mai; i++)
            {
                if (i == mai / 2)
                {
                    middle1 = tmp->number;
                    middle2 = tmp->next->number;
                }
                tmp = tmp->next;
            }
        }
    }
    if (mai % 2 != 0)
    {
        cout << middle1;
    }
    else
    {
        cout << middle2 << " " << middle1;
    }
    return 0;
}