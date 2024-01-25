#include<stdio.h>
int main(){
    int a,x,y,z,w;
    printf("Enter total number of days\n");
    scanf("%d",&a);
    x=a/365;
    y=(a%365)/30;
    z=((a%365)%30)/7;
    w=((a%365)%30)%7;
 
    printf("number of years = %d\n",x);
    printf("number of months = %d\n",y);
    printf("number of weeks = %d\n",z);
    printf("number of days = %d\n",w);
}