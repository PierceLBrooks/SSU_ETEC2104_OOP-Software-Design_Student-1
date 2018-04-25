// Author: You!

#ifndef YOU_HPP
#define YOU_HPP

#include <Foo.hpp>
#include <ostream>

std::ostream& operator<<(std::ostream& out, Foo& bar)
{
	return out << bar.getBar() << std::endl; 
}

#endif // YOU_HPP
