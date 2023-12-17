#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;

};

void plink(struct node* head){
    struct node* p=head;
    while(p!=NULL){
        printf("%d\n",p->data);
        p=p->next;
    }
}
void main()
{
    struct node* head;
    struct node*one=NULL;
    struct node*two=NULL;
    struct node*three=NULL;

    one=(struct node*)malloc(sizeof(struct node));
    two=(struct node*)malloc(sizeof(struct node));
    three=(struct node*)malloc(sizeof(struct node));

    one->data=2;
    two->data=10;
    three->data=20;
    one->next=two;
    two->next=three;
    three->next=NULL;

    head=one;
    plink(head);
}