#pragma once

#include <iostream>
#include <map>
#include <algorithm>
#include <iterator>

typedef std::string s;
// typedef std::map<s, ASpell *> map;

class   Warlock
{
	private:
		s	name;
		s	title;
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
};