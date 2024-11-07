#include <vector>
#include <iostream>
#include <stdexcept>

template <typename T>
class Queue {
private:
    std::vector<T> data;
public:
    void push(T value) {
        data.push_back(value);
    }

    void pop() {
        if (!empty()) data.erase(data.begin());
        else throw std::runtime_error("Queue is empty, cannot pop");
    }

    T front() const {
        if (!empty()) return data.front();
        throw std::runtime_error("Queue is empty, no front element");
    }

    int size() const {
        return data.size();
    }

    bool empty() const {
        return data.empty();
    }

    void display() const {
        for (const T& element : data) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }

    void move_to_rear() {
        if (!empty()) {
            T frontElement = front();
            pop();
            push(frontElement);
        }
    }
};

