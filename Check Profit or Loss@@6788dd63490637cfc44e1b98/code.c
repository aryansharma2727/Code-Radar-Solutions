#include <stdio.h>

int main() {
    int costprice,sellingprice ;
    scanf("%d",&costprice);
    scanf("%d",&sellingprice);
    int difference = sellingprice -costprice;
    if(difference>0){
        printf("Profit");
    }
    else if(difference<0){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    
    return 0;
}