#include "scc.h"

void print_tktable(){
    for(int i = 0; i < tktable.count; i++) {
		TkWord *word = tktable.data[i];
		printf("tkcode:%d ", word->tkcode);
		printf("next:%d ", word->next);
		printf("spelling:%s ", word->spelling);
		printf("sym_struct:%d ", word->sym_struct);
		printf("sym_identifier:%d", word->sym_identifier);
		printf("\n");
	}
}