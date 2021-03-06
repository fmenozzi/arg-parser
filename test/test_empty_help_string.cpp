#include <catch.hpp>

#include <argparser.hpp>

TEST_CASE("Test empty help string", "[empty help string]") {
    constexpr int argc = 4;
    const char* argv[argc] = {
        "test.exe",
        "-f", "First",
        "-abc",
    };

    ap::parser p(argc, const_cast<char**>(argv));
    REQUIRE(!p.add("-g", "--good", ""));
}
