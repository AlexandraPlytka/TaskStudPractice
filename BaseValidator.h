#pragma once
#include"AValidator.h"
class BaseValidator : public AValidator {
private:
	AValidator* next;
public:
	BaseValidator() {
		next = nullptr;
	}
	AValidator* setNext(AValidator* next);
	bool Validate();
};