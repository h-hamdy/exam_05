#pragma once

# include "ATarget.hpp"

class ATarget;

class ASpell {
	private:
		std::string name;
		std::string effects;
	public:

		ASpell (const std::string &_name, const std::string &_effects);

		virtual ~ASpell () {};

		const std::string & getName () const;

		const std::string & getEffects () const;

		virtual ASpell* clone () const = 0;

		void launch (const ATarget& t) const;
};