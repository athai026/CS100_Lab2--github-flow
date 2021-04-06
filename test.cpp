#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, NewLine) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "\n";
    EXPECT_EQ("\n", echo(2, test_val));
}

TEST(EchoTest, OtherChars) {
    char* test_val[5]; test_val[0] = "./c-echo"; test_val[1] = "!"; test_val[2] = "@"; test_val[3] = "#"; test_val[4] = "$";
    EXPECT_EQ("! @ # $", echo(5, test_val));
}

TEST(EchoTest, Numbers) {
    char* test_val[10]; 
    test_val[0] = "./c-echo"; 
    test_val[1] = "1"; 
    test_val[2] = "2";
    test_val[3] = "3";
    test_val[4] = "4";
    test_val[5] = "5";
    test_val[6] = "6";
    test_val[7] = "7";
    test_val[8] = "8";
    test_val[9] = "9";
    EXPECT_EQ("1 2 3 4 5 6 7 8 9", echo(10, test_val));
}



int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
  std::cout << "\n";
}
