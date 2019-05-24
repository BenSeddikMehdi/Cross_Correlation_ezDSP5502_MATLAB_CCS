#ifndef N
#define N 48
#endif


//int a[N] = {1 ,2 ,3 ,4 ,5}, b[N] = {1 ,2 ,3 ,4, 0}; // N = 5
int z[2*N] ;


// Q8 form
int pureSinus[N] = {0,7,13,18,22,25,26,25,22,18,13,7,0,-7,
                    -13,-18,-22,-25,-26,-25,-22,-18,-13,-7,
                    0,7,13,18,22,25,26,25,22,18,13,7,0,-7,
                    -13,-18,-22,-25,-26,-25,-22,-18,-13,-7
};

int shiftedSinusPulse[N] = {0,0,7,13,18,22,25,26,25,22,18,13
                            ,7,0,-7,-13,-18,-22,-25,-26,-25,
                            -22,-18,-13,-7,0,7,13,18,22,25,26
                            ,25,22,18,13,7,0,-7,-13,-18,-22,
                            -25,-26,-25,-22,-18,-13
};


int xcorr( int x[], int y[]){
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
    }
    return 0;
}
