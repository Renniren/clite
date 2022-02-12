#ifndef CPP_LITE_HEADER
#define CPP_LITE_HEADER

//keywords
#define structure struct
#define immutable const
#define constant const

//types
#define integer int 
#define number int
#define dynamic auto
#ifndef _STRING_
#define string const char*
#endif

//characters/keywords
#define if if(
#define then ){
#define end }
#define begin {
#define pointer * 
#define addressof &
#define dereference *
#define dereferenced *

//shorthands
#define null NULL
#define else end else begin
#define success return 0;
#define failure return -1;
#define main int main() {
#define hold system("pause");
#define allocate(x) malloc(x)


#ifdef __cplusplus
#define use using namespace
#endif 


//filler/flair
#define in
#define range 
#define a 
#define named 
#define constructor

#ifdef __cplusplus
#define publically_inherits_from : public
#define privately_inherits_from : private
#endif


#endif