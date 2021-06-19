#include "TinyCppTest.hpp"

TEST (AssertTest)
{
	static const double Eps = 0.00001;
	static const double BigEps = 0.01;

	ASSERT (21 * 2 == 42);
	ASSERT (21 * 2 != 43);

	ASSERT_EQ (21 * 2, 42);
	ASSERT_NEQ (21 * 2, 43);

	ASSERT_EQ_EPS (21.0 * 2.0, 42.0, Eps);
	ASSERT_NEQ_EPS (21.0 * 2.0, 43.0, Eps);

	ASSERT_EQ_EPS (0.1 + 0.2, 0.3, Eps);
	ASSERT_NEQ_EPS (0.1 + 0.2, 0.4, Eps);

	ASSERT_EQ_EPS (0.000001, 0.000002, Eps);
	ASSERT_NEQ_EPS (0.000001, 0.000002, BigEps);
}
