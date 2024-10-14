#include "recursive_solution.h"


link create(int N){
    int i;
    link head, x = malloc(sizeof *x);
    head->character = 'a';
    head->next = x;
    for(i =0; i<N;i++){
        printf("%d",i);
        x->character = 'a';
        x->next = malloc(sizeof *x);
        x = x->next;
        x->next = NULL;
    }
    return head;
}

void printList(link head){
    link x = head;
    printf("Stampo la lista:/n");
    while(x->next!=NULL){
        printf("%c",x->character);
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