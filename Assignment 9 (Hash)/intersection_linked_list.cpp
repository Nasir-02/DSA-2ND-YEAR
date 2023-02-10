
class Solution {
public:
bool isnodepresent(ListNode*head,ListNode*target){
    while(head!=NULL){
  if(head==target){
 return true;
   }
  head=head->next;
    }
    return false;
}
ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
    while (head2!=NULL){
     if(isnodepresent(head1,head2)){
    return head2;
        }
    head2=head2->next;
    }
return NULL;
}
};
