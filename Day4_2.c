//Write a program to find and display the sum of the first n natural numbers.

#include<stdio.h>
int main(){
    int n;
    int sum = 0;
    printf("Enter a natural number :");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        
        sum = sum+i;
       
    }

    printf("%d",sum);
      
    return 0;
}

