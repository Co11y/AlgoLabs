#include <stdio.h>
#include <stdlib.h>
typedef struct {
	char name[30];
	int players;
	int points;
	char city[30]
}information;

void add();
void del ();
void print();

int main(void)
{
	printf("1 - add new inf\n");
	printf("2 - delete\n");
	printf("3 - print list");
	int i = 0;
	do
	{
		scanf("%d", &i);
	} while (i < 1 && i>3);
	if (i == 1)
	{
		add();
	}
	else if (i == 2)
	{
		del();
	}
	else
	{
		print();
	}
}

void add()
{
	FILE *f = fopen("information.txt", "a");
	information tmp;
	printf("Name: ");
	scanf("%s", tmp.name);
	printf("Players: ");
	scanf("%d", &tmp.players);
	printf("Points: ");
	scanf("%d", tmp.points);
	printf("City: ");
	scanf("%s", tmp.city);
	fwrite(&tmp, sizeof(information), 1, f);
}
void del()
{
	FILE *buffer = fopen("buffer.txt", "w");
	FILE *f;
	if ((f = fopen("information.txt", "r")) == NULL)
	{
		printf("inf not found\n");
	}
	else
	{

		information inf;
		printf("what element you want delete: ");
		int e;
		scanf("%d", &e);
		int i = 1;
			while (fread(&inf, sizeof(information), 1, f) == 1)
		{
			if (i != e)
			{
				fwrite(&inf, sizeof(information), 1, buffer);
			}
			i++;
		}
		remove("information.txt");
		fclose(buffer);
		fclose(f);
		FILE *f = fopen("information.txt", "a");
		FILE *buffer = fopen("buffer.txt", "r");
		while (fread(&inf, sizeof(information), 1, buffer) == 1)
		{
			fwrite(&inf, sizeof(information), 1, f);
		}
		remove("buffer.txt");
	}
}
void print()
{
	FILE *f;
	if ((f = fopen("information.txt", "r")) == NULL)
	{
		printf("inf not found\n");
	}
	else
	{
		information list;
		int i = 1;
		while (fread(&list, sizeof(information), 1, f) == 1)
		{
			printf("inf number: %i\n", i);
			printf("Name %s\n", list.name);
			printf("City %s\n", list.city);
			printf("points: %d\n", list.points);
			printf("players: %d\n\n", list.players);
			i++;
		}
	}
}
