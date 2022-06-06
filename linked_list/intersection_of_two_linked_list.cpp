/*---------------------------codestudio--------------------------------------------*/
int findIntersection(Node *firstHead, Node *secondHead)
{
Node *a=firstHead;
Node *b=secondHead;
    if(a==NULL || b==NULL) return NULL;
    while(a!=b){
        a=(a!=NULL)?a->next:secondHead;
        b=(b!=NULL)?b->next:firstHead;
    }
    if(a==NULL)
        return -1;
    else
    return a->data;
}

/*--------------------Leetcode---------------------------------*/

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
         ListNode *a=headA;
         ListNode *b=headB;
        while(a!=b){
            
            a=(a!=NULL)?a->next:headB;
            b=(b!=NULL)?b->next;:headA;
            
        }
        return b;
    }
};
