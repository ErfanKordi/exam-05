#pragma once
#include <iostream>

class SpellBook
{
    private:
        SpellBook(SpellBook const & obj);
        SpellBook & operator=(SpellBook const & obj);
    public:
        SpellBook();
        ~SpellBook();
};