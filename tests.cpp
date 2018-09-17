#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "pig.h"

TEST_CASE("BASE CASE"){

  CHECK(piglatinify("hello") == "ellohay");


}
