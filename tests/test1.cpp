#include <print.hpp>
#include <gtest/gtest.h>

using std::string;
using std::ofstream;

TEST(Print, InFileStream){
    string filepath = "file.txt";
    string text = "hello";
    ofstream out(filepath);

    print(text, out);
    out.close();
    string result;
    std::ifstream in{filepath};
    in >> result;

    EXPECT_EQ(result, text);
}
