cmake_minimum_required(VERSION 3.14)
project(TestProject LANGUAGES C CXX)

# GoogleTestの自動取得
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
FetchContent_MakeAvailable(googletest)

#カバレッジ設定 (GCC/Clang用)
add_compile_options(--coverage)
add_link_options(--coverage)


add_library(test_lib STATIC src/test.c)
add_executable(test_exe tests/test.cpp)

target_link_libraries(test_exe test_lib GTest::gtest_main)

enable_testing()