#include "Calculator.h"

double Calculator::Calculate(double x, char oper, double y) //Calculate - �������, ������� ��������� ������� ������ ���������� �����
{
    switch (oper) //�������� ������
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
