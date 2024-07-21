#include<stdio.h>
int main(){
    int salery,hra,da,ta;
    printf("Enter your salery::");
    scanf("%d",&salery);
    printf("Enter your hra::");
    scanf("%d",&hra);
    printf("Enter your da::");
    scanf("%d",&da);
    printf("Enter your ta::");
    scanf("%d",&ta);

    printf("%d",salery+((salery*10)/100)+((salery*da)/100)+((salery*ta)/100));
}