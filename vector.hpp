//
// Created by robot on 18-9-12.
//

#ifndef CSTL_VECTOR_HPP
#define CSTL_VECTOR_HPP

#include "inc/c_array.h"
namespace imi{
    class vector{
    public:
        vector(){}
        vector(const vector& other){}
        ~vector(){}
        const vector& operator=(const vector& other){}

        void push_back(){}
        void insert(){}
        void clear(){}
        void erase(){}

    private:
        cstl_array* m_pArray;
    };
}
#endif //CSTL_VECTOR_HPP
