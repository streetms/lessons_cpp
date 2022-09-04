//
// Created by konstantin on 28.08.22.
//

#ifndef LESSON_HUMAN_H
#define LESSON_HUMAN_H
#include <string>

class Human {
public:
    Human(std::string_view name, int age, int height);
    Human& operator=(const Human& human);
    Human& operator=(Human&& human) noexcept ;
    Human();
    explicit Human(const Human& human);
    explicit Human(Human&& human);
    ~Human();
    uint get_age();
    uint get_height();
    std::string get_name();
    void say_hello();
    void set_age(int age);
private:
    double* money_;
    std::string name_;
    uint age_;
    uint height_;
};


#endif //LESSON_HUMAN_H
