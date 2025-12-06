#include "cursor.h"
#include <stdint.h>
typedef enum { NODE_INTERNAL, NODE_LEAF } NodeType; // each node is a page

uint32_t *leaf_node_num_cells(void *node);

void *leaf_node_cell(void *node, uint32_t cell_num);

uint32_t *leaf_node_key(void *node, uint32_t cell_num);

void *leaf_node_value(void *node, uint32_t cell_num);

void initialize_leaf_node(void *node);

void leaf_node_insert(Cursor *cursor, uint32_t key, Row *value);

void print_leaf_node(void *node);

Cursor *leaf_node_find(Table *table, uint32_t page_num, uint32_t key);

NodeType get_node_type(void *node);

void set_node_type(void *node, NodeType type);
