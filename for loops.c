#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,n;
    printf("enter no of lines to be printed ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
           // printf(" * ");
           //printf("% d ",j);
           //printf(" %d ",i);
        }
        printf("\n");
    }
}
/*this code is interchangable code on removine the comments in the internal for loop to prinr several outputs such as
*                   1                 1
* *                 1 2               2 2
* * *               1 2 3             3 3 3
* * * *             1 2 3 4           4 4 4 4*/
