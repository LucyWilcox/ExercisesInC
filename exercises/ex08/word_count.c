/*
Word counting program by Lucy Wilcox
*/

#include <stdio.h>
#include <stdlib.h>
#include <glib.h>

int main() {
	const gchar* filename = "animalsofthepast.txt";
	gchar* contents = "animalsofthepast.txt";

	if (g_file_get_contents(filename, &contents, NULL, NULL)){
		g_strdelimit(contents, ".,;!@#$\"()_-+=?\n", ' ');
	}

	GHashTable* hashtable = g_hash_table_new(g_str_hash, g_str_equal);
	gchar** words = g_strsplit(contents, " ", -1);

	int i = 0;
	while(words[i] != NULL){
		int* val = malloc(sizeof(int));

		if(g_hash_table_contains(hashtable, words[i])){
			int* lval = g_hash_table_lookup(hashtable, words[i]);
			*val = *lval + 1;
			g_hash_table_replace(hashtable, words[i], val);
		} else {
			*val = 1;
			g_hash_table_insert(hashtable, words[i], val);		
		}
		i++;
	}
	g_hash_table_remove(hashtable, " ");

	GHashTableIter iter;
	gpointer key;
	int* value;
	g_hash_table_iter_init(&iter, hashtable);
	while(g_hash_table_iter_next(&iter, &key, &value)){
	    printf("word: %s, frequency: %d\n", key, *value);
	}

	g_free(contents);
	return 0;
}