#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("minutes: "); 
    int n = GetInt(); 
    
    if (n > 0) {
        n = n*12; 
        printf("%d" , n); 
    }

}
