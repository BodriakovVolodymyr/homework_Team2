#pragma once
#include <iostream>
#include<string>
using namespace std;

class Publication
{
protected:
	string name;
	string author;
	int year_of_publication;
public:
	Publication();
	Publication(string name, string author, int year_of_publication);
	virtual ~Publication();

	string getName()const;
	string getAuthor()const;
	string getYear_of_publication()const;

	void setName(string name);
	void setAuthor(string author);
	void setYear_of_publication(int year_of_publication);

	virtual void form_description() = 0;
};