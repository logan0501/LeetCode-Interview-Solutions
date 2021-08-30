//remove nth node from the end
// ListNode* removeNthFromEnd(ListNode* head, int n) {
//         ListNode* fastp=head;
//         ListNode* slowp=head;

//         while(n--)
//             fastp=fastp->next;
//         if(!fastp)return head->next;      
//         while(fastp->next){
//               fastp=fastp->next;
//             slowp=slowp->next;
//         }
          
//         slowp->next=slowp->next->next;
//         return head;
        
//     }