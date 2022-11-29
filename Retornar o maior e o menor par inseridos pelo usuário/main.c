#include<stdio.h>
#include<stdlib.h>

void main(){
int a=0, b=0, c=0;

   printf("Digite: ");
	scanf("%d", &a);
b = a;
c = a;


while (a>=0){

	printf("Digite: ");
	scanf("%d", &a);


if (a>=0) {
		if(a>b)
			b=a;
		else
            c=a;
}; }
        if (b % 2 == 0){
            b = b - 2;
        }
        else {
            b = b - 1; }


        if(c % 2 == 0){
            c = c + 2;
        }else{
            c = c + 1;
        }
    printf("\n\n O maior numero par dentro desse conjunto e: %d \n e o menor numero par dentro desse conjunto e: %d ", b, c);

}
