#include <QCoreApplication>
#include "derivative.h"
#include <vector>
#include <string>
#include <iostream>
#include <QTest>


// не забывать что входящую строку нужно помещать в "" иначе терминал посчитает символы ^ - началом новой строки
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::string str;
    // если у нас есть входящая строка, то обрабатываем её, нет, то дефолтную
    if (argc > 1)
        for (int i = 1; i < argc; i++)
            str += argv[i];
    else
        str = "-33*x^3+2*x^2-x+10";
    Derivative obj;
    std::cout << obj.derivative (str) << std::endl;

    return a.exec();
}
