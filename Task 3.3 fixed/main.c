#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    SetConsoleOutputCP(1251);
    double x,e,y,addend,prevy,function;
    int r=1;
    printf("Task 3.3\n");
    printf("Введите аргумент функции(sin(x)) и погрешность вычислений\n");
    printf("\"Аргумент\" \"Погрешность\"\n");
    scanf("%lf %lf",&x,&e);
    function=sin(x);
    addend=x;
    y=x;
    do
    {
        addend=(-1)*addend*x*x/((r+1)*(r+2));
        prevy=y;
        y=y+addend;
        r=r+2;
    }while(fabs(y-prevy)>e);
    printf("sin(x)=%.15lf, Ряд Маклорена=%.15lf\n",function,y);
    return 0;
}
