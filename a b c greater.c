#include<stdio.h>
int main(){
int a,b,c;
printf("Enter a, b, c values");
scanf("%d %d %d",&a,&b,&c);
if (a==b && a==c)
    {
    printf("a and b and c are equal");
    }
else if(a>b && a>c)
    {
    printf("a is grater than b and c");
    }
else if(b>a && b>c)
    {
    printf("B is greter than a and c");
    }
else
    {
    printf("c is greate than a and b");
    }
 return 0;
}
