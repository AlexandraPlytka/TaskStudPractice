#include "VehiclesValidate.h"

YearValidator::YearValidator(int year)
{
	this->year = year;
}

bool YearValidator::Validate()
{
	if (year < 0 || year>3000) {
		return false;
	}
	return BaseValidator::Validate();
}

ModelValidator::ModelValidator(string model)
{
	this->model = model;
}

bool ModelValidator::Validate()
{
	if (model.length()<0) {
		return false;
	}
	return BaseValidator::Validate();
}

NameValidator::NameValidator(string name){
	this->name = name;
}

bool NameValidator::Validate()
{	if (name.length() < 0) {
		return false;
	}
	return BaseValidator::Validate();
}

CapacityValidator::CapacityValidator(int capacity)
{
	this->capacity = capacity;
}

bool CapacityValidator::Validate()
{
	if (capacity < 0) {
		return false;
	}
	return BaseValidator::Validate();
}
