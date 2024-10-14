#include <stdlib.h>
typedef struct elemento *link;

struct elemento{
    char character;
    link next;
} elemento;

link create(int N);
void printList(link head);
//link solve(int N, char *string_to_parse);