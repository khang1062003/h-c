#include<stdio.h>
#include<math.h>
int mau(int n){
    int i;
    int sum=0;
    for(i=1;i<=n;i=i+2){
        sum=sum+1;
    }
    return sum;
}
int main(){
    int i,n;
    scanf("%d",&n);
    float s=1.00;
    for(i=1;i<=n;i++){
        s=s+mau(2*i-1)/pow(2,2*i);
    }
    printf("Tong: %.2f",s);
}