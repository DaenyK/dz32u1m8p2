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
		cout << "������� ����� �������: ";
		cin >> nz;
		switch (nz)
		{
		case 1:
		{
			cout << "1.	��������� ���������, �������: " << endl
				<< "a.����������� ��� �������� � ��������� ��� �� ������;" << endl
				<< "b.����������� ��� �������� � ��������� ��� �� ������ � ������������.\n\n";
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
			cout << "��������� ���������, ������� ����������� �������� ���������� �������" << endl
				<< "� ��������� ��� �� ������ �� ������� \"� ��� �������!\".\n\n";
			char teamName[30];
			printf("enter the name of the football team: ");
			scanf("%s", teamName);
			printf("%s is a champion! \n", teamName);
		}break;

		case 3:
		{
			cout << "��������� ���������, ������� ����������� �������� ��� � ��������" << endl
				<< "�������, � ����� ������� �� ��� ���� ���������� ������.\n\n";
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
			cout << "��������� ���������, ������� ����������� �������� ����������� � " << endl
				<< "��� �������, � ����� ������� ���������: ������� ����������� ... �" << endl
				<< "����� ...(�� ����� ���������� ������ ���� �������� ��������������� " << endl
				<< "��������).\n\n";
			char country[20], capital[20];
			printf("enter country name: ");
			scanf("%s", country);
			printf("enter the name of the capital: ");
			scanf("%s", capital);
			printf("capital of the %s is %s: \n\n", country, capital);
		}break;

		case 5:
		{
			cout << "���� �������� ����������� �����. ���������� ���������� �������� � ���.\n\n";
			
			char footballClub[] = "manchester united";
			printf("%s\n", footballClub);
			printf("���-�� �������� � ��������: %d \n\n", strlen(footballClub));
		}break;

		case 6:
		{
			cout << "���� �������� ������. ����������, ����� ��� ��� ���������� �������� � ���\n\n";
			char city[20];
			printf("enter the name of the city: ");
			scanf("%s", city);
			int lenght = strlen(city);
			if (lenght % 2 == 0)
				printf("���-�� �������� ������\n\n");
			else printf("���-�� �������� �� ������\n\n");
		}break;

		}


		cout << "������ ���������� 1/0?";
		cin >> q;


		switch (q)
		{
		case 1:
			system("cls");
			break;
		default:
			cout << "������" << endl;
		}
	} while (nz > 0);


}