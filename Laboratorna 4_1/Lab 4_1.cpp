#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int N, i, k;
	double Suma;

	cout << "k = ";cin >> k;cout << endl;
	cout << "N = ";cin >> N;cout << endl;

	Suma = 0;
	i = k;
	while (i <= N)
	{
		Suma += (sin(cos(1.0*i))) / (1 + cos(1.0*i) * cos(1.0*i));
		i++;
	}
	cout << "Suma = " << Suma << endl;

	Suma = 0;
	i = k;
	do
	{
		Suma += (sin(cos(1.0 * i))) / (1 + cos(1.0 * i) * cos(1.0 * i));
		i++;
	} while (i <= N);
	cout << "Suma = " << Suma << endl;

	Suma = 0;
	for (i = k; i <= N; i++)
	{
		Suma += (sin(cos(1.0 * i))) / (1 + cos(1.0 * i) * cos(1.0 * i));
	}
		cout << "Suma = " << Suma << endl;

	Suma = 0;
	for (i = N; i >=k; i--)
	{
		Suma += (sin(cos(1.0 * i))) / (1 + cos(1.0 * i) * cos(1.0 * i));
	}
		cout << "Suma = " << Suma << endl;

		cin.get();
		system("pause");
		return 0;
}