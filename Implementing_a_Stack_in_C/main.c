#include <stdio.h>
#include "header.h"

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
