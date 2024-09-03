#include <iostream>

class Warlock
{
  private:
	std::string _name;
	std::string _title;
	Warlock();
	Warlock(Warlock const &obj);
	Warlock &operator=(Warlock const &obj);

  public:
	Warlock(std::string name, std::string title);
	~Warlock();
	const std::string &getName() const;
	const std::string &getTitle() const;
	void setTitle(std::string const &str);
	void introduce() const;
};