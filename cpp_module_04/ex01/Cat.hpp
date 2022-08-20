#ifndef CAT_H
# define CAT_H

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
public:
	Cat( void );
	Cat( const Cat &other );
	~Cat( void );
	Cat &			operator = ( const Cat &other );
	virtual void	makeSound( void ) const;

private:
	Brain			*_brain;
};

#endif
