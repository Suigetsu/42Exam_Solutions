#pragma once

#include "ASpell.hpp"

typedef std::string s;

class	Fwoosh : public ASpell
{
	public:
		Fwoosh();
		~Fwoosh();
		Fwoosh	*clone() const;
};