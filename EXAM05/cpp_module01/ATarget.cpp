#include "ATarget.hpp"

ATarget::ATarget()
{

}

ATarget::ATarget(const ATarget &obj)
{
	*this = obj;
}

ATarget::ATarget(const s &type) : type(type)
{

}

ATarget	&ATarget::operator=(const ATarget &obj)
{
	this->type = obj.type;
	return (*this);
}

ATarget::~ATarget()
{

}

const s	&ATarget::getType() const
{
	return (this->type);
}

void	ATarget::getHitBySpell(const ASpell &spell) const
{
	std::cout << this->getType() << " has been " << spell.getEffects() << "!" << std::endl;
}