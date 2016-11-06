#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main(void) {
    
    char end[24] = {""};
    printf("height: ");

    int n = GetInt();
    
    while (n > 23) {
        printf("Retry: ");
        n = GetInt();
    }

    if (n == 1){
        printf("##\n");
    }
    if (n < 0 ) {
        printf("\n"); 
    }

    int counter = 2;
    int nn = n+1;
    
    if (n>1 && n<24) {
        
        for(int j = 0; j < n; j++){
            
            for(int a = 0; a < nn-counter; a++){
                strcat(end, " ");
            }
            for(int b = 0; b < counter; b++){
                strcat(end, "#");
            }
            
            printf("%s\n", end);
            counter++;
            
            strcpy(end,"");
            
        }
        
    }

}
