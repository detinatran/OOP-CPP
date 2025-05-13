# Object-Oriented Programming in C++

Welcome to this quick guide on applying Object-Oriented Programming (OOP) principles in C++. Here we cover the four pillars of OOP—encapsulation, inheritance, polymorphism, and abstraction—with code snippets to get you started.

---

## 📖 Table of Contents

1. [Overview](#overview)  
2. [Prerequisites](#prerequisites)  
3. [1. Classes & Objects](#1-classes--objects)  
4. [2. Encapsulation](#2-encapsulation)  
5. [3. Inheritance](#3-inheritance)  
6. [4. Polymorphism](#4-polymorphism)  
7. [5. Abstraction](#5-abstraction)  
8. [Further Reading](#further-reading)  
9. [License](#license)  

---

## Overview

Object-Oriented Programming (OOP) is a paradigm that models software as a collection of interacting **objects**, each encapsulating data and behavior. In C++, OOP helps you build modular, maintainable, and extensible code.

---

## Prerequisites

- A working C++ compiler (e.g., `g++`, `clang++`)  
- Familiarity with basic C++ syntax and standard library  

---

## 1. Classes & Objects

A **class** is a blueprint for creating **objects**. It groups related data and functions.

```cpp
// Declaration of a class
class Person {
public:
    // Constructor
    Person(const std::string& name, int age)
      : name(name), age(age) {}

    // Public method
    void introduce() const {
        std::cout << "Hi, I'm " << name 
                  << " and I'm " << age 
                  << " years old.\n";
    }

private:
    std::string name;  // Attribute
    int age;           // Attribute
};

// Usage
int main() {
    Person alice("Alice", 30);
    alice.introduce();
    return 0;
}
