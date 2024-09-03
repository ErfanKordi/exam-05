#include "Warlock.hpp"
#include <iostream>

Warlock::Warlock(std::string name, std::string title): _name(name), _title(title)
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock()
{
}
Warlock::Warlock(Warlock const & obj)
{
	*this = obj;
}

Warlock & Warlock::operator=(Warlock const & obj)
{	this->_name = obj._name;
	this->_title = obj._title;
	return *this;
}

Warlock::~Warlock()
{
	std::cout << _name << ": My job here is done!" << std::endl;
}

const std::string & Warlock::getName() const
{
	return (_name);
}
const std::string & Warlock::getTitle() const
{
	return (_title);
}

void Warlock::setTitle(std::string const &str)
{
	this->_title = str;
}

void	Warlock::introduce() const
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}