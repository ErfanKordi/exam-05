#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title):_name(name), _title(title)
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock()
{
}

Warlock::~Warlock()
{
	std::cout << _name << ": My job here is done." << std::endl;
}

Warlock::Warlock(Warlock const &obj)
{
	*this = obj;
}

Warlock & Warlock::operator=(Warlock const & obj)
{
	_name = obj._name;
	_title = obj._title;
	return *this;
}

std::string const & Warlock::getName() const
{
	return _name;
}

std::string const & Warlock::getTitle() const
{
	return _title;
}

void Warlock::setTitle(std::string const & title)
{
	this->_title = title;
}

void Warlock::introduce() const
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell)
{
	if (spell)
		if(_spellBook.find(spell->getName()) == _spellBook.end())
			_spellBook[spell->getName()] = spell->clone();
}

void Warlock::forgetSpell(std::string spell)
{
	if (_spellBook.find(spell) != _spellBook.end())
		_spellBook.erase(_spellBook.find(spell));
}

void Warlock::launchSpell(std::string spellName, ATarget &target)
{
	if (_spellBook.find(spellName) != _spellBook.end())
		_spellBook[spellName]->launch(target);
}