#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

const int kSize = 4;
const int kCapacityMultiplier = 2;

class MyArray
{
    private:
        int *m_pObj;
        int m_Size;
        int m_Capacity;
           
    public:
        MyArray();
        ~MyArray();
        void Insert(int val);
        int Find(int val);
        int Size();
        int Capacity();
        int operator[](int index);
};

