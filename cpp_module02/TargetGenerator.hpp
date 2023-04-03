# pragma once

#include "ATarget.hpp"
#include <map>

class TargetGenerator {
	private:
		std::map<std::string, ATarget*> arr_target;
	public:
		TargetGenerator ();
		~TargetGenerator ();
		
		void	learnTargetType(ATarget* lTarget);
		void	forgetTargetType(std::string const &fTarget);
		ATarget* createTarget(std::string const &cTarget);
};