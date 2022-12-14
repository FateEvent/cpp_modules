#include "HumanB.hpp"
/*
HumanB::HumanB( std::string name ) : _name(name), _weapon("no arm provided")
{

}
*/
HumanB::HumanB( std::string name ) : _name(name), _weapon(nullptr)
{

}


void	HumanB::setWeapon( Weapon & weapon )
{
	_weapon = &weapon;
}

/*
void	HumanB::attack( void )
{
	if (_weapon.getType() != "no arm provided")
		std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
	else
		std::cout << _name << " cries: \"Don't shoot!\"" << std::endl;
}
*/

void	HumanB::attack( void )
{
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " cries: \"Please, don't hit me!\"" << std::endl;
}
