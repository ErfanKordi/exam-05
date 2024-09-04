#pragma once
#include "ASpell.hpp"

class Polymorph : public ASpell
{
    Polymorph();
    ~Polymorph();
    ASpell * clone() const;
};