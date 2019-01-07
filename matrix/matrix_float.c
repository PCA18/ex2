
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
	float mat[dim_z][dim_s];
	int z, s;
	
	
	for (z=0; z<dim_z; z++){
		for ( s=0; s<dim_s; s++){
			mat[z][s]=rand()*0.000000001;	}}
	
	float vec[dim_s];
	for (s=0; s<dim_s; s++){
			vec[s]=rand()*0.000000001;	}
	float erg_vec[dim_z];
	float temp;
	for(z=0; z<dim_z; z++){	
		for(s = 0; s < dim_s; s++){
			temp += mat[z][s]*vec[s];	}
			erg_vec[z] = temp;}
			
//	for(z = 0; z < dim_z; z++){
//		printf("erg_vec[%d] = %f \n",z, erg_vec[z]);	}
//	
//	for ( z=0; z < dim_z;z++){
//		for(s = 0; s < dim_s; s++){
//			if(s+1 ==dim_s){	printf("%f \n", mat[z][s]);	}
//			else{	printf("%f ", mat[z][s]);	}}}
//	
//	  for(s = 0; s < dim_s; s++){ printf("vec[%d] = %f \n",s, vec[s]);	}
	return(0);	
}

