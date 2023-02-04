#include <stdio.h>
#include <math.h>
double bt2(double x){
    x = x - 1;
    if (-1 < x && x < 1)
    {
        double t = x, _ln = x; long k = 1;
        do
            {
                t = -t*x*k/(k+1);
                _ln = _ln + t;
                k++;
            }  while (_ln != _ln +t);
        return _ln;
    }
    else return -1;
}
double bt3(){
    double x;
    printf("Nhap x:");scanf("%lf",&x);
    if (x  <= -1 || x >= 1){
        for (int i = 0; i <1;){
            printf("Nhap lai x:"); scanf("%lf",&x);
            if (x > -1 && x < 1){
                break;
            }else{continue;}
        }
    }
    return x;
}
int main() {
    double x;
    int t;  
    do
    {
    x = bt3();    
    printf("Gia tri ln(1+x)= %f\n",bt2(x+1));
    printf("Ban co muon tiep tuc chuong trinh (yes :1 / no : 2): ");
    scanf("%d",&t);
    }while( t == 1 );    
    return 0;
}