#include <stdio.h>
int main(){
    char number ;
    scanf("%d",&number);

    if(number > 0){
        printf("postive");
    }
    else if(number < 0){
        printf("negative")
    }
    else{
        printf("zero")
    }
    return 0;

}