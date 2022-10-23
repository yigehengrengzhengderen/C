#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//		return 0;
//
//	char arr[20] = { 0 };
//	fgets(arr, 20, pf);
//	fputs(arr,stdout);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

#define MAX 20
int main()
{
	char formal[20] = { 0 };
	char name[MAX] = { 0 };
	char age[5];
	fgets(name, MAX, stdin);
	fgets(age, 5, stdin);
	sprintf(formal, "%s %s", name, age);
	puts(formal);
	return 0;
}  
