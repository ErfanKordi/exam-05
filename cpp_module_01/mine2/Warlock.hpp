#include <iostream>
#include "ASpell.hpp"
#include <map>


class Warlock
{
	private:
		std::string _name;
		std::string _title;
		Warlock();
		Warlock(Warlock const & obj);
		Warlock & operator=(Warlock const & obj);
		std::map <std::string, ASpell *> _spellBook;

	public:
		std::string const & getName() const;
		std::string const & getTitle() const;
		void setTitle(std::string const & title);
		Warlock(std::string name, std::string title);
		~Warlock();
		void introduce() const;
		void learnSpell(ASpell * spell);
		void forgetSpell(std::string spell);
		void launchSpell(std::string spellName, ATarget &target);
};