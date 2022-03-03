
   #### Folder Structure
Folder             | Description
-------------------| -----------------------------------------
`0_Certificates`   | Documents detailing certificates 
`1_Requirements`   | Documents detailing requirements and research
`2_Architecture`         | Documents specifying design details
`3_Implementation` | All codes (source code,build and make file) in src file
`4_Testplan and output`      | Documents with test plans and procedures
`5_Report`      | All the details covered
`6_ImagesAndVideos`   | Required images used in project
`7_Others`   | Other details
`8_References`   | Sites from where reference has been taken

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
  * Key to store the entered keys
  * Expression to store the Expression string to be processed
  * Display to show the entered keys and the calculation result
  * Result to store the last result (due to its double function Display cannot store the result)
  * Described basic electrical calculations.

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

# High Level Design

## Block Diagram

![image](https://user-images.githubusercontent.com/80105220/156134523-beb18c9a-dbf5-42ff-857c-f53eb831c31f.png)

    
 # Low Level Design
 
 ## Flowchart
 
 ![EM FLOWCHART](https://user-images.githubusercontent.com/80105220/156567549-c1ebf82e-6e08-4018-a7bd-5adf3401dd9f.jpeg)

   
# The calculator control system

    Before we start to think about a calculator state machine we should make a design of the
    calculator control system.

    We may consider a calculator control as a system that reacts to keys performing all elementary
    actions. This approach is a dead end street leading to a very complex state machine that is difficult
    to handle.
    
    We define another way that is based on the observation that a calculator is a builder of
    strings that are executed when complete. The rules for handling such a calculator system are fairly
    simple:
    • Parse the incoming keys and assign them to the appropriate control value.
    • Complete an Expression string from incoming keys.
    • Perform a calculation defined by the Expression string according to arithmetic rules, when
      encountering operator keys +, -, *, / as well as the Equals key =. 
      We notice that we need several calculation functions as the the rule for a calculation after 
      Equals key and addition and subtraction operators are different than for multiplication and division operators.
    • Electrical formulas or parameter are included for easy calculation.
     


# PDLC Based Learning Outcome
# Codiga(Code Inspector Link)

   ![Code grade](https://api.codiga.io/project/30926/status/svg)

   ![Code grade](https://api.codiga.io/project/30926/score/svg)

# Codacy

  [![Codacy Badge](https://app.codacy.com/project/badge/Grade/8f0c00e16d924e77be297d6eb791c172)](https://www.codacy.com/gh/omeeom/M1_EM-Calculator_Utility/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=omeeom/M1_EM-Calculator_Utility&amp;utm_campaign=Badge_Grade)
