#include <stdio.h>
int main(){
    int price,loaves,regularprice;
    float discountrate,discount,finalprice;
    scanf("%d", &loaves);
    discountrate=0.6;
    price=185;
    regularprice=loaves*price;
    discount=(float)regularprice*discountrate;
    finalprice=regularprice-discount;
    printf("Regular Price=%d\n",regularprice);
    printf("Amount Discounted=%.2f\n", discount);
    printf("Amount to be paid=%.2f",finalprice);
	return 0;
}