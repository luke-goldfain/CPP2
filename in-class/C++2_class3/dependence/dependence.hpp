#ifndef TEST_H
#define TEST_H


// Both classes A and B have a reference to the other class
// This is bad -- will leak memory and make for fragile code

class B;
class A 
{
public:
    B m_b;
};

class B
{
    A m_a;
};

// This is a variant
class C : public A
{
public:
    void foo(A * a)
    {

    }
};

// This class is tightly coupled to A
class D
{
    private A * m_a;
public:
    D(A * a)
    {
        m_a = a;
    }
};

#endif