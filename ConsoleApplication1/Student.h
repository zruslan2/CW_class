#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>
#include <iostream>

using namespace std;

class Student
{
private:
	string name;
	int age;
	int grades[5];
public:
	//mutators
	void setName(const string&name)
	{
		this->name = name;
	}

	void setAge(const int&age)
	{
		this->age = age;
	}
	//accessors
	string getName()
	{
		return name;
	}
	int getAge()
	{
		return age;
	}

	void set(const string &name, const int &age)
	{
		this->name = name;
		this->age = age;
	}
	void print()
	{
		cout << name << "\t" << age << "\t";
	}
};

class counter
{
public:
	void increment(const int&value, const int&minValue, const int&maxValue)
	{
		if (this->value < this->maxVal)
			this->value++;
		else
			this->value = this->minVal;
	}

	void setMaxValue(const int&maxValue)
	{
		this->maxVal = maxValue;
	}
	

private:
	int value;
	const int minVal=0;
	int maxVal;
};

#endif



