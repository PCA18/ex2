
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <time.h>
//#include "utils.h"


int main(int argc, char* argv[]){
	int seed = strtol(argv[1], NULL, 10);
	srand(seed);
	int dim_z = strtol(argv[2], NULL, 10);
	int dim_s = strtol(argv[3], NULL, 10);
	double mat[dim_z][dim_s];
int z;
int s;	
	for (z=0; z<dim_z; z++){
		for ( s=0; s<dim_s; s++){
			mat[z][s]=rand()/rand();	}}
	
	double vec[dim_s];
	for ( s=0; s<dim_s; s++){
			vec[s]=rand()/rand();	}
	// A*B = C
	// c_zeile_spalte = sum_spalte(a_zeile_spalte*b_spalte)
	double erg_vec[dim_z];
int spl;
int zl;
	for(zl=0;zl<dim_z;zl++){
		erg_vec[zl]=0;
	}
	for(spl = 0; spl < dim_s; spl++){
		for( zl=0; zl<dim_z; zl++){
		erg_vec[zl] += mat[zl][spl]*vec[spl];	}}

	for(spl = 0; spl < dim_s; spl++){
		printf("%.10d \n", erg_vec[spl]);	}
	return(0);
	for ( zl=0; zl < dim_z;zl++){
		for( spl = 0; spl < dim_s; spl++){
			if(spl+1 ==dim_s){	printf("%d \n", mat[zl][spl]);	}
			else{	printf("%d ", mat[zl][spl]);	}}}
	
	//for( spl = 0; spl < dim_s; spl++){ printf("%d \n", vec[spl]);	}	
}

