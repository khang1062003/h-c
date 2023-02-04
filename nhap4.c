#include<stdio.h>

#include<math.h>

float tong(float x, float epsilon);

int main() {

    float x;

    float epsilon;

    do {

        printf("Nhap x: ");

        scanf("%f",&x);

 

        printf("Nhap epsilon: ");

        scanf("%f",&epsilon);

        } while(x<0 || epsilon<0);

        tong( x , epsilon);

}

float tong(float x,float epsilon) {

    int i = 1;

    float s = 0, gg = 1;

    do {

        gg = pow ( x , i ) / i;

        s = s + pow (- 1 , i - 1) * gg;

        printf("\tg = %f,\t s= %f\n",gg,s);

        i++;

        } while(gg>=epsilon);

    printf("\nln(1+x) la: %f",s);

}