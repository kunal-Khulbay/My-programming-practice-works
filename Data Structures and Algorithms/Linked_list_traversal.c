/*Author:Alok Khulbay
Date:-17/08/2020
Purpose:-To self learn.
*/
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int Data;
    struct Node *next;
};
void Linked_List_Traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element:%d\n", ptr->Data);
        ptr = ptr->next;
    }
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    //Allocate Memory for nodes in the Linked List in a Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    head->Data = 7;
    head->next = second;
    second->Data = 11;
    second->next = third;
    third->Data = 41;
    third->next = fourth;
    fourth->Data = 66;
    fourth->next = NULL;
    Linked_List_Traversal(head);
    return 0;
}