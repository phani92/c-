# C++ Notes

## Purpose

* I made notes and few examples when i was studying C++. If it can be helpful to anyone out there in anyway then the purpose of this repository is served.
* Happy Learning... Cheers. :D

### General

- The advantage of using c++ is that it provides freedom to handle memory at a very close level to the hardware or OS of a system.
- The program layer just lies over the OS as shown below

```
C++ Program
->
OS
->
PC
```

- Program is compiled which generates an executable file.
- C++ had three major releases namely 11,14 and 17
- Main() is the entry point similar to C
- Namespace can be useful to have a class with similar function name which can be referred differently with the help of scope resolution operator.
- Anything inside double quotes is a string.
- Three types of data types are available namely
  - Built-in : int, char etc...
  - user-defined : struct, union and enum.
  - Derived : array, function and pointer.
- int, float, char, double and boolean are the important variable declarations.
- A variable with same name can be defined both locally and globally. Local variable takes precedence over global.
- 4 types of operators : arithmetic, assignment, comparison and logical.
- :: is called scope resolution operator.
- <endl> is a manipulator.
- Control structures: sequence, selection and loop structure.
- break and continue statements can be used inside a loop which provide control over loop iterations.
- Functions have prototypes and definitions. The main code is written in the definition.
- Formal parameters are the parameters defined in the function prototype. Actual parameters are the values passed during runtime.
- Inline functions are good for a small piece of code as compiler prints it as it is and this increases the code-size. The compiler has complete control of accepting a in-line function or discarding it.
- Static variable value holds the value and runs only once.
- C++ class function prototypes can be declared with multiple types of declarations having different passable parameters in it.
- Recursive functions are possible in c++ but care needs to be taken that it is also exited correctly or we may end up in an infinite loop.
- Constructor overloading is a concept that allows multiple usage of a constructor. Empty or default constructors are used to have a default declaration such that it can be used incase of a wrong call.
- Copy constructor - a compiler automatically creates a copy of every customer but incase a copy constructor is declared then it will be used.
- Examples
  - `basics.cpp`
  - `binaryDriver.cpp`
  - ``

### Destructors

- It destroys the objects and free's the memory that was taken by a constructor.
- It never takes an argument or returns a value.
- Destructor syntax: `~<class_name>`.
- A block is a set of statements inside parenthesis. Objects created inside this block is also destructed at the exit of the block.

### Inheritance

- It is a part of OOPS.
- Including a class inside another class as a subset it can be called as inheritance.
- The existing class is called as Base class.
- New class which is inherited is called as derived class.
- There are different types of inheritance in c++.
  - Single inheritance - A single base class is used to derive another class.
    ```mermaid!
        graph TD;
        A[Base class] -->B[Derived Class];
    ```
    - Example - `eg_singleInhrtnc.cpp`
  - Multiple inheritance - A derived class with more than one base class.
    ```mermaid!
        graph TD
        A[Base class] -->B[Derived Class]
        C[Base class] -->B[Derived Class]
        D[Base class] -->B[Derived Class]
    ```
  - Hierarchial inheritance - Several derived class from single base class.
    ```mermaid!
        graph TD
        A[Base class] -->B[Derived Class]
        A[Base class] -->C[Derived Class]
        A[Base class] -->D[Derived Class]
    ```
  - Multi-level inheritance - Deriving a class from already derived class.
    ```mermaid!
        graph TD
        A[Base class] -->B[Derived Class]
        B[A Derived Class] -->C[B Derived Class]
        C[B Derived Class] -->D[C Derived Class]
    ```
  - Hybrid inheritance - It is a combination of multiple and multilevel inheritance.A class is derived from two classes as in multiple inheritance. However, one of the parent classes is not a base class.
    ```mermaid!
        graph TD
        A[A Base class] -->B[B Derived Class]
        B[B Derived Class] -->E[E Derived Class]
        D[D Derived Class] -->E[E Derived Class]
    ```
    - Hybrid inheritance is a mix of multiple inheritance and single inheritance. Can have multiple combinations of other inheritances.
