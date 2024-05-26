#include <stdio.h>

int main(){

	int x;

	scanf("%d", &x);

	while(x--){

		int n, m, a=0, b=0, c=1, d=1, e=3, f=3, g=0;
		scanf("%d %d", &n, &m);

		a= n-2;
		b = m-2;

		while(e<b){
			e += 3;
			c++;
		}

		while(f<a){
			f +=3;
			d++;
		}

		g = c*d;

		printf("%d\n", g);


	}


	return 0;
}
