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
	if (lSpell)
		arr.insert(std::pair<std::string, ASpell*>(lSpell->getName(), lSpell->clone()));
}

void Warlock::forgetSpell (std::string name) {
	std::map<std::string, ASpell*>::iterator it = arr.find(name);
	if (it == arr.end())
		delete it->second;
	arr.erase(name);
}

void Warlock::launchSpell (std::string name, const ATarget& target) {
	ASpell* spell = arr[name];
	if (spell)
		spell->launch(target);
}