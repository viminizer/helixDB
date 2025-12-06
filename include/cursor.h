#ifndef CURSOR_H
#define CURSOR_H

#include "table.h"
#include <stdbool.h>

typedef struct {
  Table *table;
  uint32_t page_num;
  uint32_t cell_num;
  bool end_of_table;
} Cursor;

/*
 * @returns a cursor to the beginning of the table
 */
Cursor *table_start(Table *table);

/*
 * @returns a pointer to the position described by the cursor
 */
void *cursor_value(Cursor *cursor);

/*
 * @move the cursor forward
 */
void cursor_advance(Cursor *cursor);

/*
 *Return the position of the given key.
 *If the key is not present, return the position
 *where it should be inserted
 */
Cursor *table_find(Table *table, uint32_t key);

#endif // !CURSOR_H
