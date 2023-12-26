#pragma once

#include "Warlock.hpp"
#include "ATarget.hpp"

typedef std::string s;

class	ATarget;

class	ASpell
{
	protected:
		s	name;
		s	effects;
	public:
		ASpell();
		ASpell(const ASpell &obj);
		ASpell(const s &name, const s &effects);
		ASpell	&operator=(const ASpell &obj);
		virtual ~ASpell();
		virtual ASpell	*clone() const = 0;
		const s	&getName() const;
		const s	&getEffects() const;
		void	launch(const ATarget &target) const;
};