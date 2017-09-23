/*
 * linear_search.h
 *
 *  Created on: 23 lug 2017
 *      Author: gabriele
 */

#ifndef LINEAR_SEARCH_H_
#define LINEAR_SEARCH_H_

#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ZERO   		     0
#define ONE  		     1
#define MAX_LENGTH       20
#define MAX_NUMBER       100
#define PRINT_ARRAY      "\nArray generato: "
#define PRINT_ELEMENT    "%d "
#define PRINT_NUMBER     "\nNumero da cercare nell'array: %d "
#define PRINT_FOUND      "\nNumero presente nell'array\n"
#define PRINT_NOT_FOUND  "\nNumero non presente nell'array\n"
#define FILE_NAME        "linear_search.txt"
#define FILE_MODE        "w"

/**
 * Assicura che ad ogni lancio il programma generi
 * in modo casuale numeri sempre diversi
 */
void srand_time();

/**
 * Genera in modo casuale la lunghezza dell'array in cui effettuare l'array
 * @post il numero generato deve essere un numero intero maggiore di 0
 * @return
 */
int get_length();

/**
 * Genera in modo casuale gli elementi dell'array di dimensione
 * stabilita dal parametro length
 * @pre il parametro length deve essere un numero intero maggiore di 0
 * @param length
 * @return
 */
int* get_array(int length);

/**
 * Stampa su file gli elementi dell'array di dimensione
 * stabilita dal parametro length
 * @pre il parametro length deve essere un numero intero maggiore di 0
 * @pre il file deve essere aperto
 * @param file
 * @param array
 * @param length
 */
void print_array(FILE* file, int* array, int length);

/**
 * Genera in modo casuale il numero da cercare nell'array
 * @return
 */
int get_number();

/**
 * Stampa su file il numero da cercare nell'array
 * @pre il file deve essere aperto
 * @param file
 * @param number
 */
void print_number(FILE* file, int number);

/**
 * Verifica la presenza di un numero nell'array di dimensione
 * stabilita dal parametro length
 * @pre il parametro length deve essere maggiore di 0
 * @param array
 * @param length
 * @param number
 * @return
 */
bool linear_search(int* array, int length, int number);

/**
 * Stampa su file il risultato della ricerca
 * @pre il file deve essere aperto
 * @param file
 * @param array
 * @param length
 * @param number
 */
void print_search_result(FILE* file,int* array, int length, int number);

#endif /* LINEAR_SEARCH_H_ */
