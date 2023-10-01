# ifndef ARRAY_CLASS_HPP
#define ARRAY_CLASS_HPP

#include <iostream>

template<typename T>
class Array
{
private:
    T *_array;
	unsigned int _size;
public:
    Array():_size(0)
    {
        this->_array = new T[this->_size];
    }

    Array(unsigned int n):_size(n)
    {
        this->_array = new T[this->_size];
    }

    Array(Array const &src): _size(src._size)
    {
        this->_array = new T[_size];

        for (unsigned int i = 0; i < this->_size; i++)
            this->_array[i] = src._array[i];
    }

    ~Array()
    {
        if (this->_array != NULL)
			delete [] this->_array;
    }

    Array &operator=(Array const &rhs)
    {
        if (this->_array != NULL)
				delete [] this->_array;
        this->_size = rhs._size;
        this->_array = new T[_size];
        for (unsigned int i = 0; i < this->_size; i++)
            this->_array[i] = rhs._array[i];
        return (*this);
    }

    T &operator[](unsigned int index)const
        {
            if (index >= this->_size || this->_array == NULL)
			{
				std::cout << "index: " << index << std::endl;
				throw (Array::ErrorIndexException());
			}
			return (this->_array[index]);
        }

    unsigned int getSize(void) const
    {
        return (this->_size);
    }

    class ErrorIndexException: public std::exception
    {
    public:
        virtual const char* what() const throw(){
            return ("Error index !!");
        }
    };
};

template<typename T>
std::ostream	&operator<<(std::ostream &o, Array<T> const &rhs)
{
    for (unsigned int i = 0; i < rhs.getSize(); i++)
        o << rhs[i] << ' ';
    o << std::endl;
    return (o);
}

#endif