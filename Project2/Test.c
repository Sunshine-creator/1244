#include<stdio.h>
#include<math.h>
#include<windows.h>
#pragma warning(disable :4996)
#if 0


                             //��һ�������������б��
float area(int a, int b)
{
	float z;
	z = (a * b) >> 1;
	return z;
}
float length(int a, int b)
{
	float z;
	z = sqrt(a * a + b * b);
	return z;
}
float f(int a, int b,float( *p) ( ))    /*ͨ���β�p�õ�ʵ�������ò�ͬ�ĺ���*/
{
	float y;
	y = (*p) (a, b);
	return (y);
}
int main()
{
	int m, n;
	float s, l;
	float (*q) (); /* ����ָ�����q*/
	float area(int a, int b), length(int a, int b);
	float f(int a, int b, float (*p) ()); /*�к���ָ���βεĺ�������*/
	scanf(" %d  %d", &m, &n);  /* ����������*/
	q = area;           /*�����������q*/
	s = f(m,n,q);     /*ͨ��f�����*/
	l = f(m, n, length);/*��������Ϊʵ�Σ�ͨ��f��б�߳�*/
	printf(" Area of the right triangle is %.2f\n", s);
	printf("Length of the hypotenuse is %.2f\n", l);
}
#endif // 0
int main()
{
	int a[6] = { 12,2,45,6,89,565 };
	int i, * p;
	for (i = 0; i < 6; i++)
	{
		printf(" %4d", a[i]);  /*�±귨*/
	}
	putchar('\n');
	for (i = 0; i < 6; i++)
	{
		printf(" %4d",*(a+i)); /* ����ָ���±�*/
		
	}
	putchar('\n');
	p = a;
	for (i = 0; i < 6; i++)
	{
		printf(" %4d", p[i]);   /* ָ���±�*/
		
	}
	putchar('\n');
	for (p =a; p < a + 6; p++)
	{
		printf(" %4d",*p );   /* ָ�뷨*/
		
	}
	putchar('\n');
}