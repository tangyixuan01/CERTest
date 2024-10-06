#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-28850;
short var_2 = (short)-1016;
unsigned long long int var_4 = 9354445343324833596ULL;
unsigned long long int var_5 = 12360475418878110923ULL;
unsigned short var_6 = (unsigned short)40190;
unsigned long long int var_7 = 8268165119761377107ULL;
unsigned short var_8 = (unsigned short)28208;
unsigned short var_9 = (unsigned short)15122;
unsigned long long int var_10 = 11014253978384834433ULL;
unsigned long long int var_13 = 1413646451013584582ULL;
unsigned long long int var_14 = 12280550680964834012ULL;
unsigned long long int var_16 = 15347931958600392774ULL;
unsigned long long int var_17 = 13703629485285545894ULL;
short var_18 = (short)10193;
unsigned short var_19 = (unsigned short)3390;
signed char var_20 = (signed char)-43;
unsigned long long int var_21 = 13828677048137500530ULL;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 16540153930035856774ULL;
unsigned long long int var_24 = 848440122850725516ULL;
unsigned int var_25 = 3768526388U;
int var_26 = -347874054;
unsigned char var_27 = (unsigned char)136;
signed char var_28 = (signed char)-43;
unsigned long long int var_29 = 1818744962958082021ULL;
short var_30 = (short)-14083;
signed char var_31 = (signed char)75;
signed char arr_1 [14] ;
unsigned char arr_2 [14] ;
unsigned long long int arr_3 [12] ;
signed char arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)-3;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)236;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 16516341045156322895ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (signed char)5;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
}
void test(short var_1, short var_2, unsigned long long int var_4, unsigned long long int var_5, unsigned short var_6, unsigned long long int var_7, unsigned short var_8, unsigned short var_9, unsigned long long int var_10, unsigned long long int var_13, unsigned long long int var_14, unsigned long long int var_16, unsigned long long int var_17, short var_18, unsigned short var_19, signed char arr_1 [14] , unsigned char arr_2 [14] , unsigned long long int arr_3 [12] , signed char arr_4 [12] );

int main() {
    init();
    test(var_1, var_2, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_13, var_14, var_16, var_17, var_18, var_19, arr_1 , arr_2 , arr_3 , arr_4 );
    checksum();
    printf("%llu\n", seed);
    return 0;
    return 0;
    return 0;
    return 0;
}
