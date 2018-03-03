#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node* next;
};

// Two glboal variables to store address of front and rear nodes.
struct Node* front = NULL;
struct Node* rear = NULL;

// To Enqueue an integer
// newnode added at rear
// rear is updated
// **** rear should always point to NULL ****

void Enqueue(int x) {
	//Create EndNode
	struct Node* EndNode = (struct Node*)malloc(sizeof(struct Node));

	EndNode->data =x;
	EndNode->next = NULL;

	if(front == NULL && rear == NULL){
		front = rear = EndNode;
		return;
	}
	rear->next = EndNode;
	rear = EndNode;
}
void Dequeue() {

	struct Node* StartNode = front;
	if(front == NULL) {
		printf("Queue is Empty\n");
		return;
	}
	if(front == rear) {
		front = rear = NULL;
	}
	else {
		front = front->next;
	}
	free(StartNode);
}

int Front() {
	if(front == NULL) {
		printf("Queue is empty\n");
		return;
	}
	return front->data;
}

void Print() {
	struct Node* temp = front;
	while(temp != NULL) {
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main(){
	/* Drive code to test the implementation. */
	// Printing elements in Queue after each Enqueue or Dequeue
	Enqueue(2); Print();
	Enqueue(4); Print();
	Enqueue(6); Print();
	Dequeue();  Print();
	Enqueue(8); Print();
	Dequeue();  Print();
}
