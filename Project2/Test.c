#include<stdio.h>
#include<math.h>
#include<windows.h>
#pragma warning(disable :4996)
#if 0


                             //求一个三角形面积和斜边
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
float f(int a, int b,float( *p) ( ))    /*通过形参p得到实参来调用不同的函数*/
{
	float y;
	y = (*p) (a, b);
	return (y);
}
int main()
{
	int m, n;
	float s, l;
	float (*q) (); /* 定义指针变量q*/
	float area(int a, int b), length(int a, int b);
	float f(int a, int b, float (*p) ()); /*有函数指针形参的函数声明*/
	scanf(" %d  %d", &m, &n);  /* 输入两条边*/
	q = area;           /*求面积，赋给q*/
	s = f(m,n,q);     /*通过f求面积*/
	l = f(m, n, length);/*函数名作为实参，通过f求斜边长*/
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
		printf(" %4d", a[i]);  /*下标法*/
	}
	putchar('\n');
	for (i = 0; i < 6; i++)
	{
		printf(" %4d",*(a+i)); /* 数组指针下标*/
		
	}
	putchar('\n');
	p = a;
	for (i = 0; i < 6; i++)
	{
		printf(" %4d", p[i]);   /* 指针下表*/
		
	}
	putchar('\n');
	for (p =a; p < a + 6; p++)
	{
		printf(" %4d",*p );   /* 指针法*/
		
	}
	putchar('\n');
}