#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};
void printMiddle(struct node *head)
{
    struct node *slow_ptr = head;
    struct node *fast_ptr = head;

    if (head == NULL)
        return;

    while (fast_ptr != NULL && fast_ptr->next != NULL)
        {
            fast_ptr = fast_ptr->next->next;
            slow_ptr = slow_ptr->next;
        }
        printf("The middle element is [%d]\n\n", slow_ptr->data);
}
void reverse(struct node *head){
    node *prev = NULL;
    node *current = head;
    node *next;

    while(current!=NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}
void push(struct node** head_ref, int new_data)
{
    /* allocate node */
    struct node* new_node = (struct node*) malloc(sizeof(struct node));

    /* put in the data  */
    new_node->data  = new_data;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref)    = new_node;
}
 void printList(struct node *ptr)
{
    printf("\nThe List is\n");
    while (ptr != NULL)
    {
        printf("%d", ptr->data);
        ptr = ptr->next;
    }
    //printf("NULL\n");
}
int main()
{
    struct node* head = NULL;
    int i; int lsize;
    printf("Enter the number of elements");
    scanf ("%d", &lsize);

    for (int x =0; x<lsize; x++)
    {
        scanf("%d", &i);
        push(&head, i);

    }
    printList(head);
    reverse(head);
    //printMiddle(head);
    //reversefrommiddle(head);
    printList(head);

    return 0;
}
