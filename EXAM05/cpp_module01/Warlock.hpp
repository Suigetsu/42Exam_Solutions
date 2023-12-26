#pragma once

#include <iostream>
#include <map>
#include <algorithm>
#include <iterator>
#include "ASpell.hpp"
#include "ATarget.hpp"

typedef std::string s;
typedef std::map<s, ASpell *> map;

class   Warlock
{
	private:
		s	name;
		s	title;
		map	spellMap;
		Warlock();
		Warlock(const Warlock &obj);
		Warlock	&operator=(const Warlock &obj);
	public:
		Warlock(const s &name, const s &title);
		~Warlock();
		const s	&getName() const;
		const s	&getTitle() const;
		void	setTitle(const s &title);
		void	introduce() const;
		void	learnSpell(ASpell *spell);
		void	forgetSpell(s spellName);
		void	launchSpell(s spellName, const ATarget &target);
};