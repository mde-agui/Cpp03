# C++ Module 03 - Inheritance

![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Linux](https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black)
![macOS](https://img.shields.io/badge/macOS-000000?style=for-the-badge&logo=apple&logoColor=white)
![42](https://img.shields.io/badge/42-Project-00BABC?style=for-the-badge)
![Score](https://img.shields.io/badge/Score-100%25-brightgreen?style=for-the-badge)

## 📋 Project Overview

C++ Module 03 is the fourth project in the 42 school C++ curriculum, focusing on inheritance and polymorphism in C++98. Through four exercises—**Aaaaand... OPEN!**, **Repetitive work**, **Now it’s weird!**, and **DiamondTrap**—this module introduces single, multiple, and virtual inheritance, virtual functions, and proper class hierarchy design. It enforces strict coding standards, including no forbidden functions, explicit namespace usage, and robust memory management, preparing students for advanced C++ concepts like polymorphism and abstract classes.

Each exercise builds on the previous one, starting with basic inheritance and culminating in the complex diamond inheritance structure of `DiamondTrap`. The module emphasizes proper constructor/destructor implementation, attribute inheritance, and resolving ambiguities in multiple inheritance scenarios.

## ✨ Key Features

- **Exercise 00: Aaaaand... OPEN!**:
  - Implements a simple inheritance hierarchy with a base class (`ClapTrap`) and a derived class (`ScavTrap`).
  - Introduces single inheritance and method overriding (e.g., `attack()`).
- **Exercise 01: Repetitive work**:
  - Extends the hierarchy with `FragTrap`, adding new attributes and methods (e.g., `highFivesGuys()`).
  - Demonstrates multiple derived classes sharing a common base.
- **Exercise 02: Now it’s weird!**:
  - Introduces virtual functions to ensure proper polymorphism.
  - Uses a more complex hierarchy to test method resolution and destructor behavior.
- **Exercise 03: DiamondTrap**:
  - Implements diamond inheritance with `ClapTrap` as a virtual base class, `ScavTrap` and `FragTrap` as intermediate classes, and `DiamondTrap` combining them.
  - Inherits `_hitPoints` (100) and `_attackDamage` (30) from `FragTrap`, `_energyPoints` (50) and `attack()` from `ScavTrap`.
  - Manages names with `ClapTrap::_name` suffixed (`name_clap_name`) and `DiamondTrap::_name` unsuffixed.
  - Includes `whoAmI()` to display both names and attributes.
- **C++98 Compliance**:
  - Compiled with `-Wall -Wextra -Werror -std=c++98`.
  - No `using namespace`, `friend`, or forbidden functions (`printf`, `alloc`, `free`).
- **Norm Compliance**:
  - Adheres to 42’s coding standards, with newline-terminated outputs and no memory leaks (verified with `valgrind`).

## 🛠️ Prerequisites

- **Operating System**: UNIX-based (Linux, macOS, etc.).
- **Compiler**: `c++` (GCC or Clang, C++98 compatible).
- **Build Tool**: `make`.
- **Debugger**: `valgrind` for memory leak detection.

## 🚀 Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/mde-agui/Cpp03.git
   cd Cpp03
   ```

2. Navigate to an exercise directory and compile:
   ```bash
   cd ex03
   make
   ```
   Repeat for `ex00`, `ex01`, `ex02`. This creates executables (e.g., `claptrap`, `diamondtrap`).

## 📖 Usage

Each exercise is independent and run from its respective directory.

### Exercise 00: Aaaaand... OPEN!
```bash
cd ex00
./claptrap
```
Output: Creates a `ClapTrap` and `ScavTrap`, demonstrating basic inheritance and overridden `attack()`.

### Exercise 01: Repetitive work
```bash
cd ex01
./claptrap
```
Output: Adds `FragTrap`, showing new methods like `highFivesGuys()` and inherited attributes.

### Exercise 02: Now it’s weird!
```bash
cd ex02
./claptrap
```
Output: Tests virtual functions with polymorphic behavior, printing overridden methods and destructor calls.

### Exercise 03: DiamondTrap
```bash
cd ex03
./diamondtrap
```
Output:
```
ClapTrap Lydia_clap_name constructed!
FragTrap Lydia constructed!
ScavTrap Lydia constructed!
DiamondTrap Lydia constructed!
I am DiamondTrap Lydia, my ClapTrap name is Lydia_clap_name
Hit points: 100
Energy points: 50
Attack Damage: 30
ScavTrap Lydia savagely attacks Draugr, causing 30 points of damage!
ClapTrap Lydia_clap_name takes 50 points of damage! HP left: 50
ClapTrap Lydia_clap_name is repaired for 20 hit points! HP now: 70
FragTrap Lydia requests a positive high-five!
ScavTrap Lydia is now in Gate keeper mode!
ClapTrap Lydia_clap_name copy constructed!
FragTrap Lydia copy constructed!
ScavTrap Lydia copy constructed!
DiamondTrap Lydia copy constructed!
I am DiamondTrap Lydia, my ClapTrap name is Lydia_clap_name
Hit points: 100
Energy points: 50
Attack Damage: 30
ClapTrap Temp_clap_name constructed!
FragTrap Temp constructed!
ScavTrap Temp constructed!
DiamondTrap Temp constructed!
ClapTrap Lydia_clap_name assigned!
FragTrap Lydia assigned!
ScavTrap Lydia assigned!
DiamondTrap Lydia assigned!
I am DiamondTrap Lydia, my ClapTrap name is Lydia_clap_name
Hit points: 100
Energy points: 50
Attack Damage: 30
DiamondTrap Lydia destroyed!
ScavTrap Lydia destroyed!
FragTrap Lydia destroyed!
ClapTrap Lydia_clap_name destroyed!
DiamondTrap Lydia destroyed!
ScavTrap Lydia destroyed!
FragTrap Lydia destroyed!
ClapTrap Lydia_clap_name destroyed!
DiamondTrap Lydia destroyed!
ScavTrap Lydia destroyed!
FragTrap Lydia destroyed!
ClapTrap Lydia_clap_name destroyed!
```

Check for memory leaks:
```bash
valgrind ./diamondtrap
```

## 📂 Project Structure

```
cpp_module_03/
├── ex00/                   # Aaaaand... OPEN!: Basic inheritance
│   ├── Makefile
│   ├── ClapTrap.hpp
│   ├── ClapTrap.cpp
│   ├── ScavTrap.hpp
│   ├── ScavTrap.cpp
│   └── main.cpp
├── ex01/                   # Repetitive work: Multiple derived classes
│   ├── Makefile
│   ├── ClapTrap.hpp
│   ├── ClapTrap.cpp
│   ├── ScavTrap.hpp
│   ├── ScavTrap.cpp
│   ├── FragTrap.hpp
│   ├── FragTrap.cpp
│   └── main.cpp
├── ex02/                   # Now it’s weird!: Virtual functions
│   ├── Makefile
│   ├── ClapTrap.hpp
│   ├── ClapTrap.cpp
│   ├── ScavTrap.hpp
│   ├── ScavTrap.cpp
│   ├── FragTrap.hpp
│   ├── FragTrap.cpp
│   └── main.cpp
├── ex03/                   # DiamondTrap: Diamond inheritance
│   ├── Makefile
│   ├── ClapTrap.hpp
│   ├── ClapTrap.cpp
│   ├── ScavTrap.hpp
│   ├── ScavTrap.cpp
│   ├── FragTrap.hpp
│   ├── FragTrap.cpp
│   ├── DiamondTrap.hpp
│   ├── DiamondTrap.cpp
│   └── main.cpp
└── README.md               # This file
```

## 🛠️ Makefile Commands

Each exercise has its own `Makefile` with the following commands:

| Command       | Description                              |
|---------------|------------------------------------------|
| `make`        | Builds the executable (e.g., `claptrap`, `diamondtrap`). |
| `make clean`  | Removes object files.                    |
| `make fclean` | Removes object files and executable.     |
| `make re`     | Rebuilds the project from scratch.       |

## 🔍 Technical Details

- **C++ Concepts Covered**:
  - **Inheritance**: Single, multiple, and virtual inheritance, detailed below.
  - **Virtual Functions**: Introduced in Ex02 to enable polymorphism.
  - **Constructors/Destructors**: Proper initialization and cleanup, with virtual destructors to prevent undefined behavior.
  - **Attribute Inheritance**: In Ex03, `DiamondTrap` inherits `_hitPoints` (100) and `_attackDamage` (30) from `FragTrap`, `_energyPoints` (50) from `ScavTrap`.
  - **Method Overriding**: `ScavTrap::attack()` overrides `ClapTrap::attack()`, used by `DiamondTrap`.
  - **Name Handling**: Uses `std::string::substr` in `ScavTrap` and `FragTrap` to remove `_clap_name` suffix in output.
  - **this->**: Disambiguates member variables.
- **Constraints**:
  - Compiled with `-Wall -Wextra -Werror -std=c++98`.
  - No `using namespace`, `friend`, or forbidden functions (`printf`, `alloc`, `free`).
  - No memory leaks, verified with `valgrind`.
  - Outputs end with newlines (per subject requirements).
- **External Functions**:
  - Allowed: `std::string`, `std::cout`, `std::endl`, `std::string::substr`.
- **Error Handling**:
  - Checks for zero hit points or energy points in `attack()` and `beRepaired()`.

## 📚 Explanation of Inheritance

Inheritance is a fundamental C++ feature that allows a derived class to inherit attributes and methods from a base class, promoting code reuse and hierarchical design. This module explores three types of inheritance through its exercises:

### Single Inheritance
- **Definition**: A derived class inherits from one base class.
- **Example**: In Ex00, `ScavTrap` inherits from `ClapTrap` (via `virtual public ClapTrap`). `ScavTrap` inherits `_name`, `_hitPoints`, `_energyPoints`, and `_attackDamage`, and overrides `attack()` to print “savagely attacks”.
- **Syntax**:
  ```cpp
  class ScavTrap : virtual public ClapTrap {
  public:
      ScavTrap(const std::string& name) : ClapTrap(name + "_clap_name") {
          _hitPoints = 100;
          _energyPoints = 50;
          _attackDamage = 20;
          std::cout << "ScavTrap " << name << " constructed!" << std::endl;
      }
  };
  ```
- **Why It Matters**: Enables code reuse by inheriting `ClapTrap`’s functionality while allowing `ScavTrap` to customize attributes and behavior.

### Multiple Inheritance
- **Definition**: A derived class inherits from multiple base classes.
- **Example**: In Ex03, `DiamondTrap` inherits from both `FragTrap` and `ScavTrap`, gaining their attributes (`_hitPoints` from `FragTrap`, `_energyPoints` from `ScavTrap`) and methods (`highFivesGuys()` from `FragTrap`, `guardGate()` from `ScavTrap`).
- **Syntax**:
  ```cpp
  class DiamondTrap : public FragTrap, public ScavTrap {
  private:
      std::string _name;
  public:
      DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) {
          _name = name;
          std::cout << "DiamondTrap " << _name << " constructed!" << std::endl;
      }
  };
  ```
- **Challenges**: Without virtual inheritance, `DiamondTrap` would inherit two `ClapTrap` instances, causing ambiguity (the diamond problem).

### Virtual Inheritance
- **Definition**: Ensures a single instance of a common base class in a multiple inheritance hierarchy.
- **Example**: In Ex03, `ScavTrap` and `FragTrap` use `virtual public ClapTrap`, so `DiamondTrap` inherits only one `ClapTrap` instance. This ensures a single `_name`, `_hitPoints`, `_energyPoints`, and `_attackDamage`.
- **Syntax**:
  ```cpp
  class ScavTrap : virtual public ClapTrap { ... };
  class FragTrap : virtual public ClapTrap { ... };
  class DiamondTrap : public FragTrap, public ScavTrap { ... };
  ```
- **Project Usage**: In `DiamondTrap`, virtual inheritance ensures one `ClapTrap::_name` (e.g., “Lydia_clap_name”). `ScavTrap` and `FragTrap` use `std::string::substr` to print unsuffixed names (e.g., “Lydia”) in their messages.
- **Why It Matters**: Resolves the diamond problem, preventing duplicate base class instances and ensuring consistent state.

### Attribute and Method Inheritance in DiamondTrap
- **Mechanics**: `DiamondTrap` inherits attributes based on the order of constructor initialization and inheritance declaration (`FragTrap` before `ScavTrap`).
  - `_hitPoints` (100) and `_attackDamage` (30) come from `FragTrap`’s constructor.
  - `_energyPoints` (50) comes from `ScavTrap`’s constructor, which runs after `FragTrap`.
  - `attack()` is resolved to `ScavTrap::attack()`, producing “savagely attacks” with `_attackDamage=30`.
- **Why It Matters**: Demonstrates precise control over attribute and method inheritance in a complex hierarchy.

## 📝 Notes

- **Implementation Details**:
  - Ex03 uses `std::string::substr` to handle `_clap_name` suffix in `ScavTrap` and `FragTrap` output.
  - Virtual destructors ensure proper cleanup in the inheritance hierarchy.
- **Testing**:
  - `valgrind` verifies no memory leaks across all exercises.
  - Test cases cover construction, copying, assignment, and method calls.
- **Evaluation**:
  - Outputs match subject requirements (e.g., correct attribute values, name handling).
  - Adheres to 42’s Norminette equivalent (manual checks for line length, naming).

## 📜 License

This project is licensed under the [MIT License](LICENSE).

## 👤 Author

**mde-agui**  
GitHub: [mde-agui](https://github.com/mde-agui)

---

⭐️ If you find this project useful, consider giving it a star on GitHub!