#pragma once
#include"BaseValidator.h"
#include<iostream>
#include<string>

using namespace std;

class YearValidator : public BaseValidator {
private:
	int year;
public:
	YearValidator(int year);
	bool Validate();
};

class ModelValidator :public BaseValidator {
private:
	string model;
public:
	ModelValidator(string model);
	bool Validate();
};

class NameValidator :public BaseValidator {
private:
	string name;
public:
	NameValidator(string name);
	bool Validate();
};

class CapacityValidator : public BaseValidator {
private:
	int capacity;
public:
	CapacityValidator(int capacity);
	bool Validate();
};

