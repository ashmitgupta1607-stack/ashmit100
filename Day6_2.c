//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include<stdio.h>
int main(){
    int n;
    printf("Enter any Number :");
    scanf("%d",&n);
    if(n>=0){
        if (n==0){
        printf("Zero");
        }
        else {
        printf("positive");
        }
    }    
    

    else if (n<0){
        printf("negative");
    }
    return 0;
}