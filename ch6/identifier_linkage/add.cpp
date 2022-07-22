//static --> internal to this file i.e. it won't be accessible in any other file, including main.cpp
/*
static int add(int x, int y){
    return x + y;
}*/

//to make it global, remove the work static and it will become externally linked function
int add(int x, int y){
    return x + y;
}

/*
 * Global variables with internal linkage (by adding the storage class specifier 'static') are known as
 * internal variables.
 * constant variables are internal by default but can be made external by using the specifier extern
 * */