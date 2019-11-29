#include<stdio.h>
#include<windows.h>
# pragma warning (disable :4996)
int main()
{
	int i, flag;
	int compstr(char, char);
	char str1[80], str2[80];
	gets(str1);
	grts(str2);
	i = 0;
	do {
		flag = compstr(str1[i], str2[i]);
		i++;
	} while ((str1[i] != '\0') && (str2[i] != '\0') && (flag == 0));
	if (flag == 0)
		printf(" %s = %s", str1, str2);
	else if (flag > 0)
		printf(" %s > %s", str1, str2);
	else
		printf(" %s < %s", str1, str2);
}
int compstr(char c1, char c2)
{
	int t;
	t = c1 - c2;
	return t;
}