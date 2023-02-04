#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    printf("Nhap chuoi: ");
    gets(s);
    char c;
    printf("Nhap ky tu: ");
    scanf("%c",&c);
    int count=0;
    int len=strlen(s);
    for(int i=0;i<=len;i++){
        if(s[i]==c){
            count++;
        }
    }
    printf("%d",count);
}