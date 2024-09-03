#include "ASpell.hpp"

ASpell::~ASpell(){}
ASpell::ASpell(ASpell const & obj)
{
	*this = obj;
}
ASpell::ASpell(std::string name, std::string effects):_name(name), _effects(effects)
{}
ASpell & ASpell::operator=(ASpell const & obj)
{
	this->_name = obj._name;
	this->_effects = obj._effects;
	return *this;
}

std::string ASpell::getName() const
{
	return (_name);
}

std::string ASpell::getEffects() const
{
	return (_effects);
}

void ASpell::launch(ATarget const & obj) const
{
	obj.getHitBySpell(*this);
}