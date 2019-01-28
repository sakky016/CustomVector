#include "header.h"

MyArray::MyArray()
{
    m_pObj = new int[kSize];
    m_Size = 0;
    m_Capacity = kSize;
}


MyArray::~MyArray()
{
    delete[] m_pObj;
}

int MyArray::operator[](int index)
{
    return m_pObj[index];
}

void MyArray::Insert(int val)
{
    if (m_Size < m_Capacity)
    {
        //printf("Container has capacity. Inserting...\n");
        m_pObj[m_Size] = val;
        m_Size++;
    }
    else
    {
        //printf("Container capacity exceeded.\n");
        //printf("Creating tmp obj\n");
        int *pTmpObj = new int[m_Size];
        memcpy(pTmpObj, m_pObj, m_Size * sizeof(int));
        m_Capacity = m_Capacity * kCapacityMultiplier;

        //printf("Deleting existing memory\n");
        delete[] m_pObj;

        //printf("Expanding capacity\n");
        m_pObj = new int[m_Capacity];

        //printf("Assigning tmp obj to main obj\n");
        memcpy(m_pObj, pTmpObj, m_Size * sizeof(int));

        //printf("Deleting tmp obj\n");
        delete[] pTmpObj;

        //printf("Inserting %d at index %d ...\n", val, m_Size);
        m_pObj[m_Size] = val;
        m_Size++;
    }
}

int MyArray::Size()
{
    return m_Size;
}

int MyArray::Capacity()
{
    return m_Capacity;
}

/****************************************************************
  Returns index value if val is found in the array 
  Returns -1 otherwise.
  **************************************************************/
int MyArray::Find(int val)
{
    int i = 0;
    while (i < m_Size)
    {
        if (m_pObj[i] == val)
        {
            return i;
        }

        i++;
    }

    return -1;
}














