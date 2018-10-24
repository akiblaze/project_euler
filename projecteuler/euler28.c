#include <stdio.h>
int main(){
 int k = 0;
 int j = 2;
 int sum = 0;
    for(int i=1;i<=1001*1001;i+=j){
        sum += i;
       // printf("%d\n",i);
        
        if(k==4){
            k=0;
            j+=2;
        }
        k++;
    }
    printf("%d",sum);
    return 0;
}