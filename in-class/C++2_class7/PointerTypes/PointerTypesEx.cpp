#include <iostream>
#include <algorithm>
#include <vector>
#include <memory>

struct TestStruct
{
    TestStruct()
    {
        std::cout << "I've been constructed" << std::endl;
    }

    ~TestStruct()
    {
        std::cout << "I've been destroyed" << std::endl;
    }

    // Giving a definition to the + operator for TestStruct
    TestStruct operator+(const TestStruct& t)
    {
        TestStruct t1 = TestStruct(10);
        t1.integer = this->integer + t.integer;
        return t1;
    }

    int integer;
};

void business_function(TestStruct * my_struct)
{
    // do something with my_struct
    delete(my_struct); // CAREFUL -- this will have to be the only place delete is called or we'll have issues
}

// Template class with add function that takes in any type
template<class T>
T generic_add(T lhs, T rhs)
{
    return lhs + rhs;
}

// A more specific template class using TestStruct integers
// Is this an overload of the previous generic_add?
template<>
TestStruct generic_add(TestStruct lhs, TestStruct rhs)
{
    TestStruct t2 = TestStruct(0);
    t2.integer = lhs.integer + rhs.integer;
    return t2;
}

// A Node template that takes in any type for its data
template<class T>
struct Node
{
    Node(T data)
    {
        this->data = data;
        next = nullptr;
    }

    T data;
    Node * next;
};

int main()
{
    // UNIQUE POINTER 
    // this will know when it is to be deleted and can't be used afterwards
    // If moved, original will be inaccessible and any reference will throw an error
    std::unique_ptr<TestStruct> t = std::make_unique<TestStruct>(10);
    std::unique_ptr<TestStruct> t2 = std::move(t);

    //t->integer = 20; // This would throw an error

    // You can use a "deleted" regular pointer with no errors
    TestStruct * t3 = new TestStruct(10);
    t3->integer = 100;
    delete(t3);
    t3->integer = 200;

    // SHARED POINTER
    // Keeps track of every reference to it, deleting itself only when there are no more references
    std::shared_ptr<TestStruct> t_shared = std::make_shared<TestStruct>(10);

    auto shared = t_shared.get();
    shared->integer = 33;

    // Using the + operator (that we defined) with TestStructs
    TestStruct addingStruct1 = TestStruct(10);
    TestStruct addingStruct2 = TestStruct(12);
    auto sum = generic_add(addingStruct1, addingStruct2);
    std::cout << sum << std::endl;

    // Using the Node template, and making an int node
    Node<int> *n = new Node<int>(10);
    Node<std::string> *n2 = new Node<std::string>("Hello from a Node");

    // Lambda function with sorting a vector:
    // Can sort natively with ints
    std::vector<int> myInts == std::vector<int>();
    myInts.push_back(10);
    myInts.push_back(22);
    myInts.push_back(3);
    std::sort(myInts.begin(), myInts.end());

    // To sort with TestStruct type, must use a lambda function
    // (could also make a function and reference it)
    std::vector<TestStruct> myStructs = std::vector<TestStruct>();

    std::sort(myStructs.begin(), myStructs.end(), [](TestStruct lhs, TestStruct rhs) { return lhs.value > rhs.value; });

    // Another lambda function
    auto myFunc = [](TestStruct lhs)
    {
        std::cout << lhs.value << std::endl;
    };

    // This lambda function with the reference operator in brackets has reference outside its scope
    // This particular lambda could access myInts, for example
    auto myFuncWithOutsideReference = [&](TestStruct lhs)
    {
        std::cout << lhs.value << std::endl;
    };

    return 0;
}