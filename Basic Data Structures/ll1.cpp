/*Problem Name - Linked List 1  , Problem Code - LL1 , Platform - Codechef
                              Solution By : Raman Mehta
     */
struct Node {
	int data;
	struct Node* next;
	Node(int x){
		data = x;
		next = NULL;
	}
};
int getNthNodeFromEnd(struct Node* head, int n){
    struct Node *temp1 =head;
    struct Node *temp2=head;
    int i=0;
    while(i<n){
        temp1=temp1->next;
        i++;
    }
    while(temp1){
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return temp2->data;
}
