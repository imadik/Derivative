#ifndef DERIVATIVE_H
#define DERIVATIVE_H

#include <string>
#include <vector>
#include <algorithm>

struct Members;

class Derivative
{
public:
    Derivative();
    std::string derivative(std::string polynomial);
    //скрываем всё не нужное
private:
    std::vector<Members> parseString(std::string polynomial);
    std::vector<Members> simplification(std::vector<Members>);
    std::vector<Members> derivativation(std::vector<Members>);
    std::string generationOutputString(std::vector<Members>);
};

/*
 * Структура в которой содержится множитель и степень, вектора таких структур будет достаточно для хранения
 * информации о входных и выходных многочленах
 * можно также использовать списки
 */
struct Members
{
    Members(){factor = 0; power = 0;}
    int factor;
    int power;
//перегрузка операторов сравнения, необходимых для использования в векторах
    bool operator< (const Members rh)
    {
        return ((this-> power) < (rh.power));
    }
    bool operator== (const Members rh)
    {
        return ((this-> power) == (rh.power));
    }

};

#endif // DERIVATIVE_H
