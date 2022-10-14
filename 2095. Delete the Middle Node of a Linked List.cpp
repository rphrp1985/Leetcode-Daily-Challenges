class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        
        int n =0;
        ListNode *x= head;
        while(x!=nullptr){
            n++;
            x=x->next;
            
        }
        
        n/=2;
        
        if(n==0)
            return nullptr;
        
        // cout<<n<<endl;
        x= head;
        while(x!=nullptr){
            // cout<<
            if(n==1){
                // cout<<x->val<<" l"<<endl;
            x->next= x->next->next;
             break;   
            }
            x=x->next;
            n--;
            
        }
        
        
        return head;
        
        
    }
};
