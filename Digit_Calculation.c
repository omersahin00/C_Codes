#include<stdio.h>

int main(){
    long long int num, temp, digit=0;
    printf("Lutfen bir num giriniz: ");
    scanf("%lld", &num);
    temp = num;
    while(temp != 0){
        temp /= 10;
        digit++;
    }
    printf("%lld sayisinin basamak sayisi: %lld", num, digit);
    return 0;
}
