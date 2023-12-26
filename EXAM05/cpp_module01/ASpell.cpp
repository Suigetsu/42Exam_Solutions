#include "ASpell.hpp"

ASpell::ASpell()
{

}

ASpell::ASpell(const ASpell &obj)
{
	*this = obj;
}

ASpell::ASpell(const s &name, const s &effects) : name(name), effects(effects)
{

}

ASpell	&ASpell::operator=(const ASpell &obj)
{
	this->name = obj.name;
	this->effects = obj.effects;
	return (*this);
}

ASpell::~ASpell()
{

}

const s	&ASpell::getName() const
{
	return (this->name);
}

const s	&ASpell::getEffects() const
{
	return (this->effects);
}

void	ASpell::launch(const ATarget &target) const
{
	target.getHitBySpell(*this);
}
