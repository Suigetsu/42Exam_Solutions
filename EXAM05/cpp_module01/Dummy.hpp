#pragma once

#include "ATarget.hpp"

typedef std::string s;

class	Dummy : public ATarget
{
	public:
		Dummy();
		~Dummy();
		Dummy	*clone() const;
};