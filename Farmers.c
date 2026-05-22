#include<stdio.h>
int main(){

    int t;
    scanf("%d",&t);

    while(t--){
int a,b,d;
scanf("%d %d %d",&a,&b,&d);

int adifarm,awork,adiwork,finalwork;

awork = d;

adifarm = a+b;

adiwork = (a*d)/adifarm;

finalwork = awork - adiwork;

printf("%d\n",finalwork);






    }   
    

return 0;
}
