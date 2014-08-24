#pragma once 
#include "core/StdLibInclude.h"
#include "utils/MetaObject.h"

using namespace cptf;

class TestObject : public MetaObject<TestObject>
{
public:
	TestObject(){
		INVOKE(L"name", TestObject::name, TestObject::setName);
	}
	~TestObject(){

	}

	wstring		name(){ return name_; }
	void		setName(const wstring& val){ name_ = val; }

	long		id(){ return id_; }
	void		setId(const long& val){ id_ = val; }

private:
	wstring		name_;
	long		id_;
};

TEST(TestObject, propertyTest)
{
	wstring comparedStr(L"1234");
	TestObject obj;
	obj.setProperty(L"name", comparedStr);
	//wstring name = obj.getProperty(L"name");
	//EXPECT_EQ(name, comparedStr);
}
