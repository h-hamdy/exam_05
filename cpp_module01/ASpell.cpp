# include "ASpell.hpp"

ASpell::ASpell (const std::string &_name, const std::string &_effects)
	: name(_name), effects(_effects) {}

const std::string & ASpell::getName () const {
	return (name);
}

const std::string & ASpell::getEffects () const {
	return (effects);
}

void ASpell::launch (const ATarget& t) const {
	t.getHitBySpell(*this);
}