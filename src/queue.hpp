#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <deque>

template <typename T>
class ClipboardQueue {
public:
    void enqueue(const T& item) {
        queue_.push_back(item);
    }

    T dequeue() {
        if (queue_.empty()) {
            throw std::out_of_range("Queue is empty");
        }
        T front = queue_.front();
        queue_.pop_front();
        return front;
    }

    void removeLatest() {
        if (!queue_.empty()) {
            queue_.pop_back();
        }
    }

    void clear() {
        queue_.clear();
    }

    bool isEmpty() const {
        return queue_.empty();
    }

    std::deque<T> getAllItems() const {
        return queue_;
    }

private:
    std::deque<T> queue_;
};

#endif 
