#include <gtest/gtest.h>
#include "valid_palindrome.cpp"

TEST(ValidPalindromeTest, ValidTest) {
    Solution s;
    std::string input1 = "A man, a plan, a canal: Panama";
    std::string input2 = "race a car";
    EXPECT_TRUE(s.isPalindrome(input1));
    EXPECT_FALSE(s.isPalindrome(input2));
}

TEST(ValidPalindromeTest, EmptyTest) {
    Solution s;
    std::string input = "";
    EXPECT_TRUE(s.isPalindrome(input));
}

TEST(ValidPalindromeTest, SingleCharTest) {
    Solution s;
    std::string input = "a";
    EXPECT_TRUE(s.isPalindrome(input));
}

TEST(ValidPalindromeTest, AllSpacesTest) {
    Solution s;
    std::string input = "   ";
    EXPECT_TRUE(s.isPalindrome(input));
}

TEST(ValidPalindromeTest, PunctuationTest) {
    Solution s;
    std::string input1 = "A man, a plan, a canal: Panama.";
    std::string input2 = "Was it a car or a cat I saw?";
    EXPECT_TRUE(s.isPalindrome(input1));
    EXPECT_TRUE(s.isPalindrome(input2));
}
