#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char* title;
    char* username;
    char* password;
    size_t title_size;
    size_t username_size;
    size_t password_size;
    struct password_t* next;
    struct password_t* prev;
}password_t;

typedef struct
{
    password_t* head;
    password_t* tail;
    password_t* current;
    size_t list_size;
    char* public_key;
    size_t public_key_size;
    char* private_key;
    size_t public_key_size;
}PassList;

void init_pass_list(PassList* list);

void clear_list(PassList* list);
void clear_struct(password_t* t);

