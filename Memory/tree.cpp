#include<iostream>
using namespace std;
class node{
    public:
    int data ;
    node* left ;
    node* right;
    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
        }
        };
        void preOrder(node* root){
            if(root==NULL)
            return;
            cout<<root->data<<" ";
            preOrder(root->left);
            preOrder(root->right);
            }

            void inOrder(node*root){
                if(root==NULL)
                return;
                inOrder(root->left);
                cout<<root->data<<" ";
                inOrder(root->right);
                }


                 void postOrder(node*root){
                if(root==NULL)
                return;
                postOrder(root->left);
                postOrder(root->right);
                 cout<<root->data<<" ";
                }
                

        
        int main(){
            node* root = new node(1);
          root  -> left = new node(2);
          root -> right= new node(3);

          root -> left-> left= new node(4);
          root -> left-> right= new node(5);
          root -> right-> left= new node(6);
          preOrder(root);
          cout<<endl;

          inOrder(root);
          cout<<endl;
          
          postOrder(root);




        }