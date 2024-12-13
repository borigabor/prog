/*
6. Írjon függvényt vagy metódust, amely kiszámolja az n-edik Fibonacci számot! 
A Fibonacci sorozatot az an=an-2+an-1 rekurzióval definiálja (n>2), ahol 
a1=a2=1.
*/
#include <iostream>

int fibonacci(int szam)
{
	
	if(szam<2)
	{
		return szam;
	}
	else
	{
		return fibonacci(szam-2)+fibonacci(szam-1);
	}
}

int main(int argc, char *argv[]) {
	
	for(int i = 0;i<10;i++)
	std::cout << fibonacci(i)<<std::endl;
	
system("PAUSE");
return EXIT_SUCCESS;
}
