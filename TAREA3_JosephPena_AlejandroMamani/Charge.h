//
// Created by albin on 03/05/2019.
//

#ifndef TAREA3_JOSEPHPENA_ALEJANDROMAMANI_CHARGE_H
#define TAREA3_JOSEPHPENA_ALEJANDROMAMANI_CHARGE_H


#include <cmath>
//#include "Simulator.h"

class Simulator;
struct Position
{
    int x;
    int y;
    Position(int _x, int _y);
    inline bool operator == (Position &other) const;
    //    inline bool operator == (const Position &pos1, const Position &pos2);
};

class Charge
{
private:
    const double k = 8.99 * pow(10, 9);
    Position position;
    int charge;

public:
    friend class Simulator;
    Charge(Position position, int charge);
    double calculate_distance(Position target);
    double get_potential_on(Position target);
};

bool double_equals(double a, double b, double epsilon);
#endif //TAREA3_JOSEPHPENA_ALEJANDROMAMANI_CHARGE_H
