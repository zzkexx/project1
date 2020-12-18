#include <iostream>
#include <cstdlib>
using namespace std;
typedef struct LNode{
    int data;
    struct LNode *next;
}LNode, *LinkList;

void CreateList(LinkList &L, int n){
    int i;
    LinkList p = NULL, q;
    L = (LinkList)malloc(sizeof(LNode));//head
    L -> next = NULL;
    q = L;
    cout<< "please enter " << n << " numbers";
    for( i = 0; i < n; i++){
        p = (LinkList)malloc(sizeof(LNode));
        cin >> p -> data;
        q -> next = p;
        q = q -> next;
    }
}
void DeleteList(LinkList L, int i){
    //delete i th element
    int j = 0;
    LinkList p = L, q;
    while(p->next && j < i-1){
        //find i node
        p = p -> next;
        j++;
    }
    if(!p -> next || j > i-1){//poision can't be deleted
        cout<< "please change i "<< endl;
    }
    else{
        q = p -> next;//delete and free node
        p -> next = q -> next;
        free(q);
        cout << "Deleted "<< endl;
    }
}

void Print(LinkList L){
    LNode *p;
    p = L->next;
    cout<< endl << "L";
    while(p){
        cout << "->" <<p->data;
        p = p->next;
    }
    cout<< endl;
}

int main(){
    LinkList L;
    CreateList(L,5);
    DeleteList(L,3);
    Print(L);
    
}