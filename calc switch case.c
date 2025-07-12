#include<stdio.h>
int main(){
        int a,b,ans,sel;
        printf("Enter a ,b values");
        scanf(" %d %d",&a,&b);
        printf("1.addtion /n 2.subtraction /n 3. multplication /n 4.divison");
        printf("/n enter required operation");
        scanf("%d",&sel);
        switch(sel){
        case1:
            ans=a+b;
            printf("%d + %d=%d",&a,&b,&ans);
            break;
        case2:
            ans=a-b;
            printf("%d - %d=%d",&a,&b,&ans);
            break;
        case3:
            ans=a*b;
            printf("%d X %d=%d",&a,&b,&ans);
            break;
        case4:
            ans=a/b;
            printf("%d / %d=%d",&a,&b,&ans);
            break;
        }
        printf("%d + %d=%d",&a,&b,&ans);
}
