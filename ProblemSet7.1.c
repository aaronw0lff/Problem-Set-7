#include <stdio.h>
#include <stdlib.h>

/*
## Problem 7.1 - Plotting
- Create a file named `ProblemSet7.1.c`.
- Use the `popen()` and `fprintf()` function to plot the content of `sine.dat` (included in the problem set folder).
- The program should only plot the first 100 points of the `sine.dat`.
*/
int main(int argc, char *argv[]) {

FILE* sinplot = popen("gnuplot", "w");

if (sinplot) fprintf(sinplot, "plot \"sine.dat\" every ::0::100 with lines\n");
    fflush(sinplot);



int exit = 0;
    while (!exit)
    {
        scanf("%d", &exit);
    }

pclose(sinplot);
//system(gnuplot --persist -e "plot \"< head -100 sine.dat\" using 1:2 with lines");

return 0;
}