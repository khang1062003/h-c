#include<stdio.h>
#include<conio.h>
int main(){
    char name[100];
    char  check;
    int i;
    printf("Ten sinh vien: ");
    gets(name);
    printf("Ma so sinh vien: ");
    scanf("%d",&i);
    int tinh_toan;
    for(;;){
        printf("CHUONG TINH TINH TOAN: \n");
        printf("1.Tinh so tuoi cua ban\n");
        printf("2.Tim so lon nhat trong ba so\n");
        printf("Ban muon thuc hien chuong trinh nao: ");
        scanf("%d",&tinh_toan);
        switch (tinh_toan){
        case 1:{
                for(;;){
                int a,b,c;
                printf("Nhap vao nam sinh: ");
                scanf("%d",&a);
                printf("Nhap vao nam hien tai: ");
                scanf("%d",&b);
                if(b<a){
                    printf("Ban da nhap khong hop le\n");
                    printf("Vui long nhap lai\n");
                    continue;
                    }
                else{
                    c=b-a;
                    printf("So tuoi cua ban la: %d\n",c);
                    break;
                    }
                }
                break;
            }
        case 2:{
                int a,b,c;
                printf("Nhap so thu nhat: ");
                scanf("%d",&a);
                printf("Nhap so thu hai: ");
                scanf("%d",&b);
                printf("Nhap so thu ba: ");
                scanf("%d",&c);
                if(a>b&&a>c){
                    printf("So lon nhat la: %d\n",a);
                }
                else if (a<c&&b<c){
                    printf("So lon nhat la: %d\n",c);
                }
                else{
                    printf("So lon nhat la: %d\n",b);
                }
                break;
            }     
        } 
        printf("Ban co muon tiep tuc nua khong (y,n): \n");
        scanf("%s",&check);
        if(check=='y'){
            continue;
        }
        else if(check=='n'){
            break;
        }
    }
}