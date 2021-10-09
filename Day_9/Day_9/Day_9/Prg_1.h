#define READ_TEXT_MODE "r"
#define WRITE_TEXT_MODE "w"
#define APPEND_TEXT_MODE "a"

FILE * open_file(char *file_name, char *mode);

int read_file_by_char(char *file_name);
int write_file_by_char(char *file_name,char *content);
int read_file_by_char_reverse(char *file_name);

int copy_file(char *src, char *dst);

int write_file_line(FILE *, char *file_name);
int read_file_line(FILE *, char *file_name);
void display(FILE *);

