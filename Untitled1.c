#include <stdio.h>
#include <math.h>
int main(){
	float f;
	int a, b, c;
	printf("a, b, c: ");
	scanf("%d%d%d", &a,&b,&c);
	f = (float)(-b-sqrt(b*b-2*a*c))/(3*a);
	printf("%f", f);
}
