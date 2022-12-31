// includes
#include <stdio.h>
#include <conio.h>

// terminal cursor commands
#define clear() printf("\033[H\033[J")
#define gotoxy(x,y) printf("\033[%d;%dH", (y), (x))

// key definitions
#define ARROW_KEYS 224

char* get_arrow_keys(int key) {
    switch((char) key) {
        case 'H':
            return "Up";
        case 'K':
            return "Left";
        case 'P':
            return "Down";
        case 'M':
            return "Right";
    }
}

int main () {
    int ch;
    clear();
    gotoxy(0,0);
    for(;;) {
        ch = getch();

        switch(ch) {
            case ARROW_KEYS:
                printf("%s\n", get_arrow_keys(getch()));
                break;
            case 17:
                return 0;
            default:
                break;
        }
    }

    return (0);
}
