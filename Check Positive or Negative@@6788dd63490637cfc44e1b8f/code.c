#include <stdio.h>
int main(){
    int num ;
    scanf("%d",&num);

    if(num>0){
        printf("postive");
    }
    else if(num<0){
        printf("negative")
    }
    else{
        printf("zero")
    }
    return 0;

}