#pragma once
#include"BaseValidator.h"
#include<iostream>
#include"AListFactory.h"
using namespace std;

class CodeValidate :public BaseValidator {
	string code;
public:
	CodeValidate(string code);
	bool Validate();
};

class NameValidate :public BaseValidator {
	string name;
public:
	NameValidate(string name);
	bool Validate();
};

class ExperienceValidate : public BaseValidator {
	int experience;
public:
	ExperienceValidate(int experience);
	bool Validate();
};

class LastNameValidate : public BaseValidator {
	string lastname;
public:
	LastNameValidate(string lastname);
	bool Validate();
};