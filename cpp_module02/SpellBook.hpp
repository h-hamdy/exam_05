# pragma once

#include "ASpell.hpp"
#include <map>

class SpellBook {
	private:
		std::map<std::string, ASpell*> arr_spell;
	public:
		SpellBook ();
		~SpellBook ();

		void	learnSpell(ASpell* lSpell);
		void	forgetSpell(std::string const &fSpell);
		ASpell* createSpell(std::string const &cSpell);
};