#pragma once

class Unit {
public:
    virtual int range() = 0;
    virtual double hp() = 0;
    virtual double damage() = 0;
    virtual double armor() = 0;
};
