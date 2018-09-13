//
// Created by robot on 18-9-13.
//

#ifndef IMI_STL_SET_HPP
#define IMI_STL_SET_HPP

#include "inc/c_set.h"

namespace imi {
    class set {
    public:
        set() {}

        set(const set &other) {}

        ~set() {}

        const set &operator=(const set &other) {}

        void insert(void *elem, const size_t index) {}

        void clear() {}

        void erase(size_t pos) {}

        size_t size() {}

        bool empty() {}

        void for_each(bool (*fn)(const void *value, void *p), void *p) {}

    private:
        cstl_set *m_set;
    };
}

#endif //IMI_STL_SET_HPP
