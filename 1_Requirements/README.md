 # Description
# EM-Calculator(Electro Mathematical Calculator)
* This document specifies the functional requirements for a multi-function calculator program.
* The program is designed to act like a “handheld calculator” with the usual standard functions
 (add, subtract, multiply, divide, exponentiation). 
* Additionally, the calculator will have the additional capability of performing functions based on      
  electrical parameters like (voltage,current,resistance,power,frequency,impedence,period,charge andconductance).
* The program is designed to be as easy to use as a regular calculator.
* This is a C-based command-line calculator that supports typical mathematical operations as well as a  
  collection of functions. 
* Commands are entered using conventional infix syntax, with parenthesis indicating nonstandard operation 
  order.
  
# Requirements

* High Level Requirements
* Low Level Requirements

# High Level Requirements
    *Key to store the entered keys
    *Expression to store the Expression string to be processed
    *Display to show the entered keys and the calculation result
    *Result to store the last result (due to its double function Display cannot store the result)
    *Described basic electrical expression and formulas.

# Low Level Requirements
    *Calculator must not exceed given amount of memory.
    *Calculator should not turn user input into executable code.
    *Invalid operations should be properly reported as such.
    *Calculations should be performed within milliseconds.
    *UI should conform to platform guidelines.