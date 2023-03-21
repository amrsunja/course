#include "Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void Harl::complain(string level) {
	string levelKeys[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	harl_func_t funcs[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++) {
		if (level == levelKeys[i]) {
			(this->*funcs[i])();
			return ;
		}
	}
  std::cerr << "The input you wrote is sadly didn't match the complain list!!" << std::endl;
}

void Harl::debug(void) {
  cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << endl;
}

void Harl::info(void) {
	cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << endl;

}

void Harl::warning(void) {
	cout << "I think I deserve to have some extra bacon for free. I've been coming foryears whereas you started working here since last month." << endl;

}

void Harl::error(void) {
	cout << "This is unacceptable! I want to speak to the manager now." << endl;
}
