#include "gmock/gmock.h"

#include "example.h"
#include <example.cpp>

using namespace testing;

namespace foobar::tests
{
	TEST(ExampleTests, Example)
	{

		ASSERT_THAT(distancia(-2, 6, -5, 2), Eq(5)); //bool=1= La dist es positiva
													//bool=0= la dist es negativa, error.


	}

	TEST(ErrorDeResultado, Example)
	{

		ASSERT_THAT(distancia(5, 10, 3, 8), Eq(10)); //bool=1= El resultado es correcto
													//bool=0= El resultado es incorrecto, error.


	}


}
