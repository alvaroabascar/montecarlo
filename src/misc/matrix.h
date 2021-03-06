#include <stdio.h>
#ifndef __MATRIX_H__
#define __MATRIX_H__


void mcopy(int rows, int cols, double m[][cols], double dest[][cols]);

void vcopy(int l, double v1[], double v2[]);

void mprint(int rows, int cols, double m[][cols]);

void mfprint(FILE *fp, int rows, int cols, double m[][cols]);

void vprint(int l, double arr[]);

void vector_printf(FILE *fp, int l, double arr[]);

void madd(int rows, int cols, double m1[][cols],
          double m2[][cols], double m3[][cols]);

void vadd(int l, double v1[], double v2[]);

void mprod(int rows, int cols, double m1[][cols],
           int rows2, int cols2, double m2[][cols2],
           double m3[][rows2]);

void transp(int rows, int cols, double m1[][cols], double m2[][rows]);

void scprod(int rows, int cols, double m1[][cols],
            double m2[][cols], double m3[][cols]);

int switchrows(int n, int m, double M[][m], int row1, int row2);

int switchcols(int n, int m, double M[][m], int col1, int col2);

#endif /* __MATRIX_H__ */
