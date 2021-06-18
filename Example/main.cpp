#include "TinyCppTest.hpp"

int main (int, char*[])
{
	if (!TinyCppTest::RunTests ()) {
		return 1;
	}
	return 0;
}
