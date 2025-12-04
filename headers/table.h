#ifndef TABLE_H
#define TABLE_H

#include "pager.h"
#include <stdint.h>
typedef struct {
  uint32_t num_rows;
  Pager *pager;
} Table;

Table *db_open(const char *filename);
void db_close(Table *table);

#endif // TABLE_H
