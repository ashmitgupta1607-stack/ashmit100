//Write a program to check if a number is a strong number.

#include<stdio.h>
int main(){
    int n ,fact=1,sum=0;
    printf("Enter a number :");
    scanf("%d",&n);
    int temp=n;
    while (n!=0){
        int x=n%10;
        for(int i=1;i<=x;i++){
            fact=fact*i;

        }
        sum=sum+fact;
        fact =1;
        n=n/10;
    }
    if(sum==temp){
        printf("Strong Number ");
    }else {
        printf("Not a strong number ");
    }
}
