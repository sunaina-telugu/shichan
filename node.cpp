#include <stdio.h>
#include <stdlib.h>

int push(int);
//int pop();
//int peek();
//int clear();
int display();
struct node
{
	int data;
	struct node *next
};
struct node *top=NULL;
int main() {
	int ch, val;
	while(1){
		printf("\nMenu");
		printf("\n---------------------");
		printf("\n1.push\n2.pop\n3.peek\n4.display\n5.clear\n6.exit");
		printf("\nEnter your choice: ");
		scanf("%d, &ch");
		switch(ch){
			case 1:
				printf("Enter the value to be insert: ");
				scanf("%d", &val);
				push(val);
				break;
//			case 2:
//				pop();
//				break;
//			case 3:
//				peek();
//				break;
			case 4:
				display();
				break;
//			case 5:
//				clear();
//				break;
			case 6:
				exit(0);
				break;
			default:
				printf("Enter the valid option");	
		}
	}
}
int push(int val)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	(*newnode).data=val;
	if(top==NULL)
	(*newnode).next=NULL;
	else
	(*newnode).next=top;
	top=newnode;
};

int display()
{
	struct node *ptr=top;
	if (top==NULL)
	printf("\n the stack is empty");
	else
	{
	
	while(ptr!=NULL)
	{
		printf("\n%d",ptr->data);
		ptr=ptr->next;
		
	}
}
return 0;
}
void pop()
{
	if(top== NULL)
	    printf("\nStack is Empty")
}
int peek()
{ if(top=NULL)
  printf("\n The Stack is empty");
}
