#include "Listing.h"

Advertisement * Listing::operator[](const int &number)
{
	for (iterator it = objects.begin(); it != objects.end(); it++){
		if ( (*it)->getNumber() == number ) return (*it);
	}
	cerr<<"No advertisement"<<endl;
	return NULL;
}

void Listing::add(Advertisement* ptr)
{
	objects.push_back(ptr);
}

Listing::iterator Listing::begin()
{
	return objects.begin();
}

Listing::iterator Listing::end()
{
	return objects.end();
}