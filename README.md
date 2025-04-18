


# C++ Project 03 - Inheritance

###  General Rules for these projects: 
The purpose of these c++ projects is to get introduced into OOP. We are allowed to use standard c++17. 

- code must be coiled with `c++` and the flags `-Wall -Werror -Wextra`.
- there must be a Makefile for each exercise.
- Class names and corresponding filenames must be written in UpperCamelCase format.
- The `using namespace <ns_name>` and `friend` keywords are forbidden.
- There must be no memory leaks.
- Classes must be designed in the Orthodox Canonical Form.
- There can be no function implementations in headerfiles.
- Headers must be able to be used independently from others.
- Use of STL in the Module 08 and 09 only->no containers / Algorithm header


## 🔶 ex00 Aaaaand... OPEN!
### Objective: Implement a class "ClapTrap" with specified attributes and functions as stated in the subject pdf.


### Usage:
  ```
  cd ex00
  make
  ./ClapTrap
```


### My thoughts: 
- it was a little annoying to implement since the subject is very vague about how exactly it has to behave.


## 🔶 ex01 Serena, my love!
### Ojective: Create a derived robot (class) named "ScavTrap" with different base values and a special function.
### Usage:
  ```
  cd ex01
  make
  ./ScavTrap
```

### My thoughts:
-it was interesting to see the order in which the constructors are called and how syntactically this has to be done.

## 🔶 ex02 
### Ojective: Implement a second derived class "FragTrap" class that also inherits from ClapTrap.
### Usage:
  ```
  cd ex02
  make
  ./FragTrap
```

### My thoughts:
- Repetitive, same as previous exercise.

## 🔶 ex03 Now it’s weird!
### Ojective: Create a monster: a ClapTrap that’s half FragTrap, half ScavTrap. It will be named DiamondTrap
### Usage:
  ```
  cd ex02
  make
  ./DiamondTrap
```

### My thoughts:
- Concept of Diamond inhertence is really interestig.
