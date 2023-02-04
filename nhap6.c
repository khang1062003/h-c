#include<stdio.h>
int main(){
    printf("+------Thong tin giay dep------+\n");
    int a[100];
    int i,n;
    int sum=0;
    int min;
    min=a[0];
    printf("Moi nhap so luong giay dep: ");
    scanf("%d",&n);
    printf("Moi nhap co tung doi giay dep: \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("+------Xuat thong tin------=\n");
    printf("So luong giay dep la: %d\n",n);
    for(i=0;i<n;i++){
        if(a[i]>40){
            sum++;
        }
    }
    for(i=1;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("So luong giay dep lon hon 40 la: %d\n",sum);
    printf("Co be nhat la: %d",min);
}