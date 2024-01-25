#include<stdio.h>
int main(){
    int a ,b, c;
    printf("Enter number a , b and c\n");
    scanf("%d%d%d",&a,&b,&c);

    int max = (a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("Max number is %d\n",max);

    int min = (a<b)?((a<c)?a:c):((b<c)?b:c);
    printf("Min value is %d ", min);
    return 0;
}