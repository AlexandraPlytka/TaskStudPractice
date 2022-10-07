#pragma once
#include<iostream>
using namespace std;

class Destination {
protected:
	string cityFrom;
	string cityTo;
public:
	Destination(string From="", string To= "");
	string getCityFrom();
	string getCityTo();
	void writeToConsole();
	friend ostream& operator << (ostream& out, const Destination& c);
	friend istream& operator >> (istream& in, Destination& c);
	Destination operator+(Destination a);
	void operator=(Destination c);
};