#include<stdio.h>
#include<string.h>
int nhap(int a[]){
    for(int i=0;;){
        scanf("%c",&a[i]);
        if(strlen(a[i])<=6){
            break;
        }
    }
}
int main(){
    int a[100];
    nhap(a);
}