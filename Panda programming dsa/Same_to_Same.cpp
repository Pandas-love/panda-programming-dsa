#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int num;
    Node *next;

    Node(int constent)
    {
        this->num = constent;
        this->next = NULL;
    }
};

void insert_in_tail(Node *&top, Node *&bottom, int receive)
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

    Node *topper = NULL;
    Node *bottomest = NULL;

    int mai = 0;
    int mai1 = 0;

    while (1)
    {
        int taka;
        cin >> taka;
        if (taka == -1)
        {
            break;
        }
        else
        {
            insert_in_tail(top, bottom, taka);
            mai++;
        }
    }

    while (1)
    {
        int taka;
        cin >> taka;
        if (taka == -1)
        {
            break;
        }
        else
        {
            insert_in_tail(topper, bottomest, taka);
            mai1++;
        }
    }
    bool check = true;

    if (mai != mai1)
    {
        check = false;
    }
    else
    {
        Node *t = top;
        Node *t1 = topper;

        while (t != NULL)
        {
            if (t->num != t1->num)
            {
                check = false;
            }
            t = t->next;
            t1 = t1->next;
        }
    }

    if (check)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}