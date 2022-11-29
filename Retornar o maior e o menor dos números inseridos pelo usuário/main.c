#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
int a=0, b=0, c=0;
{
   printf("Digite: ");
	scanf("%d", &a);
b = a;
c = a; }
    while (a>=0){

	printf("Digite: ");
	scanf("%d", &a);


if (a>=0) {
		if(a>b)
			b=a;
		else
            c=a;
}
}
printf("O maior número é %d e o menor número é %d\n", b, c);

return 0;
}
