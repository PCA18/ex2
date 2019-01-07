
#include <stdio.h>
#include <math.h>
#include <time.h>

double F_x( double x){
	double out = 4/(1+(x*x)); 
	return(out);
}

double sum_F_x( double N){
	int i;
	double delta_x = 1/N;
	double summe_pi_new = 0;
	double summe_pi_old = 0;
	double i_new = 0;
	for (i=0; i<N+1; i++){
		i_new = i *delta_x-(delta_x*0.5);
		//printf("delta_X = %lf",delta_x);
		//printf("summe old = %lf, i=%d\n",summe_pi_old , i);
		summe_pi_new = summe_pi_old + F_x(i_new)*delta_x;
		summe_pi_old = summe_pi_new; 
	}
	return(summe_pi_new);
}

int main () {
	clock_t begin,end;
	double t;
	int i;
	for (i=1000; i<10000001 ; i = i*10){
	begin = clock();
	printf("Pi(%d) = %.10lf\n",i, sum_F_x(i));
	end = clock();
	double clk = CLOCKS_PER_SEC;
	t = (end - begin)/clk;
	printf("Dauer fuer %d = %f s\n",i,t);
}
}

