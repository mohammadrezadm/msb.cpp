#include<iostream>
#include <conio.h>
using namespace std;
int main(){
	char e[] = "Reza";
	for (char* cp = e;*cp != 0;++cp) 
	{
		printf("char is a %d\n", *cp);
	}
	const int Age = 50;
	printf("MSAReza 1234%d\n", Age);
	int x;
	x = 34;
	int a;
	a = 63;
	int b;
	b = 12;
	printf("a is of saiz %d\n", a);
	printf("a is of szajjd ka%d\n", a = 8);
	cout << "hello \n" << a * b << a - b << "Enter your:";
	cin >> x;
	cout << "your Noumber is :" << a;
	cout << "your is MSA:" << x;
	cin >> b;
    cout << 4 * b- 1;
	return 0;



	
	

}