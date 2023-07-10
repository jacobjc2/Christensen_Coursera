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
 * @brief Find and print the statistics of a given array.
 *
 * This file provides several functions to find and display statistics
 * of an array, including mean, median, max, and min, as well as sort the
 * given array.
 *
 * @author Jacob Christensen
 * @date July 5, 2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Print array statistics
 *
 * A function that prints the statistics of an array including minimum, maximum, mean, and median.
 * 
 * @param unsigned char *arr - Array to print
 * @param unsigned int length - Length of array
 *
 * @return 0 for success, or 1 for error
 */
int print_statistics(unsigned char *arr, unsigned int length);

/**
 * @brief Print array
 *
 * Given an array of data and a length, prints the array to the screen.
 *
 * @param unsigned char *arr - Array to print
 * @param unsigned int length - Length of array
 *
 * @return 0 for success, or -1 for error
 */
int print_array(unsigned char *arr, unsigned int length);

/**
 * @brief Find median
 *
 * Given an array of data and a length, returns the median value
 *
 * @param unsigned char *arr - Array to find median
 * @param unsigned int length - Length of array
 *
 * @return unsigned int median of array, or -1 for error
 */
int find_median(unsigned char *arr, unsigned int length);

/**
 * @brief Find mean
 *
 * Given an array of data and a length, returns the mean
 *
 * @param unsigned char *arr - Array to find mean
 * @param unsigned int length - Length of array
 *
 * @return unsigned int mean of array, or -1 for error
 */
int find_mean(unsigned char *arr, unsigned int length);

/**
 * @brief Find maximum
 *
 * Given an array of data and a length, returns the maximum
 *
 * @param unsigned char *arr - Array to find max
 * @param unsigned int length - Length of array
 *
 * @return unsigned int median of array, or 1 for error
 */
int find_maximum(unsigned char *arr, unsigned int length);

/**
 * @brief Find minimum
 *
 * Given an array of data and a length, returns the minimum
 *
 * @param unsigned char *arr - Array to find min
 * @param unsigned int length - Length of array
 *
 * @return unsigned int minimum of array, or 1 for error
 */
int find_minimum(unsigned char *arr, unsigned int length);

/**
 * @brief Sort array
 *
 * Given an array of data and a length, sorts the array from largest to smallest.
 * (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
 *
 * @param unsigned char *arr - Array to sort
 * @param unsigned int length - Length of array
 *
 * @return 0 for success, or 1 for error
 */
int sort_array(unsigned char *arr, unsigned int length);

#endif /* __STATS_H__ */
