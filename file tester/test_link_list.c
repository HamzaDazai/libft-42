#include <stdio.h>
#include <stdlib.h>

typedef struct s_node
{
    char    *name;
    struct  s_node  *next;
    
} t_node;


int main()
{
    t_node  *first_node;
    t_node  *node__2;
    t_node  *node__3;

    first_node = malloc(sizeof(t_node));
    node__2 = malloc(sizeof(t_node));
    node__3 = malloc(sizeof(t_node));

    first_node->name = "hamza";
    node__2  ->name = "moadh";
    node__3->name = "adam";

    first_node->next = node__2;
    first_node->next->next  = node__3;
    first_node->next->next->next = NULL;

    t_node *cures = first_node;
    while(cures != NULL)
    {
        printf("%s \n",cures ->name);
        cures = cures -> next;
    }
    free(first_node);
    free(node__2);
    free(node__3);
    return 0;
}

