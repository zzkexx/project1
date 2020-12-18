#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
typedef struct ListNode{
    int val;
     struct ListNode *next;
    ListNode(int x) : val(x), next(NULL){}
   
};

ListNode* SumT(ListNode* l1, ListNode* l2){
    int len1 = 1;
    int len2 = 1;
    ListNode* p = l1;
    ListNode* q = l2;
    while(p->next != NULL){
        len1++;
        p=p->next;
    }
    while(q->next != NULL){
        len2++;
        q = q->next;
    }
    if(len1 < len2){
        for(int i = 0; i < len2 - len1;i++){
            p -> next = new ListNode(0);
            p = p -> next;
        }
    }else{
        for(int i = 0; i < len1 - len2; i++){
            q -> next = new ListNode(0);
            q = q -> next;
        }
    }
    p = l1;
    q = l2;
    bool count = false;
    ListNode* l3 = new ListNode(-1);
    ListNode* w = l3;
    int i =0 ;
    while(p!=NULL && q!=NULL){
        i = count +p->val+q->val;
        w->next = new ListNode(i%10);
        count = i >= 10 ? true:false;
        w=w->next;
        p=p->next;
        q=q->next;
    }
    if(count){
        w->next= new ListNode(1);
        w=w->next;
    }
    return l3->next;

}
typedef struct LNode{
    int data;
    struct LNode *next;
}LNode, *LinkList;

void CreateList(LinkList &L, int n){
    int i;
    LinkList p = NULL, q;
    L = (LinkList)malloc(sizeof(LNode));
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
void Print(LinkList L){
    LNode *p;
    p = L->next;
    while(p){
        cout << "->" <<p->data;
        p = p->next;
    }
    cout<< endl;
}


int main(){
    LinkList L1;
    LinkList L2;
    CreateList(L1,3);
    CreateList(L2,3);

}
