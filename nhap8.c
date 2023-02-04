#include<stdio.h>
#include<math.h>
double area(double xA,double xB,double xC,double yA,double yB,double yC){
   return 0.5 * fabs(xA*yB - xB*yA + xB*yC - xC*yB + xC*yA - xA*yC);
}

int main(){
    double xA,xB,xC,yA,yB,yC,xM,yM;
    double d;

    printf("(xA,yA)= ");
    scanf("%lf%lf",&xA,&yA);
    printf("(xB,yB)= ");
    scanf("%lf%lf",&xB,&yB);
    printf("(xC,yC)= ");
    scanf("%lf%lf",&xC,&yC);
    printf("(xM,yM)= ");
    scanf("%lf%lf",&xM,&yM);

    d=area(xM,yM,xA,yA,xB,yB)+area(xM,yM,xA,yA,xC,yC)+area(xM,yM,xB,yB,xC,yC)-area(xA,yA,xB,yB,xC,yC);
    if(d>0){
        printf("M nam ngoai tam giac ABC\n");
    }
    else if(area(xM,yM,xA,yA,xB,yB)==0 || 
            area(xM,yM,xA,yA,xC,yC)==0 || 
            area(xM,yM,xB,yB,xC,yC)==0){
                printf("M nam tren canh tam giac ABC\n");
    }
    else{
        printf("M nam trong tam giac ABC\n");
    }
    return 0;
}    