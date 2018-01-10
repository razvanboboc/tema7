#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Node
{
    int info;
    struct Node* next;
};
struct Node *first_l1, *first_l2, *last, *current;
void displayList();
void concatenate(struct Node* a, struct Node* b);
int main()
{
    int nb_elements, i;
    cout<<"Number of elements in the first list: ";
    cin>>nb_elements;
    cout<<"\n";
    first_l1=NULL;
    for(i=0;i<nb_elements;++i)
    {
        current=(struct Node*)malloc(sizeof(struct Node));
        cin>>i;
        cin>>current->info;
        current->next=NULL;
        if(first_l1==NULL)
        {
            first_l1=current;
            last=current;
        }
        else{
            last->next=current;
            last=current;
        }
    }
    cout<<"Number of elements in the second list: ";
    cin>>nb_elements;
    cout<<"\n";
    first_l2=NULL;
    for(i=0;i<nb_elements;++i)
    {
        current = (struct Node*)malloc(sizeof(struct Node));
        cin>>i;
        cin>>current->info;
        current->next=NULL;

        if(first_l2==NULL)
        {
            first_l2=current;
            last=current;
        }
        else{
            last->next=current;
            last=current;
        }
    }
    concatenate(first_l1,first_l2);
    displayList();
    return 0;
}
void displayList()
{
    cout<<endl<<"Displaying the list..."<<endl;
    current = first_l1;
    while(current->next!=NULL)
    {
        cout<<current->info;
        current=current->next;
    }
    cout<<last->info;
}
void concatenate(struct Node* first1, struct Node* first2)
{
    if(first1!=NULL&&first2!=NULL)
    {
        if(first1->next==NULL)
            first1->next=first2;
        else
            concatenate(first1->next, first2);
    }
    else
    {
        cout<<"One of the lists is NULL!";
    }
}
