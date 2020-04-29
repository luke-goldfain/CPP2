#include <memory>
#include "mock_user.hpp"

int main() 
{
  std::shared_ptr<UserRepository> u = std::make_shared<UserRepository>();
  Facade * f = new Facade(u);
  f->SetExpiredUsersPasswordsToDefault();
}