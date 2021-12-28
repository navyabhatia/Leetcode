class Solution {
public:
    
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        temp=head;
        if(cnt%2==0){
            int p=(cnt/2)+1;
         while(p!=1&&temp!=NULL ){
                temp=temp->next;
             p--;
            }
        head=temp;    
        }
        else{
            int p=(cnt+1)/2;
            while(p!=1&& temp!=NULL ){
                temp=temp->next;
                p--;
            }
            head=temp;
            
        }
        return head;
    }
};