# CPP Module 03

This repository contains my implementation of **C++ Module 03**, developed as part of the 42 School curriculum. This module focuses on one of the fundamental pillars of Object-Oriented Programming: **Inheritance**. Through a series of exercises involving robot classes, you'll learn about class hierarchies, construction/destruction chaining, and the famous diamond problem.

**"Inheritance"**

## Table of Contents

- [Overview](#overview)
- [General Rules](#general-rules)
- [Exercises](#exercises)
  - [Exercise 00: Aaaaand... OPEN!](#exercise-00-aaaaand-open)
  - [Exercise 01: Serena, my love!](#exercise-01-serena-my-love)
  - [Exercise 02: Repetitive work](#exercise-02-repetitive-work)
  - [Exercise 03: Now it's weird!](#exercise-03-now-its-weird)
- [Project Structure](#project-structure)
- [Installation](#installation)
- [Usage](#usage)
- [Submission and Peer Evaluation](#submission-and-peer-evaluation)
- [Acknowledgments](#acknowledgments)
- [Disclaimer](#disclaimer)
- [License](#license)

## Overview

C++ is a general-purpose programming language created by **Bjarne Stroustrup** as an extension of the C programming language, or "C with Classes". This module introduces the concept of **inheritance**, allowing you to create class hierarchies where derived classes inherit attributes and methods from base classes.

Key topics covered in this module:
- **Inheritance** - creating derived classes from base classes
- **Construction/destruction chaining** - understanding the order of constructor and destructor calls
- **Method overriding** - redefining inherited methods in derived classes
- **Protected access** - sharing attributes between base and derived classes
- **Multiple inheritance** - deriving from multiple base classes
- **The Diamond Problem** - understanding and solving diamond inheritance issues

All exercises must be written in **C++98** and compiled using the appropriate flags.

## General Rules

- **Compilation:**
  - Compile with `c++ -Wall -Wextra -Werror`
  - Code must still compile with `-std=c++98`

- **Formatting & Naming:**
  - Exercises are stored in directories `ex00`, `ex01`, `ex02`, …  
  - Class names in `UpperCamelCase` (e.g., `ClapTrap`, `ScavTrap`)  
  - Source files: `ClassName.cpp`  
  - Header files: `ClassName.hpp` or `ClassName.h`  

- **Allowed / Forbidden:**
  - Allowed: most of the C++ standard library
  - Forbidden: external libraries, C++11 or newer, Boost libraries
  - Forbidden functions: `*printf()`, `*alloc()`, `free()`
  - Forbidden keywords: `using namespace <ns_name>`, `friend` (unless explicitly stated)
  - STL containers and algorithms are only allowed starting from Module 08

- **Design Requirements:**
  - All classes must follow the Orthodox Canonical Form
  - Avoid memory leaks when using `new` / `delete`
  - Each header must be self-contained and protected by include guards
  - No function implementations inside headers (except templates)

## Exercises

### Exercise 00: Aaaaand... OPEN!

**Directory:** `ex00/`  
**Files to turn in:** `Makefile`, `main.cpp`, `ClapTrap.{h,hpp}`, `ClapTrap.cpp`

Implement a `ClapTrap` class with the following private attributes:

- `name` (passed as constructor parameter)
- `hit points` (10) - representing the health
- `energy points` (10)
- `attack damage` (0)

**Public member functions:**
- `void attack(const std::string& target)` - causes target to lose attack damage hit points
- `void takeDamage(unsigned int amount)` - reduces hit points
- `void beRepaired(unsigned int amount)` - restores hit points

**Rules:**
- Attacking and repairing each cost 1 energy point
- ClapTrap can't do anything if it has no hit points or energy points left
- All member functions must print descriptive messages
- Constructors and destructors must print messages

**Example output:**
```
ClapTrap <name> attacks <target>, causing <damage> points of damage!
```

**Key Learning:** Basic class implementation with state management and action costs.

### Exercise 01: Serena, my love!

**Directory:** `ex01/`  
**Files to turn in:** Files from previous exercise + `ScavTrap.{h,hpp}`, `ScavTrap.cpp`

Create a `ScavTrap` class that inherits from `ClapTrap`.

**Attributes (different from ClapTrap):**
- `name` (passed as constructor parameter)
- `hit points` (100)
- `energy points` (50)
- `attack damage` (20)

**Special features:**
- Constructors, destructor, and `attack()` print different messages
- Must show proper construction/destruction chaining
- Special ability: `void guardGate()` - displays a message indicating ScavTrap is in Gate keeper mode

**Key Learning:** Basic inheritance, construction/destruction order, and method overriding.

*Why does construction occur from base to derived, but destruction occurs in reverse order?*

### Exercise 02: Repetitive work

**Directory:** `ex02/`  
**Files to turn in:** Files from previous exercises + `FragTrap.{h,hpp}`, `FragTrap.cpp`

Implement a `FragTrap` class that inherits from `ClapTrap`.

**Attributes:**
- `name` (passed as constructor parameter)
- `hit points` (100)
- `energy points` (100)
- `attack damage` (30)

**Special features:**
- Construction and destruction messages must be different from ClapTrap and ScavTrap
- Must show proper construction/destruction chaining
- Special ability: `void highFivesGuys(void)` - displays a positive high-fives request

**Key Learning:** Creating multiple derived classes from the same base class.

### Exercise 03: Now it's weird!

**Directory:** `ex03/`  
**Files to turn in:** Files from previous exercises + `DiamondTrap.{h,hpp}`, `DiamondTrap.cpp`

Create a `DiamondTrap` class that inherits from **both** `FragTrap` and `ScavTrap`. This exercise introduces the famous **Diamond Problem** in multiple inheritance.

**Attributes:**
- Private attribute `name` (same variable name as in ClapTrap base class)
- `ClapTrap::name` (constructor parameter + "_clap_name" suffix)
- `hit points` (from FragTrap)
- `energy points` (from ScavTrap)
- `attack damage` (from FragTrap)
- `attack()` method (from ScavTrap)

**Special ability:**
- `void whoAmI()` - displays both its name and its ClapTrap name

**Important:**
- The ClapTrap instance must be created once, and only once
- You'll need to use virtual inheritance to solve the diamond problem

**Compiler flags to consider:** `-Wshadow` and `-Wno-shadow`

**Key Learning:** Multiple inheritance, the diamond problem, and virtual inheritance.

*Note: This exercise is optional and not required to pass the module.*

## Project Structure

```
CPP03/
├── ex00/
│   ├── Makefile
│   ├── main.cpp
│   ├── ClapTrap.hpp
│   └── ClapTrap.cpp
├── ex01/
│   ├── Makefile
│   ├── main.cpp
│   ├── ClapTrap.hpp
│   ├── ClapTrap.cpp
│   ├── ScavTrap.hpp
│   └── ScavTrap.cpp
├── ex02/
│   ├── Makefile
│   ├── main.cpp
│   ├── ClapTrap.hpp
│   ├── ClapTrap.cpp
│   ├── ScavTrap.hpp
│   ├── ScavTrap.cpp
│   ├── FragTrap.hpp
│   └── FragTrap.cpp
├── ex03/
│   ├── Makefile
│   ├── main.cpp
│   ├── ClapTrap.hpp
│   ├── ClapTrap.cpp
│   ├── ScavTrap.hpp
│   ├── ScavTrap.cpp
│   ├── FragTrap.hpp
│   ├── FragTrap.cpp
│   ├── DiamondTrap.hpp
│   └── DiamondTrap.cpp
└── README.md
```

## Installation

1. **Clone the Repository:**

   ```sh
   git clone https://github.com/yourusername/CPP03.git
   cd CPP03
   ```

2. **Build the Desired Exercise:**

   ```sh
   cd ex00 && make
   ```

## Usage

Each exercise produces its own executable. Navigate to the exercise directory and run:

**Exercise 00:**
```sh
./claptrap
```

**Exercise 01:**
```sh
./scavtrap
```

**Exercise 02:**
```sh
./fragtrap
```

**Exercise 03:**
```sh
./diamondtrap
```

Each program will demonstrate the construction/destruction chaining and the various actions of the robot classes.

## Submission and Peer Evaluation

- Submit your project through the designated Git repository.
- Only the files within your Git repository will be evaluated during defense.
- Double-check that all file names and structures match the subject requirements.
- Ensure your Makefile compiles without relinking and includes all required rules.
- Pay special attention to construction/destruction order - this is crucial for inheritance.

## Acknowledgments

- Thanks to the 42 community, mentors, and fellow students for their guidance and support.
- Special thanks to resources on C++ inheritance and the diamond problem.

## Disclaimer

**IMPORTANT**:
This project was developed solely as part of the educational curriculum at 42 School. The code in this repository is published only for demonstration purposes to showcase my programming and C++ development skills.

**Academic Integrity Notice**:
It is strictly prohibited to copy or present this code as your own work in any academic submissions at 42 School. Any misuse or uncredited use of this project will be considered a violation of 42 School's academic policies.

## License

This repository is licensed under the Creative Commons - NonCommercial-NoDerivatives (CC BY-NC-ND 4.0) license. You are free to share this repository as long as you:

- Provide appropriate credit.
- Do not use it for commercial purposes.
- Do not modify, transform, or build upon the material.

For further details, please refer to the CC BY-NC-ND 4.0 license documentation.

Developed with dedication and in strict adherence to the high standards of 42 School.
