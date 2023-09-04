#ifndef MAIN_H
#define MAIN_H
#define MAX_SIZE 50 //SIZE OF THE STACK

typedef struct Stack
{                       // data
	int data[MAX_SIZE];
	int indx;                   
} Stack;

// prototypes
void initializeStack(Stack *s);
int push(Stack *s, int value);
int pop(Stack *s);
int isEmpty(Stack *s);

#endif