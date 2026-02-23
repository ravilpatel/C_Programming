/*
    Singly Linked List in C
*/
#include<stdio.h>
#include<stdlib.h>
// LINKED LIST
/*
    - insert_at_begining
    - inset_at_end
    - insert_at_n
    - print_data
    - count_elements
    - dlt_at_begining
    - dlt_at_end
    - dlt_at_n
    - dlt_entire_ll
*/

// Structure node for linked List
struct node {
    int data;
    struct node* link;
};

void insert_at_begining(struct node **head, int data);
void insert_at_end(struct node* head, int data);
void print(struct node* head); //Prints entire LL
void count_elements(struct node* head);
void insert_at_n(struct node* head, int position, int data);
void dlt_at_begining(struct node **head);
void dlt_at_end(struct node *head);
void dlt_at_n(struct node **head, int n);
void dlt_entire_ll(struct node **head);

int main(void)
{
    struct node *head = NULL;
    insert_at_begining(&head, 96);
    insert_at_begining(&head, 94);
    insert_at_begining(&head, 92);
    insert_at_end(head, 97);
    insert_at_n(head, 2, 93);
    insert_at_begining(&head, 73);
    insert_at_begining(&head, 72);
    insert_at_end(head, 98);
    print(head);
    count_elements(head);
    printf("\n\n");
    dlt_at_begining(&head);
    dlt_at_end(head);
    print(head);
    count_elements(head);
    dlt_at_n(&head, 6);
    printf("\n\n");
    print(head);
    count_elements(head);
    dlt_entire_ll(&head);
    print(head);
    count_elements(head);
    
return 0;
}


//Function Declarations

void insert_at_begining(struct node **head, int data)
{
    struct node *ptr = malloc(sizeof(struct node));
    ptr ->data = data;
    ptr -> link = *head;
    *head = ptr;
}

void insert_at_end(struct node* head, int data)
{
    struct node *ptr = malloc(sizeof(struct node));
    ptr -> data = data;
    ptr -> link = NULL;

    struct node *temp = head;
    while(temp->link != NULL)
    {
        temp = temp -> link;
    }
    temp->link = ptr;
}

void insert_at_n(struct node* head, int position, int data)
{
    struct node* ptr = head;
    struct node* temp = malloc(sizeof(struct node));
    for(int n = 1; n<(position-1); n++)
    {
        ptr = ptr->link;
    }

    temp -> data = data;
    temp -> link = ptr -> link;
    ptr -> link = temp;
}

void dlt_at_begining(struct node **head)
{
    if (*head == NULL)
        printf("List is already empty.");
    else {
        struct node *temp = *head;
        *head = (*head) -> link;
        free(temp);
        temp = NULL;
    }
}
void dlt_at_end(struct node *head)
{
    struct node* temp = head;
    while(temp->link->link != NULL)
    {
        temp = temp->link;
    }
    free(temp->link);
    temp -> link = NULL;
}

void dlt_at_n(struct node **head, int n)
{
    if(n==1)
        dlt_at_begining(head);
    else{
        struct node* temp = *head;
        for(int i = 1; i<n-1; i++)
        {
            temp = temp->link;
        }
        struct node* temp2 = temp->link;
        temp->link = temp->link->link;
        free(temp2);
    }
}

void dlt_entire_ll(struct node **head)
{
    struct node *ptr, *temp;
    ptr = *head;
    while(ptr != NULL)
    {
        temp = ptr;
        ptr = ptr ->link;
        free(temp);
        temp = NULL;
    }
    free(ptr);
    *head=NULL;
}


void print(struct node* head)
{
    struct node *ptr = head;
    while(ptr != NULL)
    {
        printf("%d ", ptr -> data);
        ptr = ptr->link;
    }
}

void count_elements(struct node* head)
{
    struct node* ptr = head;
    int count = 0;
    while(ptr!=NULL)
    {
        ptr = ptr -> link;
        count++;
    }
    printf("\nTotal number of elements in linked list = %d", count);
}
