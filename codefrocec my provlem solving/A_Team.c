#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdbool.h>
#include<limits.h>
#include<float.h>
#include<time.h>

int main(){
    
    int n, total=0,count,i;
   int p,v,t;

   scanf("%d",&n);

   for(i=0;i<n;i++){
   scanf("%d %d %d",&p,&v,&t);
   count = p+v+t;
   if(count>=2){
    
    total++;
   }

   }
  
    printf("%d\n",total);
    
    return 0;
}
