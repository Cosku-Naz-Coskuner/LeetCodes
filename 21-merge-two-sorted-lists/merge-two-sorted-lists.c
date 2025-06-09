/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* current=list1;
    int i=0,j=0;
    int temp,size=0;

    while(current!=NULL){
         size++;
        current=current->next;
    }
    current=list2;
    while(current!=NULL){
         size++;
        current=current->next;
    }
    
     if (size == 0) return NULL;
     
    int* sorted = malloc(size * sizeof(int));
    if (sorted == NULL) return NULL;

    current=list1;
    while(current!=NULL){
       sorted[i]=current->val;
       current=current->next;
       i++;
    }
    current=list2;
    while(current!=NULL){
       sorted[i]=current->val;
       current=current->next;
       i++;
    }

    for(i=0;i<size-1;i++){
        for(j=0;j<size-i-1;j++){
            if(sorted[j+1]<sorted[j]){
                temp=sorted[j];
                sorted[j]=sorted[j+1];
                sorted[j+1]=temp;
            }
        }
    }

   struct ListNode* result=malloc(sizeof(struct ListNode));
    if (result == NULL) {
        free(sorted);
        return NULL;
    }
   result->val=sorted[0];
   result->next=NULL;

   current=result;

   for(i=1;i<size;i++){
    struct ListNode* newnode=malloc(sizeof(struct ListNode));
    if (newnode == NULL) {
            // Hata durumunda ayrılan belleği temizlemek gerekiyor ama burada basitçe NULL dönelim.
            free(sorted);
            return NULL;
        }
        newnode->val = sorted[i];
        newnode->next = NULL;

        current->next = newnode;
        current = newnode;

   } 

   return result;
}