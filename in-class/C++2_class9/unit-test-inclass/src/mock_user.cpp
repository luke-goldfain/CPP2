#include "mock_user.hpp"
#include<iostream>
#include<algorithm>
#include<vector>
#include<memory>
//facade

std::vector<User> * AbstractUserRepository::GetUsers(){ return nullptr; }

std::vector<User> * UserRepository::GetUsers(){ return this->m_users; }

std::vector<User> * UserService::GetUsersWithExpiredPassword(std::vector<User> * users)
{
  std::vector<User> * usersWithExpiringPasswords = new std::vector<User>();
  for(auto u : *users){
    if(u.IsExpired){
      usersWithExpiringPasswords->push_back(u);
    }
  }
  return usersWithExpiringPasswords;
}

void UserService::SetUserPassword(User *user, std::string newPassword)
{
  user->Password = newPassword;
}

void Facade::SetExpiredUsersPasswordsToDefault()
{
  std::vector<User> *users = this->m_userRepo.get()->GetUsers();

  std::vector<User> *usersWithExpiringPasswords = this->m_userService->GetUsersWithExpiredPassword(users);

  for(auto u : *usersWithExpiringPasswords){
    this->m_userService->SetUserPassword(&u, "hunter2");
  }
}


