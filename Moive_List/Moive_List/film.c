#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"List.h"

void ShowMovies(Item item);
char* s_gets(char* st, int n);

int main()
{
	List movies;
	Item tmp;

	InitialzeList(&movies);
	if (ListIsFull(&movies))
	{
		fprintf(stderr, "No memory available! Bye!\n");
		exit(1);
	}

	puts("Enter first movie title:");
	while (s_gets(tmp.title, TSIZE) != NULL && tmp.title[0] != '\0')
	{
		puts("Enter your rating <0-10>:");
		scanf("%d", &tmp.rating);

		while (getchar() != '\n')
			continue;

		if (AddItem(tmp, &movies) == false)
		{
			fprintf(stderr, "Problem allocating memory\n");
			break;
		}
		if (ListIsFull(&movies))
		{
			puts("The list is full\n");
			break;
		}
		puts("Enter next movies title (empty line is stop):");
	}

	if (ListIsEmpty(&movies))
		puts("No date entered.\n");
	else
	{
		puts("Here is the movies list:\n");
		Traverse(&movies, ShowMovies);
	}

	EmptyThelist(&movies);
	return 0;
}

void ShowMovies(Item item)
{
	printf("Movie: %s Rating: %d\n", item.title, item.rating);
}

char* s_gets(char* st, int n)
{
	char* ret_val;
	char* find;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}
