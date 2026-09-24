#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter The 1st Number:");
    scanf("%d",&a);
    printf("Enter The 2nd Number:");
    scanf("%d",&b);
    printf("%d\n",a+b);
    printf("%d\n",a-b);
    printf("%d\n",a*b);
    if(b!=0){
    printf("%d\n",a/b);
    printf("%d",a%b);
    }else{
    printf("error boss 0 dia vag kora jai na");
    }
    return 0;
}