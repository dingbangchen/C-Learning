#include<stdio.h>
#define MAX 100

int main(void)
{
    int count = MAX +1;
    while (--count >0){
        printf("%d bottles of water on the wall\n",count);
        printf("%d bottles of water left\n", count);
        printf("take one bottle away\n");
        printf("%d bottles of water left\n",count -1);
        
    }
    return 0;
}
