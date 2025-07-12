#include<stdio.h>
int main(){
int a, b ;
printf("enter a , b values: ");
scanf("%d %d",&a,&b);
if(a==b){
printf("a and b are equal");
}
else if(a>b){
    printf("a is grater than b");
}
else{
    printf("b is greater than a");
}
}
