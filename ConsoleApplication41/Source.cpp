#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
#include <time.h>
#include <string.h>

using namespace std;

unsigned short int q;

void main()

{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	unsigned short int nz;

	do
	{
		cout << "Введите номер задания: ";
		cin >> nz;
		switch (nz)
		{
		case 1:
		{
			cout << "1.	Составить программу, которая: " << endl
				<< "a.запрашивает имя человека и повторяет его на экране;" << endl
				<< "b.запрашивает имя человека и повторяет его на экране с приветствием.\n\n";
			char name[20];
			printf("enter ur name: ");
			scanf("%s", name);
			printf("ur name is %s\n\n", name);

			printf("enter ur name again: ");
			scanf("%s", name);
			printf("hi, %s \n", name);
		}break;

		case 2:
		{
			cout << "Составить программу, которая запрашивает название футбольной команды" << endl
				<< "и повторяет его на экране со словами \"— это чемпион!\".\n\n";
			char teamName[30];
			printf("enter the name of the football team: ");
			scanf("%s", teamName);
			printf("%s is a champion! \n", teamName);
		}break;

		case 3:
		{
			cout << "Составить программу, которая запрашивает отдельно имя и отдельно" << endl
				<< "фамилию, а затем выводит их как одну символьную строку.\n\n";
			char name[30], surname[20];
			printf("enter ur name: ");
			scanf("%s", name);
			printf("enter ur surname: ");
			scanf("%s", surname);
			strcat(name, surname);
			printf("result: %s \n\n", name);
		}break;

		case 4:
		{
			cout << "Составить программу, которая запрашивает название государства и " << endl
				<< "его столицы, а затем выводит сообщение: Столица государства ... —" << endl
				<< "город ...(на месте многоточий должны быть выведены соответствующие " << endl
				<< "значения).\n\n";
			char country[20], capital[20];
			printf("enter country name: ");
			scanf("%s", country);
			printf("enter the name of the capital: ");
			scanf("%s", capital);
			printf("capital of the %s is %s: \n\n", country, capital);
		}break;

		case 5:
		{
			cout << "Дано название футбольного клуба. Определить количество символов в нем.\n\n";
			
			char footballClub[] = "manchester united";
			printf("%s\n", footballClub);
			printf("кол-во символов в названии: %d \n\n", strlen(footballClub));
		}break;

		case 6:
		{
			cout << "Дано название города. Определить, четно или нет количество символов в нем\n\n";
			char city[20];
			printf("enter the name of the city: ");
			scanf("%s", city);
			int lenght = strlen(city);
			if (lenght % 2 == 0)
				printf("кол-во символов четное\n\n");
			else printf("кол-во символов НЕ четное\n\n");
		}break;

		}


		cout << "Хотите продолжить 1/0?";
		cin >> q;


		switch (q)
		{
		case 1:
			system("cls");
			break;
		default:
			cout << "ошибка" << endl;
		}
	} while (nz > 0);


}