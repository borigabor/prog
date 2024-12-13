/*
5.	�rjon f�ggv�nyt vagy met�dust, amely egy val�s sz�m k�bgy�k�t adja vissza!
Haszn�lja az xk+1=1/3*(2*xk+a/xk2) sorozatot, amely a k�bgy�k�hez konverg�l, 
ha x1=1.
*/
#include <iostream>

float kgy(float szam)
{
	int k=1;
	int n = 50;
	float x[n+1];
	x[1]=1;
	
	for(k;k<n;k++)
	{
		x[k+1]=(2*x[k]+(szam/(x[k]*x[k])))/3; 
	}
	return x[n];
}
int main(int argc, char *argv[]) {
	std::cout << kgy(27)<<std::endl;
system("PAUSE");
return EXIT_SUCCESS;
}
