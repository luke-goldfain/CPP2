#ifndef MOCK_USER_H
#define MOCK_USER_H

#include <string>
#include <vector>
#include <memory>

struct User{
  std::string UserName;
  std::string Password;
  bool IsExpired;

  User(std::string UserName, std::string Password, bool IsExpired)
  {
    this->UserName = UserName;
    this->Password = Password;
    this->IsExpired = IsExpired;
  }
};

class AbstractUserRepository
{
public:
  virtual std::vector<User> * GetUsers();
};    

class UserRepository : public AbstractUserRepository
{
private:
  std::vector<User> * m_users;
public:
  std::vector<User> *GetUsers();

  UserRepository()
  {
    this->m_users = new std::vector<User>();
    this->m_users->push_back(User("Steve", "hunter2", false));
    this->m_users->push_back(User("Paul", "supersecret", true));
  }

  ~UserRepository()
  {
    delete this->m_users;
  }
};

class UserService
{
public:
  std::vector<User> * GetUsersWithExpiredPassword(std::vector<User> * users);

  void SetUserPassword(User *user, std::string newPassword);
};

class Facade
{
private:
  std::shared_ptr<AbstractUserRepository> m_userRepo;
  UserService * m_userService;
public:
  Facade(std::shared_ptr<AbstractUserRepository> userRepository)
  {
    this->m_userRepo = userRepository;
    this->m_userService = new UserService();
  }

  ~Facade()
  {
    delete this->m_userService;
  }

  void SetExpiredUsersPasswordsToDefault();
};  

#endif