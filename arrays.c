#include <stdio.h>
#include <setjmp.h>
#include <stdlib.h>



char* add_to_array (char* initial [], char* to_add []){
    
    return "";
}

int main(){
    
    char* f [] = {"Rodrigo", "Margarida"};
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