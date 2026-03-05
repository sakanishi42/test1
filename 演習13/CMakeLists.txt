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

#ターゲット作成 
# テスト対象のCファイルをライブラリ化
add_library(test_lib STATIC src/test.c)

# テスト実行バイナリの作成
add_executable(test_exe tests/test.cpp)

# リンク設定 (gtest_mainを繋ぐことでmain関数を自動生成)
target_link_libraries(test_exe test_lib GTest::gtest_main)

# --- 4. テスト有効化 ---
enable_testing()