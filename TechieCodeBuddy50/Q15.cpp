// Given head, the head of a linked list, determine if the linked list has a cycle in it.
#include <iostream>
#include <vector>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

bool hasCycle(node *head)
{
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return true;
        }
    }

    return false;
}
int main()
{
    int n, cyclePos;
    cin >> n;
    if (n <= 0)
        return 0;

    vector<node *> nodes(n);
    int value;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        nodes[i] = new node(value);
    }

    for (int i = 0; i < n - 1; i++)
    {
        nodes[i]->next = nodes[i + 1];
    }
    cin >> cyclePos;
    if (cyclePos > 0 && cyclePos <= n)
    {
        nodes[n - 1]->next = nodes[cyclePos - 1];
    }

    if (hasCycle(nodes[0]))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}