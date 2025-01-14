# C++ Module 01 - Key Concepts and Exercises

## Table of Contents
1. [Introduction](#introduction)
2. [Key Concepts](#key-concepts)
   - [Dynamic Memory Management](#dynamic-memory-management)
   - [Pointers and References](#pointers-and-references)
   - [Switch Statement](#switch-statement)
3. [Exercises Overview](#exercises-overview)
   - [Exercise 00: BraiiiiiiinnnzzzZ](#exercise-00-braiiiiiiinnnzzzz)
   - [Exercise 01: Moar brainz!](#exercise-01-moar-brainz)
   - [Exercise 02: HI THIS IS BRAIN](#exercise-02-hi-this-is-brain)
   - [Exercise 03: Unnecessary violence](#exercise-03-unnecessary-violence)
   - [Exercise 04: Sed is for losers](#exercise-04-sed-is-for-losers)
   - [Exercise 05: Harl 2.0](#exercise-05-harl-20)
   - [Exercise 06: Harl filter](#exercise-06-harl-filter)

---

## Introduction
This project explores fundamental C++ concepts, including dynamic memory management, pointers, references, and program control using the switch statement. Each exercise is designed to build a deeper understanding of these concepts and their practical applications in object-oriented programming.

---

## Key Concepts

### Dynamic Memory Management
- **Heap vs. Stack**: Understanding the difference in allocation and deallocation between stack-based and heap-based memory.
- **Memory Leaks**: Recognizing and preventing memory leaks when using dynamic memory allocation (`new` and `delete`).
- **RAII Principle**: Ensuring resources are managed safely through destructors.

### Pointers and References
- **Pointers**: Learning to use raw pointers for dynamic memory management, including proper initialization and cleanup.
- **References**: Understanding references as aliases and their immutability in terms of initialization.
- **Smart Pointers**: Introduction to concepts like `std::unique_ptr` and `std::shared_ptr` for safer memory management (optional).

### Switch Statement
- **Control Flow**: Using the `switch` statement for structured branching.
- **Efficiency**: Understanding the benefits of using `switch` over multiple `if-else` blocks for constant expressions.
- **Practical Applications**: Applying `switch` for tasks like command parsing and message filtering.

---

## Exercises Overview

### Exercise 00: BraiiiiiiinnnzzzZ
**Objective**:
- Create a `Zombie` class to explore object construction and destruction.
- Implement dynamic (heap) and automatic (stack) zombie creation with `newZombie` and `randomChump`.
- Use destructors to log object lifecycle events.

### Exercise 01: Moar brainz!
**Objective**:
- Implement `zombieHorde`, a function to dynamically allocate and initialize an array of zombies.
- Understand memory management when dealing with arrays allocated on the heap.
- Prevent leaks by properly deallocating memory with `delete[]`.

### Exercise 02: HI THIS IS BRAIN
**Objective**:
- Compare memory addresses and values using pointers and references.
- Print the memory addresses of a string variable, its pointer, and its reference.
- Reinforce the difference between pointers and references in C++.

### Exercise 03: Unnecessary violence
**Objective**:
- Create a `Weapon` class with methods for setting and getting weapon types.
- Implement `HumanA` (using references) and `HumanB` (using pointers) to illustrate different relationships with the `Weapon` class.
- Explore scenarios where pointers or references are more appropriate.

### Exercise 04: Sed is for losers
**Objective**:
- Write a program that replaces occurrences of one string with another in a file, outputting the result to a new file.
- Practice file I/O with `std::ifstream` and `std::ofstream`.
- Explore string manipulation techniques without relying on `std::string::replace`.

### Exercise 05: Harl 2.0
**Objective**:
- Implement the `Harl` class to simulate logging with different levels (`DEBUG`, `INFO`, `WARNING`, `ERROR`).
- Use pointers to member functions to handle dynamic behavior without excessive conditional statements.
- Practice modular and reusable class design.

### Exercise 06: Harl filter
**Objective**:
- Extend the `Harl` class to filter and display logs based on their levels.
- Use the `switch` statement to implement efficient filtering.
- Understand the concept of log severity and filtering in software design.

---

This module serves as an introduction to crucial C++ concepts, combining theoretical knowledge with hands-on practice. By completing these exercises, you will develop a solid foundation for advanced topics in C++ programming.
