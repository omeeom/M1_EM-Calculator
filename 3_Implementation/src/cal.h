/**
 * @file cal.h
 * @author Om Gautam (omee1434omee@gmail.com)
 * @brief EM-Calculator
 * @version 0.1
 * @date 2022-03-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef CAL_H_
#define CAL_H_

#include<stdio.h>
#include<stdlib.h>

// function declarations
/**
 * @brief Display
 * 
 * @param n1 
 * @param n2 
 * @param ch 
 * @param result 
 */
void display(float n1, float n2, char ch, float result);
/**
 * @brief add
 * 
 * @param n1 
 * @param n2 
 */
void add(float n1, float n2);
/**
 * @brief subtract
 * 
 * @param n1 
 * @param n2 
 */
void subtract(float n1, float n2);
/**
 * @brief multiply
 * 
 * @param n1 
 * @param n2 
 */
void multiply(float n1, float n2);
/**
 * @brief divide
 * 
 * @param n1 
 * @param n2 
 */
void divide(float n1, float n2);
/**
 * @brief remainder
 * 
 * @param n1 
 * @param n2 
 */
void rem(float n1, float n2);
/**
 * @brief power 
 * 
 * @param n1 
 * @param n2 
 */
void power(float n1, float n2);
/**
 * @brief voltage in volts
 * 
 * @param n1 
 * @param n2 
 */
void voltage(float n1, float n2);
/**
 * @brief current in amps
 * 
 * @param n1 
 * @param n2 
 */
void current(float n1, float n2);
/**
 * @brief capacitance in farad
 * 
 * @param n1 
 * @param n2 
 */
void capacitance(float n1, float n2);
/**
 * @brief resistance in ohms
 * 
 * @param n1 
 * @param n2 
 */
void resistance(float n1, float n2);
/**
 * @brief electrical power in watts
 * 
 * @param n1 
 * @param n2 
 */
void electricalpower(float n1, float n2);
#endif