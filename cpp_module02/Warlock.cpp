# include "Warlock.hpp"

Warlock::Warlock (const std::string &_name, const std::string &_title) 
	: name(_name), title(_title)
{
	std::cout << name << ": This looks like another boring day." << std::endl;
}

const std::string& Warlock::getName () const {
	return (name);
}

const std::string& Warlock::getTitle () const {
	return (title);
}

void Warlock::setTitle (const std::string& _title) {
	title = _title;
}

Warlock::~Warlock () {
	std::cout << name << ": My job here is done!" << std::endl;
}

void Warlock::introduce() const {
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void Warlock::learnSpell (ASpell* lSpell) {
	book.learnSpell(lSpell);
}

void Warlock::forgetSpell (std::string name) {
	book.forgetSpell(name);
}

void Warlock::launchSpell (std::string name, const ATarget& target) {
	ASpell* spell = book.createSpell(name);
	if (spell)
		spell->launch(target);
}