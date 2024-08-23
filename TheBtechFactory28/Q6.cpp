#include <iostream>
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
node *FindMiddle(node *head)
{
    if (head == NULL)
        return NULL;
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

void printList(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    if (n <= 0)
        return 0;

    node *head = NULL;
    node *tail = NULL;

    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;

        node *newNode = new node(value);
        if (head == NULL)
        {
            head = newNode;
            tail = head;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    printList(head);
    node *middle = FindMiddle(head);
    if (middle != NULL)
    {
        cout << middle->data << endl;
    }

    return 0;
}