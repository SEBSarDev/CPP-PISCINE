#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP
# include <iostream>
# include <stdint.h>

typedef struct s_Data
{
	std::string str;
	int a;
	float b;
	double c;
}				Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
