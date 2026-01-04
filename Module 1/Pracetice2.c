//Write the description of How to print in C
#include <stdio.h>
int main() {
printf("Escape Sequences:\n"); // \n for a new line
printf("New line example: Hello\\nWorld!\n");
printf("Tab example: Hello\\tWorld!\tTabbed\n");
printf("Backslash example: This is a backslash \\\n");
printf("Double quote example: She said, \"Hello World!\"\n");
// Combine them all together in one line:
printf("\nAll together:\n\t\"Hello\\nWorld!\"\n");
return 0;
}