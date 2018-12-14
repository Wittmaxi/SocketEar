#define CATCH_CONFIG_MAIN
#include "../../libs/catch.hpp"
#include "../src/header/socketear.hpp"

TEST_CASE ("SOCKET") {
    SECTION ("CONSTRUCTOR") {
        SEA::Socket a(SEA::SocketType::TCP);
        REQUIRE (a.getFileDescriptor() != 0);
    } 
}