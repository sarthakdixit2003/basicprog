#include <stdio.h>
#include <stdlib.h>
struct polyNode
{
    int coeff;
    int power;
    struct polyNode *next;
};
struct polyNode* getnode()
{
    struct polyNode *p;
    p=(struct polyNode*)malloc(sizeof(struct polyNode));
    return p;
}
void insend(struct polyNode** START, int x, int y)
{
    struct polyNode *p, *q;
    q=getnode();
    q->power=x;
    q->coeff=y;
    q->next=NULL;

    p=*START;
    if(p==NULL)
    {
        *START=q;
    }
    else
    {
        while(p->next!=NULL)
        p=p->next;
        p->next=q;
    }
}
void mergeNodes(struct polyNode *head)
{
    struct polyNode *ptr1, *ptr2, *dup;
    ptr1 = head;
    while(ptr1 != NULL && ptr1->next != NULL)
    {
        ptr2 = ptr1;
        while(ptr2->next != NULL)
        {
            if(ptr1->power == ptr2->next->coeff)
            {
                ptr1->coeff = ptr1->coeff + ptr2->next->coeff;
                dup = ptr2->next;
                ptr2->next = ptr2->next->next;

                free(dup);
            }
            else
                ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
}

//Display Linked List
void show(struct polyNode *node)
{
    while(node!=NULL)
    {
        printf("%dx^%d", node->coeff, node->power);
        node = node->next;
        if(node->coeff >= 0)
        {
            if(node->next != NULL)
                printf("+");
        }
        node = node->next;
    }
}
struct polyNode* multiply(struct polyNode* poly1, struct polyNode* poly2)
{
    int coeff, power;
    struct polyNode *poly3 = NULL, *ptr1, *ptr2;
    ptr1 = poly1; 
    ptr2 = poly2;
    while(ptr1 != NULL)
    {
        while(ptr2 != NULL)
        {
            coeff = ptr1->coeff * ptr2->coeff;
            power = ptr1->power + ptr2->power;
            insend(&poly3, power, coeff);
            ptr2 = poly2;
            ptr2 = ptr2->next;
        }
        ptr1 = poly1;
        ptr1 = ptr1->next;
    }
    mergeNodes(poly3);
    return poly3;
}

//Driver code
int main()
{
    struct polyNode *poly1=NULL, *poly2 = NULL, *poly = NULL;

    //Create first list of 5x^2 + 4x^1 + 2x^0
    insend(&poly1, 2 , 5);
    insend(&poly1, 1 , 4);
    insend(&poly1, 0 , 2);
    //Create second list of -5x^1 - 5x^0
    insend(&poly2, 1 , -5);
    insend(&poly2, 0 , -5);

    printf("1st Number: ");
    show(poly1);
    printf("\n2nd Number: ");
    show(poly2);
    printf("\n---------------------------------------------------------------------\n");

    //Function add two polynomial numbers
    poly=multiply(poly1, poly2);

    //Display resultant List
    printf("Multiplied polynomial: ");
    show(poly);

    return 0;
}
