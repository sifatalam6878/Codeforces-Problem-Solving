#include<stdio.h>
int main(){

    long long n,k;
    scanf("%lld %lld",&n,&k);

    long long num=(n+1)/2;
    if(k<=num){
        printf("%lld\n",2*k-1);
    }else{
        printf("%lld\n",2*(k-num));
    }
    return 0;
}