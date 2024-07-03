// circular linked list - last node point toward the head of the 1st node
#include <iostream>
using namespace std;

// Node class to represent an element in the circular linked list
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

// Function to insert a node at the head of the circular linked list
void insertAtHead(Node *&head, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        n->next = n; // Point to itself if it's the only node
        head = n;    // Head points to the new node
        return;
    }
    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n; // Last node points to the new node
    n->next = head; // New node points to the old head
    head = n;       // Head is updated to the new node
}

// Function to insert a node at the tail of the circular linked list
void insertAtTail(Node *&head, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        insertAtHead(head, val); // If list is empty, insert at head
        return;
    }
    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n; // Last node points to the new node
    n->next = head; // New node points to the head
}

// Function to delete the head node of the circular linked list
void deleteAtHead(Node *&head)
{
    if (head == NULL)
        return; // If list is empty, do nothing
    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    Node *todelete = head;
    temp->next = head->next; // Last node points to the new head
    head = head->next;       // Update head to the next node
    delete todelete;         // Delete the old head
}

// Function to delete a node at a specific position in the circular linked list
void deletion(Node *&head, int pos)
{
    if (head == NULL)
        return; // If list is empty, do nothing
    if (pos == 1)
    {
        deleteAtHead(head); // If position is 1, delete the head
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count != pos - 1)
    {
        temp = temp->next;
        count++;
    }
    Node *todelete = temp->next;
    temp->next = temp->next->next; // Skip the node to be deleted
    delete todelete;               // Delete the node
}

// Function to display the circular linked list
void display(Node *head)
{
    if (head == NULL)
        return; // If list is empty, do nothing
    Node *temp = head;
    do
    {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != head);
    cout << "HEAD" << endl; // Indicate the circular nature
}

int main()
{
    Node *head = NULL;
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    display(head); // Display list: 3->2->1->HEAD
    deletion(head, 1);
    display(head); // Display list: 2->1->HEAD
    insertAtTail(head, 4);
    display(head); // Display list: 2->1->4->HEAD
    return 0;
}
