#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x;
	int y;
	int soma;

	cout << "Dgite um número: \n";
	cin >> x;

	cout << "Dgite outro número: \n";
	cin >> y;

	soma = x + y;

	cout << "O valor da soma é: " << soma << endl;

	system("PAUSE");
	return EXIT_SUCCESS;
}
