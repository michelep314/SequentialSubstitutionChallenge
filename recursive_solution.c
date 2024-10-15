#include "recursive_solution.h"

// Create a new node for the list
link newNode( char character, link next){
    link x = malloc(sizeof *x);
    if(x == NULL)
        return NULL;
    x->character = character;
    x->next = next;
    return x;
}

void create(int N, link head){
    int i = 0;
    head->character = 'a';
    head->next = newNode('a',NULL);
    link x = head->next;
    for(i =0; i<N;i++){
        printf("%d",i);
        link node = newNode('a',NULL);
        x->next = node;
        x = node;
    }
    printf("/nLista Creata con successo!/n");
}

void printList(link head){
    link x = head;
    printf("Stampo la lista:/n");
    while(x->next!=NULL){
        printf("%c",x->character);
        x = x->next;
    }
}


// link solve(int N, char *string_to_parse, int i){
//     if(i>=N){
//         return string_to_parse;
//     }else{
//         if(string_to_parse[i]==string_to_parse[i++]){

//         }
//     }
// }