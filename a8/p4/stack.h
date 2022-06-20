// struct definition //
struct stack{
    unsigned int count;
    int array[12]; //container
};

// function prototypes //
void push(int *data, int number, unsigned int *count);
void pop(int* data, unsigned int *count);
void printstack(int* data, unsigned int *count, unsigned int number);
void empty(int* data, unsigned int *count); 
unsigned int isEmpty(unsigned int* count);