#include <fstream>
#include <iostream>
using namespace std;
ifstream fin("numere.in");
int main()
{
	int i, x, nr, nro;
	for (i = 1; fin >> x; i++)
		if (!(x%5))
			nr = x, nro = i;
	fin.close();
	cout << nr << ' ' << nro;
	return 0;
}
