#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
struct mystruct{
        int field1;
        char field2[50];
        float field3;
        };

int main()
{
    int nr_elem;
    int i;
    struct mystruct *str;
    str=(struct mystruct*)malloc(nr_elem * sizeof(struct mystruct));
    cin>>nr_elem;
    for(i=0;i<nr_elem;i++)
    {
        cin>>i;
        cin>>str[i].field1;
        cin>>str[i].field2;
        cin>>str[i].field3;
    }

     for(i=0;i<nr_elem;i++)
    {
        cout<< i;
        cout<<str[i].field1;
        cout<<str[i].field2;
        cout<<str[i].field3;
     }
}
