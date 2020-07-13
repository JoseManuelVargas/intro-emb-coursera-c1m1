/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h
 * @brief Statistics functions declaration>
 *
 * This file includes the following functions:
 *	main() - The main entry point for your program
 *	print_statistics() - A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *	print_array() - Given an array of data and a length, prints the array to the screen
 * 	find_median() - Given an array of data and a length, returns the median value
 *	find_mean() - Given an array of data and a length, returns the mean
 *	find_maximum() - Given an array of data and a length, returns the maximum
 *	find_minimum() - Given an array of data and a length, returns the minimum
 *	sort_array() - Given an array of data and a length, sorts the array from largest to smallest. (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
 *
 * @author Jose Manuel Vargas Montero
 * @date july 13rd 2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */




/**
 * @brief Prints all the elements of an array
 *
 * Given an array of data and a length, prints the array to the screen
 *
 * @param array: array pointer of size length
 * @param length: size of the array
 *
 * @return void: The output is just to the screen
 */

void print_array(unsigned char * array, size_t length);


/**
 * @brief Returns the mean value of an array
 *
 * Given an array of data and a length, returns the mean of an array to the screen
 *
 * @param array: array pointer of size length
 * @param length: size of the array
 *
 * @return float: The mean value
 */

float find_mean(unsigned char * array, size_t length);


/**
 * @brief Returns the maximum value of an array
 *
 * Given an array of data and a length, returns the maximum of an array to the screen
 *
 * @param array: array pointer of size length
 * @param length: size of the array
 *
 * @return unsigned char: The maximum value
 */

unsigned char find_maximum(unsigned char * array, size_t length);


#endif /* __STATS_H__ */
