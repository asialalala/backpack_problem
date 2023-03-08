#include "item.hh"

int item::Number = 0;

item::item()
{
    Weight = 0;
    Cost = 0;
}

item::item(float weight, float cost)
{
    Weight = weight;
    Cost = cost;
    ++Number;
}

item::~item()
{
}

const float item::weight()
{
    return Weight;
}

const float item::cost()
{
    return Cost;
}

int item::number()
{
    return Number;
}