//
// Created by robot on 18-9-12.
//

#ifndef CSTL_VECTOR_HPP
#define CSTL_VECTOR_HPP

#include "inc/c_array.h"

namespace imi {
    class vector {
    public:
        vector() {}

        vector(const vector &other) {}

        ~vector() {}

        const vector &operator=(const vector &other) {}

        void *operator[](const size_t pos) {}

        void push_back(void *elem) {}

        void insert(void *elem, const size_t index) {}

        void clear() {}

        void erase(size_t pos) {}

        size_t size() {}

        bool empty() {}

        void for_each(bool (*fn)(const void *value, void *p), void *p) {}

    private:
        cstl_array *m_pArray;
    };
}
#endif //CSTL_VECTOR_HPP
