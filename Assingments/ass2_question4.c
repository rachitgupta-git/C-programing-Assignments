#include<stdio.h>
int main(){
    float a;

    printf("enter initial account balance:");
    scanf("%f",&a);

    float i=0.1;
    printf("intrest amount=%f\n",i*a);
    a+=a*i;
    printf("amount after intrest=%f\n",a);

    float m=250;
    printf("annual maintanance charge=%f\n",m);
    a-=m;
    printf("amount after mainteinance charge=%f\n",a);

    float b=1.2;
    a*=b;
    printf("amount after bonus=%f\n",a);

    a/=2.0;
    printf("after dividing amount to link amount=%f\n",a);

    printf("final amount=%f",a);

    return 0;

}