#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x;
	int y;
	int soma;

	cout << "Dgite um n�mero: \n";
	cin >> x;

	cout << "Dgite outro n�mero: \n";
	cin >> y;

	soma = x + y;

	cout << "O valor da soma �: " << soma << endl;

	system("PAUSE");
	return EXIT_SUCCESS;
}
