#include "Student.h"

STUDENT::STUDENT(string ID, string fullName, double GPA, string phoneNumber,
	string emailAddress, DATE DOB, string homeAddress)
{
	_ID = ID;
	_fullName = fullName;
	_GPA = GPA;
	_phoneNumber = phoneNumber;
	_emailAddress = emailAddress;
	_DOB = DOB;
	_homeAddress = homeAddress;
}

void STUDENT::setStudentDOB(DATE DOB)
{
	this->_DOB.day = DOB.day;
	this->_DOB.month = DOB.month;
	this->_DOB.year = DOB.year;
}