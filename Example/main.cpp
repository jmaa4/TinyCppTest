#include "TinyCppTest.hpp"

int main (int, char*[])
{
	if (!SimpleTest::RunTests ()) {
		return 1;
	}
	return 0;
}
