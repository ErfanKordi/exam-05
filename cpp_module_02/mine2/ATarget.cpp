#include "ATarget.hpp"

ATarget::~ATarget(){}
ATarget::ATarget(ATarget const & obj)
{
	*this = obj;
}
ATarget::ATarget(std::string type): _type(type)
{}
ATarget & ATarget::operator=(ATarget const & obj)
{
	this->_type  = obj._type ;
	return *this;
}

std::string ATarget::getType () const
{
	return (_type );
}

void ATarget::getHitBySpell(ASpell const & obj) const
{
	std::cout << _type << " has been " << obj.getEffects() << "!" << std::endl;
}
