#include<stdio.h>

void (*fun1)(void);
void disp(void);

int add(int a, int b);
int sub(int a, int b);
int div(int a, int b);
int mul(int a, int b);
//comment added 
int main()
{
int res=0;
int (*op[4])(int n, int m)={add, sub, mul, div};

printf("\n welcome ");
// comment added
res=(*op[0])(5,6);

//for the develop branch

printf("res= %d\n",res);
printf("res= %d\n",res);

//for the develop branch
printf("good");

printf("\n hello");
printf("\n hello");
fun1=disp;
fun1();
return 0;
}

void disp(void)
{
  printf("disp fun\n");
}

int add(int a, int b)
{
  return a+b;
}

int sub(int a, int b)
{
  return a-b;
}

int mul(int a, int b)
{
  return a*b;
}

int div(int a, int b)
{
  return a/b;
}

