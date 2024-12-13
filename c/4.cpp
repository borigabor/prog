/*
4.	A következo közelíto formulát használva írjon függvényt vagy metódust, 
amely egy valós szám négyzetgyökét adja vissza! Használja az xk+1=1/2*(xk+a/xk) 
sorozatot, amely a négyzetgyökéhez konvergál, ha x1=1.
*/
#include <iostream>

using namespace std;
float ngy(float szam)
{
	int k = 1;
	int n = 50;
	float x[n];
	x[1]=1;
	
	for(int i = k;i<=n;i++)
	{
		x[i+1]=(x[i]+(szam/(x[i])))/2;
	}
	return x[n];
}


int main(int argc, char *argv[]) {
	cout <<ngy(25)<<endl;
system("PAUSE");
return EXIT_SUCCESS;
}
