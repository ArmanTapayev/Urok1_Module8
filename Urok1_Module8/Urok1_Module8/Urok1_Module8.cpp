#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<string.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	int n;
	printf("В работе 15 заданий.\n"); 
	printf("Для завершения наберите 0.\n");
	do
	{
		
		printf("Введите номер задания.\n");		
		scanf("%d", &n);
		cin.get();
		switch (n)
		{
			case 1:
			{
				/*1. Составить программу, которая: 
					a.	запрашивает имя человека и повторяет его на экране; 
					b.	запрашивает имя человека и повторяет его на экране с приветствием.
				*/
				char name[20];

				printf("Введите Ваше имя, пожалуйста! ");
				gets_s(name);
				printf("%s", name);
				printf("\n");

				printf("Введите Ваше имя, пожалуйста! \n");
				fgets(name, 20, stdin);
				printf("Здравствуйте, %s\n", name);

				system("pause");
				system("cls");

			}break;

			case 2:
			{
				/*2. Составить программу, которая запрашивает название футбольной команды 
				и повторяет его на экране со словами "— это чемпион!".*/
				char team[20];

				printf("Введите название футбольной команды: ");
				gets_s(team);
				printf("%s - это чемпиоан!\n", team);

				system("pause");
				system("cls");

			}break;

			case 3:
			{
				/*3. Составить программу, которая запрашивает отдельно имя и отдельно фамилию, 
				а затем выводит их как одну символьную строку.*/
				char firstName[20], lastName[20];
				printf("Введите Ваше имя: ");
				gets_s(firstName);
				printf("Введите Вашу фамилию: ");
				gets_s(lastName);
				printf("%s\n", strcat(firstName, lastName));

				system("pause");
				system("cls");

			}break;

			case 4:
			{
				/*4. Составить программу, которая запрашивает название государства и его столицы,
				а затем выводит сообщение: "Столица государства ... — город ..." 
				(на месте многоточий должны быть выведены соответствующие значения).*/

				char country[20], capital[20];
				printf("Введите название государства: ");
				gets_s(country);
				printf("Введите название столицы: ");
				gets_s(capital);
				printf("Столица государства %s - город %s\n", country, capital);

				system("pause");
				system("cls");
			}break;

			case 5:
			{
				/*5. Дано название футбольного клуба. Определить количество символов в нем.*/
				char team[20];
				printf("Введите название футбольной команды: ");
				gets_s(team);
				printf("Количество символов в названии: %d\n", strlen(team));

				system("pause");
				system("cls");

			}break;

			case 6:
			{
				/*6. Дано название города. Определить, четно или нет количество символов в нем*/
				char city[20];
				printf("Введите название города: ");
				gets_s(city);
				if (strlen(city) % 2 == 0)
					printf("Количество символов четное.\n");
				else
					printf("Количество символов нечетное.\n");

				system("pause");
				system("cls");
			}break;

			case 7:
			{
				/*7. Даны две фамилии. Определить, какая из них длиннее.*/
				char lastName1[20], lastName2[20];
				printf("Введите первую фамилию: ");
				gets_s(lastName1);
				printf("Введите вторую фамилию: ");
				gets_s(lastName2);
				if (strlen(lastName1) > strlen(lastName2))
				if(strcmp(lastName1, lastName2)>0)
					printf("Первая фамилия длинее.\n");
				if(strcmp(lastName1, lastName2)<0)
					printf("Вторая фамилия длинее.\n");
				if (strcmp(lastName1, lastName2)==0)
					printf("Фамилии одинаковые.\n");

				system("pause");
				system("cls");
			}break;

			case 8:
			{
				/*8. Даны названия трех городов. Вывести на экран самое длинное и самое короткое название.*/
				char city1[20], city2[20], city3[20];

				printf("Введите название первого города: ");
				gets_s(city1);
				printf("Введите название второго города: ");
				gets_s(city2);
				printf("Введите название третьего города: ");
				gets_s(city3);

				if (strlen(city1) > strlen(city2) && strlen(city2) > strlen(city3))
					printf("Самое длинное название - %s, самое короткое название - %s\n", city1, city3);
				if (strlen(city1) > strlen(city3) && strlen(city3) > strlen(city2))
					printf("Самое длинное название - %s, самое короткое название - %s\n", city1, city2);
				if (strlen(city2) > strlen(city1) && strlen(city1) > strlen(city3))
					printf("Самое длинное название - %s, самое короткое название - %s\n", city2, city3);
				if (strlen(city2) > strlen(city3) && strlen(city3) > strlen(city1))
					printf("Самое длинное название - %s, самое короткое название - %s\n", city2, city1);
				if (strlen(city3) > strlen(city1) && strlen(city1) > strlen(city2))
					printf("Самое длинное название - %s, самое короткое название - %s\n", city3, city2);
				if (strlen(city3) > strlen(city2) && strlen(city2) > strlen(city1))
					printf("Самое длинное название - %s, самое короткое название - %s\n", city3, city1);

				system("pause");
				system("cls");
			}break;

			case 9:
			{
				/*9. Дано слово. Вывести на экран его третий символ*/

				char *word = (char*)malloc(20 * sizeof(char));

				printf("Введите слово: ");
				scanf("%s", word);
				//int len = strlen(word);

				printf("Третий символ слова: %c\n", *(word + 2));

				system("pause");
				system("cls");
			}break;

			case 10:
			{
				/*10. Введите массив символов из 12 элементов. Замените каждый символ- цифру на символ '!'*/
				//int k;
				char *word = (char*)malloc(12 * sizeof(char));
				printf("Необходимо заменить каждый символ-цифру на символ '!'");
				printf("Введите слово из 12 символов: ");
				scanf("%s", word);
				//int len = strlen(word);

				for (int i = 0; *(word + i)!= '\0'; i++)
				{
					if ((*(word + i) >= '0') && (*(word + i) <= '9')||(*(word + i) == '\0'))
						*(word + i) = '!';
				}

				printf("Измененное слово: %s\n", word);
				system("pause");
				system("cls");
			}break;

			case 11:
			{
				/*11. Дана матрица символов размером 2×6. Сколько раз среди данных символов встречаются символы +, -, *.*/
				
				unsigned char ch;
				//char *word = (char*)malloc(255 * sizeof(char));
				/*printf("Необходимо заменить каждый символ-цифру на символ '!'");
				printf("Введите слово из 12 символов: ");*/
				/*scanf("%s", word);*/
				//int len = strlen(word);

				for (int i = 0; i<256; i++)
				{
					ch = i;
					printf("Измененное слово: %d = %c\n",i, ch);
				}
				system("pause");
				system("cls");
			}break;

			case 12:
			{
				/*12. Введите массив символов из 15 элементов. Подсчитать количество гласных русских букв.*/
				unsigned char *word = (unsigned char*)malloc(15 * sizeof(unsigned char));
				printf("Необходимо подсчитать количество гласных русских букв");
				printf("Введите слово из 15 символов: ");
				scanf("%s", word);
				//int len = strlen(word);
				int count=0;
				for (int i = 0; *(word + i) != '\0'; i++)
				{
					if ((*(word + i) == 128) || (*(word + i) == 160) || (*(word + i) == 133) || (*(word + i) == 165)
					 || (*(word + i) == 136) || (*(word + i) == 168) || (*(word + i) == 142) || (*(word + i) == 174)
					 || (*(word + i) == 147) || (*(word + i) == 227) || (*(word + i) == 155) || (*(word + i) == 235)
					 || (*(word + i) == 157) || (*(word + i) == 237) || (*(word + i) == 158) || (*(word + i) == 238)
					 || (*(word + i) == 159) || (*(word + i) == 239))
						
					 count++;
				}

				printf("Количество гласных русских букв: %d\n", count);
				system("pause");
				system("cls");
			}break;

			case 13:
			{
				/*13. Дан массив символов, среди которых есть символ двоеточие ‘:’. Определить, сколько символов ему предшествует.*/
				char *word = (char*)malloc(10 * sizeof(char));
				printf("Необходимо определить, сколько символов ему предшествует символу двоеточие ‘:’\n");
				printf("Введите массив символов: \n");
				scanf("%s", word);
				int len = strlen(word);
				int count = 0;
				for (int i = 0; i<len; i++)
				{
					count++;
					if (*(word + i) == ':')
						break;
				}

				printf("Количество символов: %d\n", count-1);
				system("pause");
				system("cls");
			}break;

			case 14:
			{
				/*14. Дан массив символов. Определить, сколько раз входит в него группа букв abc.*/
			}break;

			case 15:
			{
				/*15. Заданы две строки. Построить новую строку, состоящую из символов, которые входят в первую строку, но не входят во вторую.*/

			}break;

		}
	} while (n != 0);

}