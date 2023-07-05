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
 * @author Jacob Christensen
 * @date July 5, 2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Print statistics
 *
 * A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * @return 0 for success, or 1 for error
 */
int print_statistics();

/**
 * @brief Print array
 *
 * Given an array of data and a length, prints the array to the screen.
 *
 * @param char *arr - Array to print
 * @param int length - Length of array to print
 *
 * @return 0 for success, or 1 for error
 */
int print_array(char *arr, int length);

/**
 * @brief Find median
 *
 * Given an array of data and a length, returns the median value
 *
 * @param char *arr - Array to print
 * @param int length - Length of array to print
 *
 * @return 0 for success, or 1 for error
 */
int find_median(char *arr, int length);

/**
 * @brief Find mean
 *
 * Given an array of data and a length, returns the mean
 *
 * @param char *arr - Array to print
 * @param int length - Length of array to print
 *
 * @return 0 for success, or 1 for error
 */
int find_mean(char *arr, int length);

/**
 * @brief Find maximum
 *
 * Given an array of data and a length, returns the maximum
 *
 * @param char *arr - Array to print
 * @param int length - Length of array to print
 *
 * @return 0 for success, or 1 for error
 */
int find_maximum(char *arr, int length);

/**
 * @brief Find minimum
 *
 * Given an array of data and a length, returns the minimum
 *
 * @param char *arr - Array to print
 * @param int length - Length of array to print
 *
 * @return 0 for success, or 1 for error
 */
int find_minimum(char *arr, int length);

/**
 * @brief Sort array
 *
 * Given an array of data and a length, sorts the array from largest to smallest.
 * (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
 *
 * @param char *arr - Array to print
 * @param int length - Length of array to print
 *
 * @return 0 for success, or 1 for error
 */
int sort_array(char *arr, int length);

#endif /* __STATS_H__ */
