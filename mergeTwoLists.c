#include <stdio.h>
#include <stdlib.h>


 struct ListNode {
     int val;
     struct ListNode *next;
 };

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {

    if(l1==NULL&&l2==NULL) return NULL;
    if(l1==NULL) return l2;
    if(l2==NULL) return l1;

    struct ListNode* head,*temp1,*temp2,*temp;
    temp1=l1;
    temp2=l2;
    

    if((temp1->val)<(temp2->val)){
        head=temp1;
        temp1=temp1->next;
    }else{
        head=temp2;
        temp2=temp2->next;
    }

    temp=head;

    while(temp1&&temp2){
        if(temp1->val < temp2->val){
            head->next=temp1;
            temp1=temp1->next;
        }
        else{
        head->next=temp2;
        temp2=temp2->next;
        }
        head=head->next;
    }

    if(temp1==NULL)
    head->next=temp2;
    if(temp2==NULL)
    head->next=temp1;
    return temp;
}