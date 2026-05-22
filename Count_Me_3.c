#include<stdio.h>
#include<string.h>
int main(){

 int t;
 scanf("%d",&t);
 
 while(t--){
char a[10001];
scanf("%s",a);
int c=0,s=0,d=0;
for(int i = 0;i<strlen(a);i++){

if(a[i]>='a' && a[i]<='z'){
    s++;
}

if(a[i]>='A' && a[i]<='Z'){
    c++;
}
if(a[i]>='0' && a[i]<='9'){
    d++;
}


}

printf("%d %d %d\n",c,s,d);


 }

return 0;
}
