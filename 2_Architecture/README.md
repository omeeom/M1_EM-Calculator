# Design

![image](https://user-images.githubusercontent.com/80105220/156134523-beb18c9a-dbf5-42ff-857c-f53eb831c31f.png)


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
    
 # FLOWCHART  
       
       ![EM FLOWCHART (1)](https://user-images.githubusercontent.com/80105220/156557725-2f381f3a-cf9c-416a-b171-92b21185e772.jpeg)

