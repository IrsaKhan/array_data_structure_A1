#include<iostream>
#include"Array.h"

using namespace std;

//implementation file for Array.h

//remember no indexes

Array :: Array()
{
    start();
    length = 8;
    size = 6;

    first = A;
    last = &A[size];

    int i = 0;

    current = first;

    cout<<"Enter your values: \n";

    while( i < size)
    {
        start();
        cin>> *current;
        current++;
        i++;
    }
    
}

Array :: Array(int l , int s)
{
    start();
    length = l;
    size = s;

    int i = 0;

    current = first;

    cout<<"Enter your values: \n";

    while( i < size)
    {
        start();
        cin>> *current;
        current++;
        i++;
    }

}

int Array :: get()
{
    return *current;
}

void Array :: update(int x )
{
    *current = x;
}

int Array :: length()
{
    return size;
}

void Array :: back()
{
    if(current = A)
    {
        cout<<"Can't perform this function because function on the first position of array \n";
    }
    else
    {
    current--;
    }
}

void Array :: next()
{
    if (current == last)
    {
        cout<<"Error: Can't perform this function because current is on the last position of array\n";
    }
    else
    {
        current++;
    }
}

void Array :: start()
{
    current = first;
}

void Array :: end()
{
    current = last;
  
}

void Array :: remove()
{
    

}

void Array :: insert()
{

}





