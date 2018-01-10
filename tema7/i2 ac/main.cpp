#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Node{
    int info;
    struct Node* next;
    struct Node* prev;};
struct Node *first, *last, *current;
void displayList();
int main()
{
    int nb_elements;
    int i;
    cout<<"Input number of elements: ";
    cin>>nb_elements;
    cout<<"\n";
    first = NULL;
    last = NULL;
    for(i = 0; i < nb_elements; ++i)
    {
        current = (struct Node*)malloc(sizeof(struct Node));

        cin>>i;
        cin>>current->info;
        current->next = NULL;
        current ->prev = last;
        if(first == NULL)
        {
            first = current;
            last = current;
        }
        else{
            last->next = current;
            last = current;
        }
    }
    displayList();
    }

void displayList()
{
    cout<<"Displaying the list... ";
    current = first;
    while(current->next != NULL)
    {
        cout<<current->info;
        current = current -> next;
    }
    cout<<last->info;
}
