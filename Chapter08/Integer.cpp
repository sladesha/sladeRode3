//
// Created by 沙韬伟 on 2019-09-25.
//

#include "Integer.h"

Integer::Integer() : m_value(0)//调用默认构造的时候，给m_value赋值0
{}

Integer::Integer(int mValue) : m_value(mValue) {}

Integer::~Integer() {

}
// 成员函数
Integer Integer::operator+(Integer other) {
    Integer result(this->m_value + other.m_value);
    return result;
}

// 友元函数
const Integer operator+(int intValue, const Integer &other) {
    return Integer(intValue + other.m_value);
}