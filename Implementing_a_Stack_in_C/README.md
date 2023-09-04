# Test Question: Implementing a Stack in C

In this problem-solving test, you are tasked with implementing a stack data structure using an array in the C programming language. A stack is a fundamental data structure that follows the Last-In-First-Out (LIFO) principle, where the last element added is the first one to be removed.

Your goal is to create a C program that defines a stack structure and provides essential operations such as pushing elements onto the stack, popping elements from the stack, and checking if the stack is empty.

Requirements:

Define a structure called Stack to represent the stack.
Initialize an array within the structure to store the elements of the stack.
Implement the following functions:
void initializeStack(Stack *s): Initializes an empty stack.
void push(Stack *s, int value): Adds an element to the top of the stack.
int pop(Stack *s): Removes and returns the top element from the stack.
int isEmpty(Stack *s): Checks if the stack is empty. Return 1 if empty, 0 otherwise.
Instructions:

Start by defining the Stack structure containing an array and necessary variables to keep track of the stack size and top index.
Implement the initializeStack function to set initial values for the stack.
Write the push function to add an element to the stack. Ensure you handle the case of a stack overflow.
Implement the pop function to remove and return the top element from the stack. Handle the case of an empty stack.
Create the isEmpty function to determine if the stack is empty based on the size and top index.

```bash
int main() {
    Stack stack;
    initializeStack(&stack);

    printf("Pushing elements onto the stack:\n");
    for (int i = 1; i <= 5; ++i) {
        printf("Pushing %d\n", i);
        push(&stack, i);
    }

    printf("\nPopping elements from the stack:\n");
    while (!isEmpty(&stack)) {
        printf("Popping %d\n", pop(&stack));
    }

    if (isEmpty(&stack)) {
        printf("\nThe stack is now empty.\n");
    } else {
        printf("\nThe stack is not empty.\n");
    }

    return 0;
}
```