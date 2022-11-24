#include"BaseValidator.h"

AValidator* BaseValidator::setNext(AValidator* next)
{
	this->next = next;
	return next;
}

bool BaseValidator::Validate()
{
	if (next != nullptr)
		return next->Validate();
	return true;
}
