#ifndef N
#define N 5
#endif


long int a[N] = {1 ,2 ,3 ,4 ,5}, b[N] = {1 ,2 ,3 , 4, 0};
long int z[2*N] ;
/*
// Q8 form
long int pureSinus[N] = {0,7,13,18,22,25,26,25,22,18,13,7,0,-7,-13,
                    -18,-22,-25,-26,-25,-22,-18,-13,-7
};

long int shiftedSinusPulse[N] = {0,0,7,13,18,22,25,26,25,22,18,13,7,
                        0,-7,-13,-18,-22,-25,-26,-25,-22,-18,-13
};
*/

int xcorr(long int x[],long int y[]){
    FILE *myTest;
    myTest = fopen("MyTest.csv","w+");
    int l = 0, m = 0, k = 0;
    for ( l = -N; l < N; ++l)
    {	
    	k = l+N;
        z[k] = 0;
        for (m = 0; m < N; ++m)
        {
            if((l+m) < 0 || (l+m) >=N)
                continue;
            else
                z[k] += x[m]*y[l+m];
        }
        printf("z(%d) = %ld\n", k,z[k]);
        fprintf(myTest, "%d ,%ld\n", k, z[k]);

    }
    fclose(myTest);
    return 0;
}
