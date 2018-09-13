//
// Created by robot on 18-9-13.
//

#ifndef IMI_STL_LIST_HPP
#define IMI_STL_LIST_HPP

#include "inc/c_list.h"

namespace imi {
    class list {
    public:
        list() {}

        list(const list &other) {}

        ~list() {}

        const list &operator=(const list &other) {}

        void insert(void *elem, const size_t index) {}

        void clear() {}

        void erase(size_t pos) {}

        size_t size() {}

        bool empty() {}

        void for_each(bool (*fn)(const void *value, void *p), void *p) {}

    private:
        cstl_list *m_list;
    };
}
#endif //IMI_STL_LIST_HPP
