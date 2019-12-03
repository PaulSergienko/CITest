#include "maintest.h"
#include "impl.h"

#include <gtest/gtest.h>

char* IntToBinaryRepresentation(char *,int);

TEST(Lab1,Simple)
{
   int source = 0x5;
   char* expected = "00000000000000000000000000000101";
   char buffer[80];

   char *actual = IntToBinaryRepresentation(buffer,source);


   ASSERT_STREQ(expected,actual);
}

int BinaryInvert(int x,int p,int n);

TEST(Lab2,Simple)
{
    int x = 0xFF0;
    int n = 3;
    int p = 8;
    int expected = 0xF10;

    int actual = BinaryInvert(x,p,n);

    ASSERT_EQ(expected,actual);
}

bool Quadro(int a,int b,int c, double& x1,double& x2);

TEST(Lab3,QuadroIsOk)
{
    int a = 2;
    int b = 8;
    int c = 4;

    double expectedX1 = -0.5857;
    double expectedX2 = -3.4142;
    double x1;
    double x2;

    ASSERT_TRUE(Quadro(a,b,c,x1,x2));

    ASSERT_NEAR(x1,expectedX1,0.01);
    ASSERT_NEAR(x2,expectedX2,0.01);
}


TEST(Lab3,QuadroIsNotSolution)
{
    int a = 8;
    int b = 1;
    int c = 9;

    double x1;
    double x2;

    ASSERT_FALSE(Quadro(a,b,c,x1,x2));
}
