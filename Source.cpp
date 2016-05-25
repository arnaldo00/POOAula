#include <iostream>
using namespace std;

void imprimir_espacos(int total);

int main(int argc, char* args[])
{
	int total_espacos = 10;

	int rodada = 0;
	while (rodada < total_espacos)
		
	{
		imprimir_espacos(rodada);
		cout << " s " << endl;
		system("cls");
		rodada++;
	}

	return 0;
}

void imprimir_espacos(int total)
{
	int qntd_atual = 0;
	while (qntd_atual < total)
	{
		cout << " ";
		qntd_atual++;
	}
}