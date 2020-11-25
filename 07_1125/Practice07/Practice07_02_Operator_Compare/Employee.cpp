
#include <iostream>

#include "Employee.h"

Employee::Employee( POST post_, int sarary_ ) :post( post_ ), salary( sarary_ ){

}

void Employee::ShowPost(){

	switch( post )
	{
	case Employee::STAFF:			std::cout << "社員" << std::endl;break;
	case Employee::SECTION_CHIEF:	std::cout << "課長" << std::endl;break;
	case Employee::MANAGER:			std::cout << "部長" << std::endl;break;
	case Employee::PRESIDENT:		std::cout << "社長" << std::endl;break;
	}

}

Employee::POST Employee::GetPost()const{
	return post;
}

bool Employee::operator >( const Employee& emp )const {

	if( post > emp.GetPost() ){
		return true;
	}
	return false;
}
