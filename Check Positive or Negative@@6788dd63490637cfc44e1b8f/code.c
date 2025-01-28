#include <stdio.h>
int main(){
    char number ;
    scanf("%d",&number);

    if(number== 0){
        printf("Zero");
    }
    else if(number >0){
        printf("Positive");
    }
    else{
        printf("Negative");
    }
    return 0;

}