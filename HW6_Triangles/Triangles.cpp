#include <iostream>
#include <iomanip>
using namespace std;

void asterisks(int n)
{
	if(n!=0)
	{
		cout << '*';
		asterisks(n-1);
		
	}
	else
	cout << endl;
}
void triangles(int n)
{
	if(n!=0)
	{
		asterisks(n);
		triangles(n-1);
		asterisks(n);
	}
	
}
int main()
{
	triangles(6);
	return 0;
}
