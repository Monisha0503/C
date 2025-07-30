#include <stdio.h>

int stack[100];
int top = 0;

// Push function
void push(int a) {
    if (top >= 100) {
        printf("Stack is full\n");
        return;
    }
    stack[top] = a;
    top++;
    printf("%d pushed to stack\n", a);
}

// Pop function
void pop() {
    if (top == 0) {
        printf("Stack is empty\n");
        return;
    }
    top--;
    printf("Popped element: %d\n", stack[top]);
}

// Display function (Reverse: Top to Bottom)
void display() {
    if (top == 0) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements (top to bottom): ");
    for (int i = top - 1; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

// Main function
int main() {
    int choice = 0, value;

    while (choice != 4) {
        printf("\nEnter 1 to Push\nEnter 2 to Pop\nEnter 3 to Display\nEnter 4 to Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }

    return 0;
}