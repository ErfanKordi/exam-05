#include "Warlock.hpp"

Warlock::Warlock()
{
}
Warlock::Warlock(std::string name, std::string title): _name(name), _title(title)
{

}

Warlock::Warlock(Warlock const &obj)
{
	*this = obj;
}

Warlock & Warlock::operator=(Warlock const &obj)
{
	this->_name = obj._name;
	this->_title = obj._title;
	return (*this);
}