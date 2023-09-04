#include "header.h"
#include "stdio.h"
void initializeStack(Stack *s){    //initialize an empty stack 

	s->indx = -1;
}  
 //add element to the top of stack  
int push(Stack *s, int value)      
{
	if(s->indx >= MAX_SIZE -1){
		return 0;
	}
	s->data[++(s->indx)] = value;
	return 1;
}

int pop (Stack *s) {               //remove and return the top element of stuck
	if (isEmpty(s))
	{
	return -1; 
	}
	return s->data[(s->indx)--];

}
int isEmpty(Stack *s){            //check if the stack is empty
	return (s->indx == -1);
}
