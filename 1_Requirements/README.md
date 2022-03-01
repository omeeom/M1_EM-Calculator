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
    HLR  |          DESCRIPTION
  -------|------------------------------------------------------------------------
  `HLR_1`| Key to store the entered keys.
  `HLR_2`| Expression to store the Expression string to be processed.
  `HLR_3`| Display to show the entered keys and the calculation result.
  `HLR_4`| Result to store the last result (due to its double function Display cannot store the result).
  `HLR_5`| Described basic electrical calculations.

# Low Level Requirements
  * Calculator must not exceed given amount of memory.
  * Calculator should not turn user input into executable code.
  * Invalid operations should be properly reported as such.
  * Calculations should be performed within milliseconds.
  * UI should conform to platform guidelines.

# Swot Analysis
  # Strength :
  The Electro Mathematical Calculators are novel, user-friendly,long-lasting and multitasking.
  # weakness :
  All the operations are not included only addition,subtraction multiplication, division ,power and few basic electrical operations.
  # Opportunity :
  The tech-based sector has a lot of room to grow in terms of grabbing the youth demographic. And this calculator can help in electrical calculation without knowing the exect formulas of certain parameters.
  # Threat :
   Competetion and Growth in new technologies are threat beacuse of leading inventions.

  # Operations

* Addition
* Subtraction
* Multiplication
* Division
* Remainder
* Power(x^y)
* Voltage
* Current
* Capacitance
* Resistance
* Electrical Power
