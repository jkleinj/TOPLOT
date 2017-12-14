/*===============================================================================
 $Id: toplot.h,v 1.2 2006/10/22 22:52:37 jkleinj Exp $
 TOPLOT: TOPology pLOT
 toplot.h : Main routine
 Copyright (C) 2006  Jens Kleinjung
 GNU GPL License applies
================================================================================*/

#ifndef TOPLOT_H
#define TOPLOT_H

#include <assert.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/*____________________________________________________________________________*/
#define ALLATOM 1

/*____________________________________________________________________________*/
/* prototypes */
extern void *safe_malloc(size_t), *safe_realloc(void *, size_t);
extern float **allocate_matrix(unsigned int height, unsigned int width);
extern void deallocate_matrix(float **, unsigned int height);
extern void init_matrix(float **mat, unsigned int height, unsigned int width);
FILE *safe_open(const char *name, const char *mode);

#endif
