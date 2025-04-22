#define CB_CAPACITY1 100
#define CB_CAPACTIY2 1000
#define CB_CAPACITY3 10000

#define MAX_CAPACITY CB_CAPACITY1

#define CB_DATATYPE1 int
#define CB_DATATYPE2 // user defined type for the array

typedef struct {
    CB_DATATYPE1 arr[MAX_CAPACITY];
    void* head_ptr;
    void* tail_ptr;
} CB_TypeDef;

CB_TypeDef CB_Create();