- Arrows are used to draw a relation between base class and derived class.
  ```
  Base class ---> Derived class
  A --> B --> C --> D --> E
  ```
  - ABCDE is called inheritance path.
- Syntax:
  - Single inheritance class
  ```
  /* Derived class syntax
  class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
  */
  ```
  - Multiple inheritance class
  ```
  /* Derived class syntax
  class {{derived-class-name}} : {{visibility-mode}} {{base-class-name-1}}, {{visibility-mode}} {{base-class-name-2}}
  */
  ```
  - Keywords for visibility mode is `private` and `public`. It specifies how a base class elements are inherited.
  - when a derived class visibility is defined as `private` then the public members of the base class become private members of the derived class.
  - when a derived class visibility is defined as `public` then the public members of the base class remain public members of the derived class.
  - Default visibility mode is `private`.
  - Private members of a base class can never be inherited by any derived class.

### Different modes of deriving a class

| Members   | Public derivation | Private derivation | Protected derivation |
| --------- | ----------------- | ------------------ | -------------------- |
| Private   | Not inherited     | not inherited      | not inherited        |
| Protected | Protected         | Private            | Protected            |
| Public    | Public            | private            | protected            |

* Ambiguity resolution - When there is a function with same name in two different base classes of a derived class then the derived class gets confused of this ambiguity and throws an error. A scope resolution operator can be given in such case to specify which function needs to be used.
  ```
    Base: {};
    derived{
      void example{
        Base::exfunc();
      }
    };
  ```
* Ambiguity is sometimes solved by itself when the same function is also defined in the derived class. In such a scenario, the function defined in derived class has preference over the function defined in base class.

### Virtual Base class

* When multiple classes are derived from a base class and further, another class is derived from the previously derived classes then there can be a possibility of duplication and ambiguity that can arise because of the presence of base class elements in the derived classes.
  ```mermaid!
  graph TD
    A[Base class] -->B[Derived Class]
    A[Base class] -->C[Derived Class]
    B[Derived class] -->D[sub-Derived Class]
    C[Derived class] -->D[sub-Derived Class]
  ```
* In such a case virtual class can be used such that when multiple classes are inherited then the common elements of a base class are only inherited once.
* syntax:
  ```
  class Base{};
  class derived_1 : virtual public Base {};
  class derived_2 : virtual public Base {};
  class sub-derived : public derived_1, public derived_2 {};
  ```
##### Constructors in derived classes

* The base classes constructor is by default available in the derived class.
* if base class constructors does not have any arguments, there is no need of any constructor in derived class.
* if both base and derived classes have constructors, base class constructor is executed first.
* Incase of multiple inheritance the constructor of first base class that is declared is used first.
* In multilevel inheritance, the order of inheritance is respected for constructor preference.
* Special syntax for handling multiple base class constructors with arguments during derived class declaration
  ```
  Derived-constructor (arg1, arg2, arg3, ....): Base1-Constructor(arg1, arg2),
                                                Base-2-constructor(arg3, arg4){};
  ```
* The constructors of virtual base class have the highest precedence.

##### Initialization list in constructors

* Syntax for initialization list in constructor:
  ```
  constructor (argument-list) : initialization-section
  {
    assignment + other code;
  }

  eg:

  class Test{
    int a;
    int b;
    public:
      Test(int i, int j) : a(i), b(j){constructor-body}

    // a(i) assigns value to variable a.
    // b(j) assigns value to variable b.
  }
  ```
* Different scenarios of constructor initialization
  ```
  class Test{
    int a; // This order is important and has to be respected during initialization
    int b;
    public:

      Test(int i, int j) : a(i), b(j) --> works as expected
      Test(int i, int j) : a(i), b(a + j) --> works
      Test(int i, int j) : a(i), b(i + j) --> works
      Test(int i, int j) : a(i), b(2 * j) --> works
      Test(int i, int j) : b(j), a(i + b) --> it will fail as a is always initialized first.
  }
  ```

