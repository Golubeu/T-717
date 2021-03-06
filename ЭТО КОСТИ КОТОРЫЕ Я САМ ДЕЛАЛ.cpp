// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

bool Order();
void StartGame();
void Drawing(int);
void OutputResult(int, int);


bool Order() 
{

	bool order;
	order = rand() % 2;
	if (order == 1)
		cout << " Ходишь ты!" << endl;
	
	else 
		cout<< " Ходит компьютер!" << endl;

	cout << endl;
	system("pause");
	cout << endl;
	return order;
}



void StartGame()
{
	int ord = Order();

	int n1_1 = 0, n1_2 = 0, n2_1 = 0, n2_2 = 0;
	int sum_1 = 0, sum_2 = 0, mainSum_1 = 0, mainSum_2 = 0;

	for (int i = 1; i < 5; i++)
	{
		if (ord == 1)
		{
			n1_1 = rand() % 6 + 1;
			Drawing(n1_1);
			n1_2 = rand() % 6 + 1;
			Drawing(n1_2);
			sum_1 = n1_1 + n1_2;
			mainSum_1 += sum_1;

		}
		else if (ord == 0)
		{
			n2_1 = rand() % 6 + 1;
			Drawing(n2_1);
			n2_2 = rand() % 6 + 1;
			Drawing(n2_2);
			sum_2 = n2_1 + n2_2;
			mainSum_2 += sum_2;

		}

		cout << "Сумма твоих костей в " << i << "-м раунде равна " << sum_1 << " из " << n1_1 << " и " << n1_2 << " очков" << endl;
		cout << "Сумма костей компьютера в " << i << "-м раунде равна " << sum_2 << " из " << n2_1 << " и " << n2_2 << " очков" << endl;
		cout << "Общая сумма очков у тебя " << mainSum_1 << ", а у компьютера " << mainSum_2 << endl; 


		ord = !ord;
		cout << endl;
		system("pause");
		cout << endl;
	}
	OutputResult(mainSum_1, mainSum_2);
}

void OutputResult(int m_Sum1, int m_Sum2)
{
	int main_Sum1 = m_Sum1;
	int main_Sum2 = m_Sum2;
	if (main_Sum1 > main_Sum2)
	{
		cout << "Ты выиграл! У тебя " << main_Sum1 << " очков!" << endl;
		cout << "У компухтера же " << main_Sum2 << " очков!" << endl;
	}
	else if (main_Sum1 < main_Sum2)
	{
		cout << "Кампухтер выиграл! У него " << main_Sum2 << " очков!" << endl;
		cout << "У тебя же " << main_Sum1 << " очков!" << endl;
	}
	else if (main_Sum1 == main_Sum2)
	{
		cout << "Ничья!" << "У вас по " << main_Sum1 << " очков!" << endl;
	}
}



void Drawing(int res)
{
	int result = res;

	switch (result)
	{
	case 1: cout 
		<< "$$$$$$" << endl
		<< "$$$$$$" << endl
		<< "$$  $$" << endl
		<< "$$$$$$" << endl
		<< "$$$$$$" << endl << endl;
		break;
	case 2: cout 
		<< "$$$$$$" << endl
		<< "$$$  $" << endl
		<< "$$$$$$" << endl
		<< "$  $$$" << endl
		<< "$$$$$$" << endl << endl;

		break;
	case 3: cout 
		<< "$$$$$$" << endl
		<< "$$$$ $" << endl
		<< "$$  $$" << endl
		<< "$ $$$$" << endl
		<< "$$$$$$" << endl << endl;
		break;
	case 4: cout 
		<< "$$$$$$" << endl
		<< "$ $$ $" << endl
		<< "$$$$$$" << endl
		<< "$ $$ $" << endl
		<< "$$$$$$" << endl << endl;
		break;
	case 5: cout 
		<< "$$$$$$" << endl
		<< "$ $$ $" << endl
		<< "$$  $$" << endl
		<< "$ $$ $" << endl
		<< "$$$$$$" << endl << endl;
		break;
	case 6: cout 
		<< "$$$$$$" << endl
		<< "$ $$ $" << endl
		<< "$ $$ $" << endl
		<< "$ $$ $" << endl
		<< "$$$$$$" << endl << endl;
		break;
	}
}


int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	StartGame();
	system("pause");
	return 0;
}








