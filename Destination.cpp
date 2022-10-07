#include"Destination.h"

Destination::Destination(string From, string To) {
	cityFrom = From;
	cityTo = To;
}

string Destination::getCityFrom()
{
	return cityFrom;
}

string Destination::getCityTo()
{
	return cityTo;
}

void Destination::writeToConsole()
{
	cout << cityFrom << "->" << cityTo << endl;
}

Destination Destination::operator+(Destination a)
{
	return Destination(cityFrom, a.cityTo);
}

void Destination::operator=(Destination c)
{
	cityFrom = c.cityFrom;
	cityTo = c.cityTo;
}

ostream& operator<<(ostream& out, const Destination& c)
{
	out << c.cityFrom << " ";
	out << c.cityTo << endl;
	return out;
}

istream& operator>>(istream& in, Destination& c)
{
	cout << "Enter city From ";
	in >> c.cityFrom;
	cout << "Enter city To ";
	in >> c.cityTo;
	return in;
}
