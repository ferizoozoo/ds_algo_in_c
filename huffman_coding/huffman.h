
typedef struct {
    char letter;
    int weight;
} letter_weight_tuple;

letter_weight_tuple* construct_huffman_tree(char*);
void get_freq_weight_from_text(char* text);