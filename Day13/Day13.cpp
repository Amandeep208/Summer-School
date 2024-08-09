#include<iostream>
using namespace std;
class Node{
    public:
        Node *left;
        int data;
        Node *right;
        Node(){
            data=0;
            left=right=NULL;
        }
        Node(int data){
            this->data = data;
            this->left = this->right = NULL;
        }
};
class BinarySearchTree{
    Node* insertNode(Node *root,int data){
        if (root==NULL){
            return new Node(data);
        }else if(data<root->data){
            root->left = insertNode(root->left,data);
        }else if(data>root->data){
            root->right = insertNode(root->right,data);
        }

    }

};
int postorder(){

}
int preorder(){

}
int inorder(){

}
int main(){
    Node *root = NULL;    
    while(1){
        system("cls");
        int choice,val;
        cout<<"1. Insert Values"<<endl;
        cout<<"2. PostOrder Traversal"<<endl;
        cout<<"3. PreOrder Traversal"<<endl;
        cout<<"4. Inorder Traversal"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter the Function Number: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter Value: ";
                cin>>val;
                root = insertNode(Node *root,int val);
                // insertNode();
                break;
            case 2:
                postorder();
                break;
            case 3:
                preorder();
                break;
            case 4:
                inorder();
                break;
            case 5:
                exit(0);
            default:
                cout<<"Invalid Input"<<endl;
        }
    }
    return 0;
}