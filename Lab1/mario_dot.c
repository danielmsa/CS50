#include <cs50.h>
#include <stdio.h>

int main(void)
{
    
    int n;
    do
    {
        //Take a number from user
        n = get_int("height: ");
        
    }   
        while (n < 1 || n > 8);
        
        for (int i = 0; i < n; i++)
        {
            //Blankspace
            for (int j = n - 1; j > i; j--)
                printf(".");
                
            //Haches #
            for (int j = 0; j <= i; j++)
                printf("#");
                
            printf("\n");
        }
            
}