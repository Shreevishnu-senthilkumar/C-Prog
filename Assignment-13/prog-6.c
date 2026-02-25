#include <stdio.h>
#include <stdlib.h>

struct student
{
    int id;
    int Maths;
    int Science;
    struct student *next;
};

struct student *top = NULL;

/* ADD at top */
void add()
{
    struct student *newnode;

    newnode = (struct student *)malloc(sizeof(struct student));

    if(newnode == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    printf("Enter ID: ");
    scanf("%d", &newnode->id);

    printf("Enter Maths mark: ");
    scanf("%d", &newnode->Maths);

    printf("Enter Science mark: ");
    scanf("%d", &newnode->Science);

    newnode->next = top;
    top = newnode;

    printf("Added successfully\n");
}

/* REMOVE from bottom */
void remove_node()
{
    struct student *temp, *prev;

    if(top == NULL)
    {
        printf("Queue is empty\n");
        return;
    }

    /* If only one node */
    if(top->next == NULL)
    {
        printf("Removed: ID=%d Maths=%d Science=%d\n",
               top->id, top->Maths, top->Science);

        free(top);
        top = NULL;
        return;
    }

    temp = top;
    prev = NULL;

    while(temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    printf("Removed: ID=%d Maths=%d Science=%d\n",
           temp->id, temp->Maths, temp->Science);

    prev->next = NULL;
    free(temp);
}

/* DISPLAY from top to bottom */
void display()
{
    struct student *temp;

    if(top == NULL)
    {
        printf("Queue is empty\n");
        return;
    }

    temp = top;

    printf("\nQueue (Top to Bottom):\n");

    while(temp != NULL)
    {
        printf("ID=%d Maths=%d Science=%d\n",
               temp->id, temp->Maths, temp->Science);

        temp = temp->next;
    }
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n1. Add\n");
        printf("2. Remove\n");
        printf("3. Display Stack\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: add(); break;
            case 2: remove_node(); break;
            case 3: display(); break;
            case 4: exit(0);
            default: printf("Invalid choice\n");
        }
    }

    return 0;
}