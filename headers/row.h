#ifndef ROW_H
#define ROW_H
#include "table.h"
#include <stdint.h>

typedef struct {
  uint32_t id;
  char username[COLUMN_USERNAME_SIZE + 1];
  char email[COLUMN_EMAIL_SIZE + 1];
} Row;

void *row_slot(Table *table, uint32_t row_num);

#endif // ROW_H
