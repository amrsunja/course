#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

using namespace std;

class Harl {
	public:
		Harl();
		~Harl();

		void complain(string level);

	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

typedef void (Harl::*harl_func_t) (void);

#endif
