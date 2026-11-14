#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    // Creating nodes
    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));

    // Assigning data
    head->data = 10;
    second->data = 20;
    third->data = 30;

    // Connecting nodes
    head->next = second;
    second->next = third;
    third->next = NULL;

    // Displaying linked list
    struct Node *temp = head;

    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL");

    // Freeing allocated memory
    free(head);
    free(second);
    free(third);

    return 0;
}