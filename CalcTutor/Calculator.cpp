#include "Calculator.h"

double Calculator::Calculate(double x, char oper, double y) //Calculate - функци€, котора€ использу€ входные данные возвращает число
{
    switch (oper) //оператор выбора
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    default:
        return 0.0;
    }
}
