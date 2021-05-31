#include <stdio.h>
#include <setjmp.h>
#include <stdlib.h>



void add_to_array (char* initial [], char* to_add){
    char* i [0];
    // i[((int)(sizeof(initial)/sizeof(initial[0])))] = to_add;
    char hi [] = "Hi"; 
    *initial[1] = hi;
}

int main(){
    
    char* f [] = {"Rodrigo", "Margarida"};
    char* add;
    add_to_array(f, add);
    printf("Size of f: %i", sizeof(f)/sizeof(f[0]));
    printf("\nPrinting values...\n");
    int size = sizeof(f)/sizeof(f[0]);
    for (size_t i = 0; i < size; i++)
    {
        printf("[%i] = %s\n", i, f[i]);
    }
    
    // for (size_t i = 0; i < sizeof(int)/sizeof(f); i++)
    // {
    //     printf("%i", f);
    // }
    
    return 0;
}