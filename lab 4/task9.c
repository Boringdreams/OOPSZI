#include "Header.h"

int main()
{
	setlocale(LC_ALL, "Rus");
	while (1)
	{
		system("cls");
		printf("Введите номер действия:\n2 - Задание 2\n3 - Задание 3\n7 - Задание 7\n8 - Задание 8\n0 - Выход\n\n");
		switch (_getch())
		{
		case '2':
			system("cls");
			printf("Задание 2:\n");
			task2();
			_getch();
			break;
		case '3':
			system("cls");
			printf("Задание 3:\n");
			task3();
			_getch();
			break;
		case '7':
			system("cls");
			printf("Задание 7:\n");
			task7();
			_getch();
			break;
		case '8':
			system("cls");
			printf("Задание 8:\n");
			task8();
			_getch();
			break;
		case '0':
			return 0;
			break;
		default:
			system("cls");
			printf("Неверный ввод\n");
			_getch();
			break;
		}
	}
}
