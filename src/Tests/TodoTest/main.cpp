/**=============================================================================+
 * file name  : main.cpp
 * created    : 2022.05.07
 * author     : sam
 * copyright  : Copyright(C) I3D Technology Inc. All rights reserved.
+=============================================================================*/
#define CATCH_CONFIG_MAIN
#include <catch.hpp>

#include <model/todo.h>

using namespace todo;

TEST_CASE("Todo", "[]")
{
	Todo test(L"Todo");

	REQUIRE(test.Title() == L"Todo");

	test.Title(L"New Todo");
	REQUIRE(test.Title() == L"New Todo");
}

TEST_CASE("Todo Title", "[]")
{
	Todo test(L"Todo");

	CHECK(test.Title() == L"Todo");

	test.Title(L"New Todo");
	REQUIRE(test.Title() == L"New Todo");
}

TEST_CASE("Todo Completed", "[]")
{
	Todo test(L"Todo");

	CHECK_FALSE(test.Completed());

	test.Complete(true);
	REQUIRE(test.Completed());
}

TEST_CASE("Todo Editing", "[]")
{
	Todo test(L"Todo");

	CHECK_FALSE(test.Editing());

	test.Editing(true);
	REQUIRE(test.Editing());
}

