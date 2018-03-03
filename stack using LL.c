#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* top = NULL;

void Push(int x)
{
    struct Node* NewNode = (struct Node*) malloc(sizeof(struct Node));
    NewNode->data = x;
    NewNode->next = top;
    top=NewNode;
}

void Pop()
{
    if (top == NULL)
        return;

    struct Node* deletenode = top;
    top=top->next;
    free(deletenode);
}
void Print()
{
    // We start printing from top
    struct Node* printnode = top;
    while(printnode!=NULL)
    {
        printf("%d",printnode->data);
        printnode=printnode->next;
    }
    printf(" \n");

}
int IsEmpty()
{
    if(top==NULL)
        return 1;
    else
        return 0;
}

int Top()
{
    return (top->data);

}
int main()
{
    Push(5); Print();
    Push(6); Print();
    Push(7); Print();
    Push(8); Print();
    Pop(); Print();
    Pop(); Print();
    Pop(); Print();
    printf("%d",Top());
    if(IsEmpty())
        printf("Empty!!");
    else
    printf("\nNope");
    Pop(); Print();
    if(IsEmpty())
        printf("Empty!!");
    else
    printf("\nNope");

    return 0;
}