* A block of memory can be assigned to a pointer using `new` keyword. `delete` frees the allocated block of memory.
* `this` pointer returns the respective object of the respective class.

##### Polymorphism

* `poly` means many and `morphism` means forms.
* one name multiple forms.
* function overloading is an example of polymorphism.
  ```mermaid!
  graph TD
    A[Polymorphism] -->B[compile time pm]
    A[Polymorphism] -->C[Run time pm]
    B[compile time pm] --> D(function overloading)
    B[compile time pm] --> E(operator overloading)
    C[Run time pm] --> F(virtual functions)
  ```
* Compile time polymorphism like function overloading defines which function will be called depending on the declarations or parameters during compile time. The function is bind during compile time. Its also called as early binding.
* Run time polymorphism decides the function to be used during the run time with the help of virtual function declarations with the help of pointer type. Late binding happens here.
* In polymorphism, when a pointer of a base class needs to use the derived class method instead of the base class method then `virtual function` can be used. This will tell the compiler to use the derived class method and not the pointer pointing method.
* Example - `pointer_baseToDerived.cpp`

###### Rules for virtual functions

* They cannot be static.
* They are accessed by object pointers.
* Virtual functions can be a friend of another class.
* It is not compulsory that virtual function of a base class should be used.
* If a virtual function is defined in a base class there is no compulsion that it should also be redefined in the derived class.

###### Abstract base class and pure virtual functions

* When a base class is defined only on a sole purpose to create derived classes out of it then this base class is called as abstract base class.
*  `virtual void anything()=0;` is referred as do-nothing function and such a function inside a base class is called as pure virtual function.
*  An abstract base class should compulsorily have virtual functions such that the derived classes can implement their respective virtual function.

###### File I/O

* `File` - Its a pattern of data that is stored on a disk.
* A file can be accessed by a program using input and output stream.
* The useful classes for working with files in c++ are:
  * `fstreambase`
  * `ifstream`
  * `ofstream`
* A file can be opened in two ways:
  * Using the constructor
  * Using the member function open() of the class.

###### Templates

* As class is for an object, template is for a class.
* Code reusability is termed as dry(Do not repeat yourself) principle.
* Templates are also called as parameterized classes.
* Syntax:
  ```
  template<class T>
  class yourDesiredName{
    T variableName;
    T functionName(anything)();
  }
  ```
* Syntax for multiple parameters:
  ```
  template<class T1, class T2>
  class yourDesiredName{
    T1 variableName;
    T2 variableName;
    T functionName(anything)();
  }
  ```
* In T1 or T2 any type specifier can be passed like int, char, float etc..
* syntax for templates with default parameters:
  ```
  template <class T1 = int, T2 = float>
  ```
  In this case if a type is not specified then the default type will be assigned to the variable.
* syntax for function templates:
  ```
  template <class T1, class T2>
  T1 func1(T1 a, T2 b){
    return a+b;
  }
  ```
* Exact match of a function takes priority in function overloading with or without templates.

###### STL

* Standard template library. It consists of generic classes and functions.
* Components of STL:
  * Containers
    * Stores data and uses template classes
    * There are three types of containers
      * `Sequence containers`: They store data in linear.
        * Vector
          * Random access is fast
          * insertion, deletion is slow in middle.
          * insertion, deletion at the end is fast.
        * list
          * Random access is slow
          * insertion in the middle is fast
          * at the end is also fast.
        * dequeue
      * `Associative containers`: Direct access using map and multimap concepts.
        * set/multiset
        * map/multimap
        * Maps are used to map identifier and value like json.
      * `Derived containers`:
        * Real world modelling
        * stack - lifo
        * queue - fifo
        * priority queue
  * Algorithms
    * search, sort, etc...
  * Iterators
    * object that points to an element in a container.
    * Handled just like pointers.
    * Connects algorithms with containers.

###### Function objects

* Function wrapped in class so that it is available like an object.
* It is also called as functor.
