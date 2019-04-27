#ifndef BIGINTEGER_LIBRARY_H
#define BIGINTEGER_LIBRARY_H

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <iterator>

class big_integer {
    std::vector<uint32_t> data_;

    big_integer &clear();

    big_integer &invert();

    bool is_positive() const;

    char div10();

    friend big_integer multiply(big_integer const &lhs, uint64_t const &rhs);

    big_integer &to_right_by32(uint32_t const &rhs);

    big_integer &to_left_by32(uint32_t const &rhs);

    big_integer &to_right(uint32_t const &rhs);

    big_integer &to_left(uint32_t const &rhs);

    big_integer &division(big_integer const &rhs);

 public:
    // Constructors

    big_integer() : data_(1, 0) {}

    big_integer(big_integer const &rhs) = default;

    explicit big_integer(std::string const &rhs);

    big_integer(int32_t const &rhs);

    // Assignment

    big_integer &operator=(big_integer const &rhs);

    big_integer &operator+=(big_integer const &rhs);

    big_integer &operator-=(big_integer const &rhs);

    big_integer &operator*=(big_integer const &rhs);

    big_integer &operator/=(big_integer const &rhs);

    big_integer &operator%=(big_integer const &rhs);

    big_integer &operator&=(big_integer const &rhs);

    big_integer &operator|=(big_integer const &rhs);

    big_integer &operator^=(big_integer const &rhs);

    big_integer &operator>>=(int32_t const &rhs);

    big_integer &operator<<=(int32_t const &rhs);

    // Increment-Decrement

    big_integer &operator++();

    big_integer &operator--();

    big_integer const operator++(int);

    big_integer const operator--(int);

    // Arithmetic

    friend big_integer operator+(big_integer const &lhs);

    friend big_integer operator-(big_integer const &lhs);

    friend big_integer operator~(big_integer const &lhs);

    friend big_integer operator+(big_integer const &lhs, big_integer const &rhs);

    friend big_integer operator-(big_integer const &lhs, big_integer const &rhs);

    friend big_integer operator*(big_integer const &lhs, big_integer const &rhs);

    friend big_integer operator/(big_integer const &lhs, big_integer const &rhs);

    friend big_integer operator%(big_integer const &lhs, big_integer const &rhs);

    friend big_integer operator&(big_integer const &lhs, big_integer const &rhs);

    friend big_integer operator|(big_integer const &lhs, big_integer const &rhs);

    friend big_integer operator^(big_integer const &lhs, big_integer const &rhs);

    friend big_integer operator<<(big_integer const &lhs, int32_t const &rhs);

    friend big_integer operator>>(big_integer const &lhs, int32_t const &rhs);

    // Logical

    friend bool operator!(big_integer const &lhs);

    friend bool operator&&(big_integer const &lhs, big_integer const &rhs);

    friend bool operator||(big_integer const &lhs, big_integer const &rhs);

    // Comparison


    friend bool operator==(big_integer const &lhs, big_integer const &rhs);

    friend bool operator!=(big_integer const &lhs, big_integer const &rhs);

    friend bool operator>(big_integer const &lhs, big_integer const &rhs);

    friend bool operator<(big_integer const &lhs, big_integer const &rhs);

    friend bool operator>=(big_integer const &lhs, big_integer const &rhs);

    friend bool operator<=(big_integer const &lhs, big_integer const &rhs);

    // Other

    friend std::string to_string(big_integer rhs);

    friend std::ostream &operator<<(std::ostream &cout, big_integer rhs);

    friend std::istream &operator>>(std::istream &cin, big_integer &rhs);
};

#endif