//find the middle of the linked list if the linked list haas even nodes give the next elemnt of the middle .

#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    { // constructor with no return type
        data = val;
        next = NULL;
    }
};

void insertAtTail(Node *&head, int val)
{ //& is used because we want ot make changes in the real value
    Node *n = new Node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void disp(Node *head)
{ // function to  display
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << endl;
}


Node* findMiddle(Node* head){
    if(head== NULL)return NULL;
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast-> next != NULL)
{
    slow= slow-> next;
    fast = fast -> next ->next;

}return slow;

}
int main()
{
    Node *head = NULL;
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);

  findMiddle(head);
    // cout<<search(head, 2);

   
}
