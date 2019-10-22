/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define SEC_PER_MIN 60

int main(void)
{
    int sec, min, left;
    
    printf("Convert seconds to minues and scondes!\n");
    printf("Enter the number of seconds (<=0 to quit):\n");
    scanf ("%d", &sec);
    while(sec >0);
    {
        min = sec/ SEC_PER_MIN;
        left = sec % SEC_PER_MIN;
        printf("d second is %d mintes, %d seconds.\n",sec,min,left);
        scanf("%d",&sec);
        
    }
    printf("Done!\n");
    return 0;
}
