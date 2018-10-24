#include <stdio.h>
void prime(int k,int *p){
int i,j;
int l = 0;

    for(i = 2; i <= k; i++){
	p[l] = i;
	l++;
        for(j = 2; j < i; j++){
            if(i%j == 0){
             	l--;
		break;
            }
	if(i%j == 0)break;
        }
    }
   
    p[l] ='\0';
}

int main(){
    int max[2]={0,0};//max[0] = 素数の個数 max[1] = a*b
    int p[10000];
    prime(10000,p);
/* for(int i = 0; p[i] !='\0'; i++){
        printf("%d: %d\n", i, p[i]);
    }
*/
int n=0,j,flag;
 for(int a = -999; a < 1000; a++){
     for(int i = 0; p[i]<=1000; i++){
         n=0;
         j = i;
         flag = i;

        while(n*(n+a)+p[i]==p[j]){
            n++; flag++;
            if(n*(n+a)+p[i]<p[j]){
                while(n*(n+a)+p[i]<p[j]) j--; 
            }else if(n*(n+a)+p[i]>p[j]){
                while(n*(n+a)+p[i]>p[j]) j++; 
            }
        }
       // if(n>30)printf("n=%d a=%d b=%d \n",n,a,p[i]);
        if(max[0]<flag-i){
            max[0] = flag-i;
            max[1] = a*p[i];
        }
     
    }
 }
 /*       int n = 0;
        int j = 12;
        int flag = 12;
        while(n*n+n+p[12]==p[j]){
                printf("%d\n",p[j]);
                    flag++; j++; n++;   
                while(n*n+n+p[12]>p[j]) j++; 
                }
                max[0] = flag -12;
        printf("%d",max[0]);
*/
printf("%d個の素数を生成するa*b = %d",max[0],max[1]);
    return 0;
}