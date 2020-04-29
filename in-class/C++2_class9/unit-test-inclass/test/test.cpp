#include "../src/mock_user.hpp"
#include <gtest/gtest.h>
#include <vector>
#include <string>

TEST(mockUserTest, repo) 
{
    std::shared_ptr<UserRepository> u = std::make_shared<UserRepository>();
    std::vector<User> * users = u->GetUsers();

    User user0 = users->at(0);
    User user1 = users->at(1);

    ASSERT_EQ(user0.UserName, "Steve");
    ASSERT_EQ(user1.UserName, "Paul");
    ASSERT_EQ(user0.Password, "hunter2");
    ASSERT_EQ(user1.Password, "supersecret");
    ASSERT_EQ(user0.IsExpired, false);
    ASSERT_EQ(user1.IsExpired, true);
}

TEST(mockUserTest, defaultPass)
{
    std::shared_ptr<UserRepository> u = std::make_shared<UserRepository>();

    Facade * f = new Facade(u);

    f->SetExpiredUsersPasswordsToDefault();
    
    std::vector<User> * users = u->GetUsers();

    ASSERT_EQ(users->at(0).Password, "hunter2");
    ASSERT_EQ(users->at(1).Password, "hunter2");
    ASSERT_EQ(users->at(0).IsExpired, false);
    ASSERT_EQ(users->at(1).IsExpired, false);
}

int main(int argc, char ** argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}