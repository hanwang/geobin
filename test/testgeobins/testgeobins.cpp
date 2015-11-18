#include "geobins.h"
#include "testgeobins.h"
#include "gtest/gtest.h"

//using ::testing::Return;


TestGeobins::TestGeobins() {}

TestGeobins::~TestGeobins() {};

void TestGeobins::SetUp() {};

void TestGeobins::TearDown() {};

TEST_F(TestGeobins, DefaultTest) {
    Geobins geobin(true);
    EXPECT_EQ(geobin.test(true), true);
}
