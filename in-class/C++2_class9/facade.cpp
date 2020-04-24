#include <iostream>
#include <algorithm>
#include <vector>
#include <memory>

// Facade design pattern
struct User
{
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
    virtual std::vector<User> * GetUsers() = 0;
};

class UserRepository : public AbstractUserRepository
{
private:
    std::vector<User> * m_users;
public:
    std::vector<User> GetUsers()
    {
        return this->m_users;
    }

    UserRepository()
    {
        this->m_users = new std::vector<User>();

        this->m_users->push_back(User("Steve", "hunter2", false));
        this->m_users->push_back(User("Paul", "gothbitties", true));
        
    }

    ~UserRepository()
    {
        delete this->m_users;
    }
};

class UserService
{
public:
    std::vector<User> * GetUsersWithExpiredPassword(std::vector<User> * users)
    {
        std::vector<User> * usersWithExpiringPws = new std::vector<User>();
        for (auto u : *users)
        {
            if (u.IsExpired)
            {
                usersWithExpiringPws->push_back(u);
            }
        }

        return usersWithExpiringPws;
    }

    void SetUserPassword(User * user, std::string newPassword)
    {
        // action three
    }
};

class Facade
{
private:
    std::shared_ptr<AbstractUserRepository> m_userRepo;
    UserService * m_userService;
public:
    Facade(std::shared_ptr<AbstractUserRepository> userRepo)
    {
        this->m_userRepo = userRepo;
        this->m_userService = new UserService();
    }

    ~Facade()
    {
        delete this->m_userService;
    }

    void SetExpiredUsersPasswordsToDefault()
    {
        std::vector<User> *users = this->m_userRepo.get()->GetUsers();

        std::vector<User> *usersWithExpiringPws = this->m_userService->GetUsersWithExpiredPassword(users);

        for (auto u : *usersWithExpiringPws)
        {
            this->m_userService->SetUserPassword(&u, "autoPass");
        }
    }
};

int main()
{
    std::shared_ptr<UserRepository> u = std::make_shared<UserRepository>(); 

    Facade * f = new Facade(u);
    f->SetExpiredUsersPasswordsToDefault();
}