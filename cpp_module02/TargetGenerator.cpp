# include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {
	std::map<std::string, ATarget*>::iterator it = arr_target.begin();
	while (it != arr_target.end()) {
		delete it->second;
		++it;
	}
	arr_target.clear();
}

void	TargetGenerator::learnTargetType(ATarget* lTarget) {
	if (lTarget)
		arr_target.insert(std::pair<std::string, ATarget*>(lTarget->getType(), lTarget->clone()));
}

void	TargetGenerator::forgetTargetType(std::string const &fSpell) {
	arr_target.erase(fSpell);
}

ATarget* TargetGenerator::createTarget(std::string const &cSpell) {
	std::map<std::string, ATarget*>::iterator it = arr_target.find(cSpell);
	if (it != arr_target.end())
		return arr_target[cSpell];
	return NULL;
}