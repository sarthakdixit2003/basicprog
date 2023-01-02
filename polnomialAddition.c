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
struct polyNode* addpoly(struct polyNode* poly1, struct polyNode* poly2)
{
    struct polyNode* poly=NULL,*p;
    int pow, coef;
    while(poly1!=NULL && poly2!=NULL)
    {
        //if power of 1st polynomial is greater than 2nd,
        //then store 1st as it is and move its pointer
        if(poly1->power > poly2->power){
            pow=poly1->power;
            coef=poly1->coeff;
            poly1 = poly1->next;
            insend(&poly,pow,coef);
        }

        //if power of 2nd polynomial is greater than 1st,
        //then store 2nd as it is and move its pointer
        else if(poly1->power < poly2->power){
            pow=poly2->power;
            coef=poly2->coeff;
            poly2 = poly2->next;
            insend(&poly, pow, coef);
        }

        //if power of both polynomial numbers is same then
        //add their coefficients
        else{
            pow=poly1->power;
            coef = poly1->coeff + poly2->coeff;
            poly1 = poly1->next;
            poly2 = poly2->next;
            insend(&poly, pow, coef);
        }
    }
    while(poly1 || poly2)
    {
        if(poly1){
            pow= poly1->power;
            coef = poly1->coeff;
            poly1 = poly1->next;
            insend(&poly, pow, coef);
        }
        if(poly2){
            pow= poly2->power;
            coef = poly2->coeff;
            poly2 = poly2->next;
            insend(&poly, pow, coef);
        }
    }
    return poly;
}

//Display Linked List
void show(struct polyNode *node)
{
    while(node!=NULL)
    {
        printf("%dx^%d", node->coeff, node->power);
        node = node->next;
        if(node!=NULL){
            if(node->coeff>0)
            printf("+");
        }
    }
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
    poly=addpoly(poly1, poly2);

    //Display resultant List
    printf("Added polynomial: ");
    show(poly);

    return 0;
}
