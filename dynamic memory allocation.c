#include<stdio.h>
#include<stdlib.h>
int main (void)
{
  int*p=malloc(3*sizeof(int));
    if(p==NULL) {
        printf("Memory allocation failed\n");
    return 1;
    }
    p[0]=1;
    p[1]=2;
    p[2]=3;
    printf("%d %d %d\n",p[0],p[1],p[2]);
           free(p);
    return 0;
}-