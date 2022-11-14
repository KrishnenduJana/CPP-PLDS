#include <iostream>

using namespace std;

class Node {
public:
    Node* lchild;
    int data;
    Node* rchild;
    int height;
};

class AVL{
public:
    Node* root=NULL;

    int NodeHeight(Node* p);
    int balancefactor(Node* p);
    Node* LLRotation(Node* p);
    Node* RRRotation(Node* p);
    Node* LRRotation(Node* p);
    Node* RLRotation(Node* p);
    Node* InPre(Node* p);
    Node* InSucc(Node* p);
    void Find(Node*p,int key);
    Node* rInsert(Node* p, int key);
    void Sortarray(Node*p,int A[]);
    void postorder(Node* p);
    Node* getRoot(){
      return root;
  }

    Node* Delete(Node* p, int key);
};

int AVL::NodeHeight(Node *p) {
    int height_left;
    int height_right;
    if(p&&p->lchild)
    {
     height_left=p->lchild->height;

    }
    else
    {
      height_left=0;
    }
     if(p&&p->rchild)
    {
     height_right=p->rchild->height;

    }
    else
    {
      height_right=0;
    }


    if(height_left>height_right)
    return height_left+1;
    else
    return height_right+1;
}

int AVL::balancefactor(Node *p) {
    int height_left;
    int height_right;
    if(p&&p->lchild)
    {
     height_left=p->lchild->height;

    }
    else
    {
      height_left=0;
    }
     if(p&&p->rchild)
    {
     height_right=p->rchild->height;

    }
    else
    {
      height_right=0;
    }


    return height_left - height_right;
}

Node* AVL::LLRotation(Node *p) {
    Node* pl = p->lchild;
    Node* plr = pl->rchild;

    pl->rchild = p;
    p->lchild = plr;
    p->height = NodeHeight(p);
    pl->height = NodeHeight(pl);
    if (root == p){
        root = pl;
    }
    return pl;
}

Node* AVL::RRRotation(Node *p) {
    Node* pr = p->rchild;
    Node* prl = pr->lchild;

    pr->lchild = p;
    p->rchild = prl;
    p->height = NodeHeight(p);
    pr->height = NodeHeight(pr);
    if (root == p){
        root = pr;
    }
    return pr;
}

Node* AVL::LRRotation(Node *p) {
    Node* pl = p->lchild;
    Node* plr = pl->rchild;

    pl->rchild = plr->lchild;
    p->lchild = plr->rchild;

    plr->lchild = pl;
    plr->rchild = p;
    pl->height = NodeHeight(pl);
    p->height = NodeHeight(p);
    plr->height = NodeHeight(plr);
    if (p == root){
        root = plr;
    }
    return plr;
}

Node* AVL::RLRotation(Node *p) {
    Node* pr = p->rchild;
    Node* prl = pr->lchild;

    pr->lchild = prl->rchild;
    p->rchild = prl->lchild;

    prl->rchild = pr;
    prl->lchild = p;
    pr->height = NodeHeight(pr);
    p->height = NodeHeight(p);
    prl->height = NodeHeight(prl);
    if (root == p){
        root = prl;
    }
    return prl;
}

Node* AVL::InPre(Node *p) {
    while (p && p->rchild != NULL){
        p = p->rchild;
    }
    return p;
}

Node* AVL::InSucc(Node *p) {
    while (p && p->lchild != NULL){
        p = p->lchild;
    }
    return p;
}

Node* AVL::rInsert(Node *p, int key) {
    Node* t;
    if (p == NULL){
        t = new Node;
        t->data = key;
        t->lchild = NULL;
        t->rchild = NULL;
        t->height = 1;
        return t;
    }

    if (key < p->data){
        p->lchild = rInsert(p->lchild, key);
    } else if (key > p->data){
        p->rchild = rInsert(p->rchild, key);
    }

    p->height = NodeHeight(p);

    if (balancefactor(p) == 2 && balancefactor(p->lchild) == 1) {
        return LLRotation(p);
    } else if (balancefactor(p) == 2 && balancefactor(p->lchild) == -1){
        return LRRotation(p);
    } else if (balancefactor(p) == -2 && balancefactor(p->rchild) == -1){
        return RRRotation(p);
    } else if (balancefactor(p) == -2 && balancefactor(p->rchild) == 1){
        return RLRotation(p);
    }

    return p;
}

void AVL:: postorder(Node*p)
{
   if(p){
   postorder(p->lchild);
   postorder(p->rchild);
   cout<<p->data<<" ";
   }


}

Node* AVL::Delete(Node *p, int key) {
    if (p == NULL){
        return NULL;
    }

    if (p->lchild == NULL && p->rchild == NULL){
        if (p == root){
            root = NULL;
        }
        delete p;
        return NULL;
    }

    if (key < p->data){
        p->lchild = Delete(p->lchild, key);
    } else if (key > p->data){
        p->rchild = Delete(p->rchild, key);
    } else {
        Node* q;
        if (NodeHeight(p->lchild) > NodeHeight(p->rchild)){
            q = InPre(p->lchild);
            p->data = q->data;
            p->lchild = Delete(p->lchild, q->data);
        } else {
            q = InSucc(p->rchild);
            p->data = q->data;
            p->rchild = Delete(p->rchild, q->data);
        }
    }

    p->height = NodeHeight(p);

    if (balancefactor(p)== 2 && balancefactor(p->lchild)== 1) {
        return LLRotation(p);
    } else if (balancefactor(p)== 2 && balancefactor(p->lchild)== -1){
        return LRRotation(p);
    } else if (balancefactor(p)== -2 && balancefactor(p->rchild)== -1){
        return RRRotation(p);
    } else if (balancefactor(p)== -2 && balancefactor(p->rchild)== 1){
        return RLRotation(p);
    } else if (balancefactor(p)== 2 && balancefactor(p->lchild)== 0){
        return LLRotation(p);
    } else if (balancefactor(p)== -2 && balancefactor(p->rchild)== 0){
        return RRRotation(p);
    }

    return p;
}
void AVL::Sortarray(Node*p,int A[])
{
    int i=0;
    while(p!=NULL)
    {
        Node*t=p;
        Node*r;
        while(t!=NULL)
        {
            r=t;

            t=t->rchild;

        }
        A[i]=r->data;
        i++;
        p=Delete(p,r->data);
    }
}

int main() {

    AVL tree;
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
     int A[n];
     
     cout<<"Enter the number of elements: "<<endl;
    for (int i=0; i<n; i++){

       cin>>A[i];
        tree.root = tree.rInsert(tree.root, A[i]);
    }
    cout<<"postorder traversel of the binary search tree is: "<<endl;
    tree.postorder(tree.getRoot());

    cout << endl;
    cout<<"Enter element for deleteion"<<endl;
    int y;
    cin>>y;
    int f=0;
    for(int i=0;i<n;i++)
    {
     if(A[i]==y)
     f=1;


    }
    if(f==1){
    tree.Delete(tree.root, y);
     tree.postorder(tree.getRoot());
    cout << endl;

     }
     else
     cout<<"Node Not exist"<<endl;
     tree.Sortarray(tree.getRoot(), A);
    for(int i=0;i<n-1;i++)
    {

      cout<<A[i]<<" ";
    }
    return 0;
}