#pragma once

# include <iostream>
# include "ASpell.hpp"
# include <map>
# include "SpellBook.hpp"
# include "ATarget.hpp"

class ASpell;

class Warlock {
	private:
		std::string name;
		std::string title;

		
		SpellBook book;
	public:

		Warlock (const std::string &_name, const std::string &_title);

		~Warlock ();

		const std::string& getName () const;
		
		const std::string& getTitle () const;

		void setTitle (const std::string& _title);

		void introduce() const;

		void	learnSpell (ASpell* lSpell);
		void	forgetSpell (std::string name);
		void	launchSpell (std::string name, const ATarget& target);
};