#include <stdio.h>
#include <algorithm>

template <typename T>
class ContainerArray {
public:
    ContainerArray()
            : data(nullptr),
              arr_size(0),
              capacity(0)
    {};

    ContainerArray(T new_data)
            : data(new_data)
    {};

    ContainerArray(const ContainerArray& other) {
        data = new T[other.capacity];
        std::copy(other.data, other.data + other.arr_size, data);
        arr_size = other.arr_size;
        capacity = other.capacity;
    };

    ~ContainerArray() {
        delete[] data;
    }

    T& operator[](size_t index) {
        return data[index];
    }

    void push_back(const T& new_element) {
        if (arr_size == capacity) {
            resize(capacity * 2 + 1);
        }
        data[arr_size++] = new_element;
    };

    void insert(const T& new_element, int index) {
        if (arr_size == capacity) {
            resize(capacity * 2 + 1);
        }
        if (index >= arr_size)
        {
            push_back(new_element);
        }
        //TODO
    };

    void erase() {
        // TODO
    };

    size_t size() {
        return arr_size;
    };


    typedef T* iterator;
    typedef const T* const_iterator;

    iterator begin() {
        return data;
    }

    const_iterator begin() const {
        return data;
    }

    iterator end() {
        return data + arr_size;
    }

    const_iterator end() const {
        return data + arr_size;
    }

private:
    size_t arr_size;
    T *data;
    int capacity;

    void resize(size_t new_capacity) {
        T* new_data = new T[new_capacity];
        std::copy(data, data + arr_size, new_data);
        delete[] data;
        data = new_data;
        capacity = new_capacity;
    }
};

int main() {
    ContainerArray<int> array(5);
    return 0;
}