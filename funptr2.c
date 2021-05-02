#include<stdio.h>

void fun1(){ printf("\n fun1");}
void fun2(){ printf("\n fun2");}

void funptr2(void (*fun)())
{
printf("welcome ");
fun();
}

void main()
{
printf("main");
printf("main222");
funptr2(fun1);
funptr2(fun2);
}
