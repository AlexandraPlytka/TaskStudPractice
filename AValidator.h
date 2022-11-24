#pragma once
class AValidator {
public:
	virtual AValidator* setNext(AValidator*) = 0;
	virtual bool Validate() = 0;
};