/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };


*/
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *temp;
        temp=head;
        int cnt=0;
        while(temp!=NULL){
            temp=temp->next;cnt++;
        }//cout<<cnt<<"\n";
        if(cnt==1)return true;
        if(cnt&1){cnt=cnt/2;cnt+=1;}
        else cnt/=2;
        temp=head;
     for(int i=0;i<cnt;i++){
         head=head->next;
     }
        //reverse head 
        ListNode *prev;prev=NULL;
         ListNode *curr;curr=head;
         ListNode *nxt;nxt=curr->next;
        while(curr!=NULL){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        
        
        while(prev!=NULL){
         // cout<<prev->val<<"\n";
            if(prev->val!=temp->val)return false;
            prev=prev->next;temp=temp->next;
        }
        return true;
    }
};