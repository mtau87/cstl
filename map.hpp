//
// Created by robot on 18-9-13.
//

#ifndef CSTL_MAP_HPP
#define CSTL_MAP_HPP

#include "inc/c_map.h"

namespace imi {
    class map {
    public:
        map() {}

        map(const map &other) {}

        ~map() {}

        const map &operator=(const map &other) {}

        void *operator[](const void *key) {}

        bool empty() {}

        void clear() {}

        void erase(const void *key) {}

        bool insert(const void *key, const void *value) {}

        const void *find(const void *key) {}

        void for_each(bool (*fn)(const void *value, const void *key, void *p), void *p) {}

    private:
        cstl_map *m_map;
    };
}

#endif //CSTL_MAP_HPP
