#include <stdio.h>
int main(){
    float a,b,c ;

    scanf("&f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    float Average = (a+b+c)/3;
    printf("Average: %.2f",Average);
    
    return 0;

}