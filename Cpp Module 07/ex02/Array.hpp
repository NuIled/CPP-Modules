#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>
class Array
{
private:
    int _size;
    T *array;
public:
    Array(){
        this->_size = 0;
    };
    Array(unsigned int N){
        if(N > __INT_FAST32_MAX__)
            throw std::bad_alloc();
        this->array = new (std::nothrow)T[N]();
        if(!this->array)
            throw std::bad_alloc();
        this->_size = N;
    }
    Array &operator=(Array &obj)
    {
        if (this != &obj)
        {
            if (this->_size > 0)
                delete[] this->array;
            this->_size = obj.size();
            this->array = new (std::nothrow) T[obj._size];
            if(!this->array)
                throw std::bad_alloc();
            for (int i = 0; i < obj.size(); i++)
                this->array[i] = obj.array[i];
        }
        return *this;
    }
    Array(Array &obj)
    {
        _size = obj.size();
        this->array = new(std::nothrow)T[obj.size()];
        if(!this->array)
            throw std::bad_alloc();
    }
    T& operator[](int index) 
    {
        if(index >= this->size() || index < 0)
            throw Index_out_of_range();
        return this->array[index];
    }
    int size(){
        return this->_size;
    }
    ~Array(){
        if (this->_size > 0)
            delete[] this->array;
    }
    class Index_out_of_range: public std::exception
    {
        const char *what() const _NOEXCEPT{
            return "index out of bounds";
        };
    };
};
#endif