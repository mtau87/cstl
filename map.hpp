//
// Created by robot on 18-9-13.
//

#ifndef CSTL_MAP_HPP
#define CSTL_MAP_HPP

#include "inc/c_map.h"

namespace imi{
    class map{
    public:
        map(){}
        map(const map& other){}
        ~map(){}
        const map& operator=(const map& other){}

    private:
        cstl_map* m_map;
    };
}

#endif //CSTL_MAP_HPP
