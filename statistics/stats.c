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
 * @file stats.c 
 * @brief stats.h functions implementation
 *
 * Here we implement each function from stats.h file
 *
 * @author Jose Manuel Vargas Montero
 * @date july 13rd, 2020
 *
 */



#include <stdio.h>
#include "stats.h"



void print_array(unsigned char * array, size_t length) {
	printf("[ ");
	for (int i = 0; i < length; i++) {
		if (i == length - 1) {
			printf("%d", array[i]);
		}
		else {
			printf("%d, ", array[i]);
		}
	}
	printf("]\n");
}


float find_mean(unsigned char * array, size_t length) {
	float mean_value = 0.0f;
	for (int i = 0; i < length; i++) {
		mean_value += array[i];
	}
	return mean_value / length;
}


unsigned char find_maximum(unsigned char * array, size_t length) {
	unsigned char max_value = array[0];
        for (int i = 1; i < length; i++) {
		if (array[i] > max_value) {
	                max_value = array[i];
		}
        }
        return max_value;
}


unsigned char find_minimum(unsigned char * array, size_t length) {
        unsigned char min_value = array[0];
        for (int i = 1; i < length; i++) {
                if (array[i] < min_value) {
                        min_value = array[i];
                }
        }
        return min_value;
}


void sort_array(unsigned char * array, size_t length) {
	unsigned char aux;
	for (int i = 0; i < length; i++) {
		for (int j = i + 1; j < length; j++) {
			if (array[i] < array[j]) {
				aux = array[i];
				array[i] = array[j];
				array[j] = aux;
			}
		}
	}
}


/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  float mean_value;
  unsigned char max_value;
  unsigned char min_value;
  /* Statistics and Printing Functions Go Here */

  print_array(test, SIZE);
  mean_value = find_mean(test, SIZE);
  printf("The mean value is %.2f\n", mean_value);
  max_value = find_maximum(test, SIZE);
  printf("The maximum value is %d\n", max_value);
  min_value = find_minimum(test, SIZE);
  printf("The minimum value is %d\n", min_value);
  sort_array(test, SIZE);
  printf("Sorted array\n");
  print_array(test, SIZE);

}

/* Add other Implementation File Code Here */

