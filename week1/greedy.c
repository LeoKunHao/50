#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("O hai! How much change is owed?\n");
    
    float f = GetFloat(); 
    
    int coins = 0; 
    
    while (f < 0) {
    printf("Retry: ");
    f = GetFloat();
    }
    
    int cent = f *100 +0.05; 
    //printf("%d\n", cent); 

    
    while (cent > 0) {

        while (cent >= 25) {
            cent = cent -25; 
            coins++; 
            //printf("-25\n");
        }
        
        while(cent >= 10) {
            cent = cent - 10; 
            coins++; 
             //printf("-10\n");
            
        }
        
        while(cent >= 5) {
            cent = cent -5; 
            coins++; 
             //printf("-5\n");
        }
        
        while(cent >= 1) {
            cent = cent -1; 
            coins++;
             //printf("-1\n");
        }
        
    }
    
    
    
    printf("%d\n", coins); 
}
