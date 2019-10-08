#include "../stdafx_test.h"
#include "Animals/Animal.h"

Animal an("Kon",4);

TEST(AnimalTest,legTest) {
    EXPECT_EQ(an.getPocetNoh(),4);
    EXPECT_STREQ(an.getName().c_str(),"Macka");
    
}
TEST(AnimalTest,throwTest){
    EXPECT_ANY_THROW(an.vyhodVynimku());
    EXPECT_THROW(an.vyhodVynimku(),logic_error);
    //an.vyhodVynimku();

}
