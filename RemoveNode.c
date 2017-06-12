#include <stdio.h>
#include <stdlib.h>

struct list_node{
    void* data;
    struct list_node *next;
};
struct list_node* HEAD;

/************************************************************/

 void print_list(struct list_node* list_entry)
 {
    for( ; list_entry; list_entry=list_entry->next)
        printf("%d,", *((int*) list_entry->data));
    
    printf("\n\n*********** FIM ******************* \n");
    
 }

 void remove_node(struct list_node* list_entry)
{
     struct list_node *list_remove = HEAD;
     struct list_node *list_ant=HEAD;
     
     for( ; list_remove; list_remove=list_remove->next)
     {
            if(list_remove==list_entry)
            {
                HEAD = list_remove->next;
            }
            else
                list_ant->next=list_remove->next;
            break;
    }
    
        list_ant=list_remove;
    
}
 
 int main()
 {
     int a=0;
     int b=0;
     int c=0;
     int d=0;
     int e=0;
     int f=0;
     
     setbuf(stdin,NULL);
     scanf("%d,%d,%d,%d,%d,%d", &a,&b,&c,&d,&e,&f);
     
     printf("%d,%d,%d,%d,%d,%d\n", a,b,c,d,e,f);
     
     
     struct list_node n6 = {&f, NULL};
     struct list_node n5 = {&e, &n6};
     struct list_node n4 = {&d, &n5};
     struct list_node n3 = {&c, &n4};
     struct list_node n2 = {&b, &n3};
     struct list_node n1 = {&a, &n2};
     
     HEAD = &n1;
     remove_node(&n1);
     remove_node(n3.next);
     print_list(HEAD);
     return 0;
     
}
