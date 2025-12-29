#include "hello_world.h"

#include "test/catch.hpp"


TEST_CASE("test_hello") {
    REQUIRE(hello_world::hello() == "Hello, World!");
}
