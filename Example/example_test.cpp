#include "TinyCppTest.hpp"

TEST (AdditionTest)
{
	ASSERT (40 + 2 == 42);
}

TEST (SubtractionTest)
{
	ASSERT (44 - 2 == 42);
}

TEST (MultiplicationTest)
{
	ASSERT (21 * 2 == 42);
}

TEST (DivisionTest)
{
	ASSERT (84 / 2 == 42);
}
