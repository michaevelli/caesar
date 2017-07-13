#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){

    char c = '0';
    int shift;
    int temp;

    if(argc == 1){
        shift = 0;
    } else {
        shift = atoi(argv[1]);
    }

    while(c != EOF){

        c = getchar();
        if(c == EOF){
            break;
        }
        if(c >= 'A' && c <= 'Z'){

            temp = (c-'A'+shift) % 26;
            if(temp < 0){
                temp += 26;
            }

            c = 'A'+temp;

            putchar(c);

        } else if(c >= 'a' && c <= 'z'){

            temp = (c-'a'+shift) % 26;

            if(temp < 0){
                temp += 26;
            }
            c = 'a'+temp;

            putchar(c);

        } else {
            putchar(c);
        }
    }

    return 0;
}
