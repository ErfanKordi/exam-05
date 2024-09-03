#include <iostream>

class Warlock
{
	private:
		std::string _name;
		std::string _title;
		Warlock();
		Warlock(Warlock const & obj);
		Warlock & operator=(Warlock const & obj);
	public:
		std::string const & getName() const;
		std::string const & getTitle() const;
		void setTitle(std::string const & title);
		Warlock(std::string name, std::string title);
		~Warlock();
		void introduce() const;
};