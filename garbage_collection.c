#include<stdio.h>
#include<stdlib.h>
int main()
{

    int* Array=(int *)malloc(10*sizeof(int));// dynamic allocation of the memory
    if(Array==NULL)
    {
        printf("Error: Memory is not allocated\n");
        return 1;
    }

    free(Array);// free the used memory

    return 0;
}
