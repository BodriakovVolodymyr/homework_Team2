#include "Publication.h"

Publication::Publication()
{
	name = "No info";
	author = "No info";
	year_of_publication = 0;
}

Publication::Publication(string name, string author, int year_of_publication)
{
	this->name = name;
	this->author = author;
	this->year_of_publication = year_of_publication;
}

Publication::~Publication()
{
}

string Publication::getName() const
{
	return name;
}

string Publication::getAuthor() const
{
	return author;
}

string Publication::getYear_of_publication() const
{
	return year_of_publication;
}

void Publication::setName(string name)
{
	this->name = name;
}

void Publication::setAuthor(string author)
{
	this->author = author;
}

void Publication::setYear_of_publication(int year_of_publication)
{
	this->year_of_publication = year_of_publication;
}
