#include <stdlib.h>
typedef struct elemento *link;

struct elemento{
    char character;
    link next;
};

link newNode( char character, link next);
void create(int N, link head);
void printList(link head);
//link solve(int N, char *string_to_parse);