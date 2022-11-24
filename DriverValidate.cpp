#include "DriverValidate.h"

CodeValidate::CodeValidate(string code)
{
	this->code = code;
}

bool CodeValidate::Validate()
{
	ListFactoryProvider factoryProvider;
	AListFactory* listfactory = factoryProvider.GetListFactory();
	auto driverlist = listfactory->GetDriverList();
	if (driverlist->isCodeExist(code)) {
		return false;
	}
	return BaseValidator::Validate();
}

NameValidate::NameValidate(string name)
{
	this->name = name;
}

bool NameValidate::Validate()
{
	if (name.length() <= 0)
		return false;
	return BaseValidator::Validate();
}

ExperienceValidate::ExperienceValidate(int experience)
{
	this->experience = experience;
}

bool ExperienceValidate::Validate()
{
	if (experience < 0)
		return false;
	return BaseValidator::Validate();
}

LastNameValidate::LastNameValidate(string lastname)
{
	this->lastname = lastname;
}

bool LastNameValidate::Validate()
{
	if (lastname.length() <= 0)
		return false;
	return BaseValidator::Validate();
}
