#include <stdio.h>
int divisor(int num);
int main(){
  int flag[10000];
  int a,b;
  int sum=0;
for(int i = 0; i < 10000; i++) flag[i] = 0;
for(int i = 1; i <= 10000; i++){
  if(flag[i-1]==1)goto end;
  a=divisor(i);
  b=divisor(a);
  if(a==b){
      flag[a-1] = 1;
  }else if(i==b){
      flag[a-1] = 1;
      flag[i-1] = 1;
      sum += a + b; 
      printf("%d:%d\n",a,b);
  }
end:
        printf("");

}
printf("%d",sum);

return 0;
}
int divisor(int num){
    int sum=0;
    if(num == 0) return -1;
    for(int i=1; i<num; i++){
        if(num%i == 0) sum+=i;
    }return sum;

}