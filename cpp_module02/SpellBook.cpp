# include "SpellBook.hpp"


SpellBook::SpellBook() {}

SpellBook::~SpellBook() {
	std::map<std::string, ASpell*>::iterator it = arr_spell.begin();
	while (it != arr_spell.end()) {
		delete it->second;
		++it;
	}
	arr_spell.clear();
}

void	SpellBook::learnSpell(ASpell* lSpell) {
	if (lSpell)
		arr_spell.insert(std::pair<std::string, ASpell*>(lSpell->getName(), lSpell->clone()));
}

void	SpellBook::forgetSpell(std::string const &fSpell) {
	std::map<std::string, ASpell*>::iterator it = arr_spell.find(fSpell);
	if (it == arr_spell.end())
		delete it->second;
	arr_spell.erase(fSpell);
}

ASpell* SpellBook::createSpell(std::string const &cSpell) {
	std::map<std::string, ASpell*>::iterator it = arr_spell.find(cSpell);
	if (it != arr_spell.end())
		return arr_spell[cSpell];
	return NULL;
}
