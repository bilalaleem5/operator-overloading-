# operator-overloading-Overview
This repository contains a C++ program that defines a Fraction class and implements various arithmetic and relational operations on fractions. The Fraction class allows for the creation, manipulation, and comparison of fractional numbers using object-oriented programming techniques.

Key Features of the Fraction Class
Class: Fraction

Description:

Represents a fractional number with a numerator (nom) and a denominator (denom).
Supports constructors for creating fractions with default values, integer numerators, integer numerators and denominators, and copy initialization.
Provides methods to retrieve (getNum, getDenom) and set (setnum, setdenom) the numerator and denominator of the fraction.
Arithmetic Operations:

Overloaded operators (+, -, *, /) enable addition, subtraction, multiplication, and division of fractions.
Compound assignment operators (+=, -=, *=, /=) modify the current fraction by performing the corresponding arithmetic operation with another fraction.
Unary operators (++, --) for both prefix and postfix increment and decrement operations.
Relational Operations:

Comparison operators (==, !=, <, >, <=, >=) allow comparisons between fractions based on their values.
Logical operators (&&, ||) for logical operations between fractions.
Indexing Operator:

Provides access to fractional elements using the indexing operator ([]), facilitating array-like access to fractions.
Normalization and GCD Calculation:

Includes a normalize() function to simplify the fraction by dividing both the numerator and denominator by their greatest common divisor (GCD), ensuring fractions are in their simplest form.
Utilizes the GCD function to compute the greatest common divisor, which is essential for fraction normalization.
Input and Output:

Overloaded stream insertion (<<) and extraction (>>) operators enable seamless input and output operations for fractions, enhancing user interaction and program usability.
Functionality and Usage
Object-Oriented Approach:

Encapsulates data (numerator and denominator) and operations (arithmetic, relational) within the Fraction class, promoting code reusability and modularity.
Ensures data integrity and encapsulation by utilizing private member variables with public getter and setter methods.
Operator Overloading:

Facilitates intuitive and natural syntax for performing arithmetic and comparison operations on fractions, mimicking built-in types in C++.
Error Handling and User Interaction:

Implements error handling mechanisms within input functions (operator>>) to validate user input and ensure fractions are correctly initialized.
Conclusion
This repository exemplifies effective implementation of a Fraction class in C++ for managing and manipulating fractional numbers. It demonstrates the power of operator overloading and object-oriented principles in creating a robust and user-friendly fractional arithmetic system.

Recommendations
Expand functionality to include additional mathematical operations such as exponentiation (^) and modulus (%) for comprehensive fraction handling.
Enhance documentation within the code to clarify complex algorithms and improve code readability for future maintenance.
This report provides an overview of the Fraction class implementation, highlighting its features, functionality, and potential for further development. It serves as a comprehensive guide for understanding and utilizing the provided C++ program effectively.
