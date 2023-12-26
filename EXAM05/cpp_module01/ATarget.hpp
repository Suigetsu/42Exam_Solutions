#pragma once

#include "Warlock.hpp"
#include "ASpell.hpp"

typedef std::string s;

class	ASpell;

class	ATarget
{
	protected:
		s	type;
	public:
		ATarget();
		ATarget(const ATarget &obj);
		ATarget(const s &type);
		ATarget	&operator=(const ATarget &obj);
		virtual ~ATarget();
		virtual ATarget	*clone() const = 0;
		const s	&getType() const;
		void	getHitBySpell(const ASpell &spell) const;
};