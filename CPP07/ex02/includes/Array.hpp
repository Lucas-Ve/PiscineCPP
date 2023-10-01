# ifndef ARRAY_CLASS_HPP
#define ARRAY_CLASS_HPP

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
        this->_tab = new T[_size];

        for (unsigned int i = 0; i < this->_size; i++)
            this->_tab[i] = src._tab[i];
    }

    ~Array()
    {
        if (this->_array != NULL)
			delete [] this->_array;
    }

    Array &operator=(Array const &rhs): _size(rhs._size)
    {
        this->_tab = new T[_size];

        for (unsigned int i = 0; i < this->_size; i++)
            this->_tab[i] = rhs._tab[i];
        return (*this);
    }
};

#endif