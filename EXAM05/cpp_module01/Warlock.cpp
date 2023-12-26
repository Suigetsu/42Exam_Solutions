#include "Warlock.hpp"

Warlock::Warlock(const s &name, const s &title) : name(name), title(title)
{
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << this->name << ": My job here is done!" << std::endl;
}

const s	&Warlock::getName() const
{
	return (this->name);
}

const s	&Warlock::getTitle() const
{
	return (this->title);
}

void	Warlock::setTitle(const s &title)
{
	this->title = title;
}

void	Warlock::introduce() const
{
	std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!" <<std::endl;
}

void	Warlock::learnSpell(ASpell *spell)
{
	this->spellMap.insert(std::pair<s, ASpell*>(spell->getName(), spell->clone()));
}

void	Warlock::forgetSpell(s spellName)
{
	map::iterator	mapIt = this->spellMap.find(spellName);
	if (mapIt != this->spellMap.end())
		delete mapIt->second;
	this->spellMap.erase(spellName);
}

void	Warlock::launchSpell(s spellName, const ATarget &target)
{
	ASpell *launchedSpell = this->spellMap[spellName];
	if (launchedSpell)
		target.getHitBySpell(*launchedSpell);
}
