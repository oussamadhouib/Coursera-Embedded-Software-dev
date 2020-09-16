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
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author oussama dhouib
 * @date 16 sep 2020
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

void print_statistics(unsigned char array[], unsigned int length);


/** 
 * @brief Given an array of data and a length, prints the array to the screen
 *
 * @param array An array of unsigned chars
 * @param length The length of the array
 *
 * @return NULL
 */
void print_array(unsigned char array[], unsigned int length);


/** 
 * @brief Given an array of data and a length, returns the median value
 *
 * @param array An array of unsigned chars
 * @param length The length of the array
 *
 * @return median The median of the array
 */
unsigned char find_median(unsigned char array[], unsigned int length);


/** 
 * @brief Given an array of data and a length, returns the min value
 *
 * @param array An array of unsigned chars
 * @param length The length of the array
 *
 * @return median The min of the array
 */
unsigned char find_min(unsigned char array[], unsigned int length);


/** 
 * @brief Given an array of data and a length, returns the max value
 *
 * @param array An array of unsigned chars
 * @param length The length of the array
 *
 * @return median The max of the array
 */
unsigned char find_max(unsigned char array[], unsigned int length);


/** 
 * @brief Given an array of data and a length, returns the mean value
 *
 * @param array An array of unsigned chars
 * @param length The length of the array
 *
 * @return median The mean of the array
 */
unsigned char find_mean(unsigned char array[], unsigned int length);


/** 
 * @brief Sorts the array using selection sort
 *
 * Selection sort is used despite its O(n^2) runtime because it has a 
 * spatial complexity of O(1) and that is more important in this 
 * embedded system context (limited memory).
 *
 * @param array An array of unsigned chars
 * @param length The length of the array
 */
void sort_array(unsigned char array[], unsigned int length);




#endif /* __STATS_H__ */
