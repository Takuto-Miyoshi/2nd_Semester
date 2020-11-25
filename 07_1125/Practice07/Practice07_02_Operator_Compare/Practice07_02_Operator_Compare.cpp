
#include <iostream>

#include "Employee.h"

int main()
{

	Employee satou( Employee::POST::STAFF, 15 );
	Employee deguchi( Employee::POST::PRESIDENT, 140 );

	satou.ShowPost();
	deguchi.ShowPost();

	if( deguchi > satou ){
		std::cout << "degushiさんの方が偉い！！！！！！！！！！！！" << std::endl;
	}
	else{
		std::cout << "satouさんの方が偉いわけがない" << std::endl;
	}

	return 0;
}
