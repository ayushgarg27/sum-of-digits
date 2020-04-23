#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int ans = 0;
    while(n>0){
        int r = n % 10;
        ans = ans + r;
        n = n / 10;
    }
    printf("%d",ans);
}