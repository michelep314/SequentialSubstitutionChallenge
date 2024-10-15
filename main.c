#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "recursive_solution.c"

int main(int argc, char argv[]){
    srand(time(NULL));
    // Generate random number
    int i,N = rand() % 1000000000;
    printf("Number of 'a' in the string: %d\n",N);

    // Allocated string 
    // char *string_to_parse = malloc((N+1)*sizeof(char));
    // for(i=0; i<N; i++){
    //     string_to_parse[i] = 'a';
    // }
    // printf("%s",string_to_parse);

    // Processing as a concatenate list 
    link head = NULL;
    create(N,head);
    //printList(head);


    return EXIT_SUCCESS;
}