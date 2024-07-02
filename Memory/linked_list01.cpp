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

void insertAtHead(Node *&head, int val)
{ //& is used because we want ot make changes in the real value
    Node *n = new Node(val);

   n->next = head;
   head=n;

}

void ToDelete(Node* &head, int val ){
    Node* temp=head;
    if(head ==NULL) return ;
    while (temp->next -> data!= val){
        temp=temp->next;
        }
        Node* toDelete = temp->next;
        temp->next = toDelete->next;
        delete toDelete;
        }

// bool search (Node* head , int key ){            
//     //to search in the link list
//     Node* temp = head;
//     while (temp != NULL){
//         if (temp->data == key){
//             return true;
//             }
//             temp = temp->next;
//             }
//             return false;

// }

void disp(Node *head)
{ // function to  display
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);

    insertAtHead(head, 6);

    disp(head);
    // cout<<search(head, 2);

    ToDelete( head , 2  );
    disp(head);  
}