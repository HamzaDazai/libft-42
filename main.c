#include <stdio.h>
#include <stdlib.h>


typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

int main()
{

    t_list  *node_1 = malloc(sizeof(t_list));
    node_1 -> content = "hamza";

    node_1 ->next = NULL;

    t_list *cures = node_1;
    while(cures != NULL)
    {
        printf("%s \n",cures ->content);
        cures = cures -> next;
    }
    free(node_1);
    return 0;
}