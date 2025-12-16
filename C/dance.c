#include <stdio.h>
#include <unistd.h>  // For usleep() - remove on Windows and use windows.h + Sleep()

const char *frames[] = {
    // Frame 1: Lean left, arms up/down
    "\n"
    "     o   \n"
    "    /|\\  \n"
    "    / \\  \n"
    "   /   \\ \n",

    // Frame 2: Center, arms out
    "\n"
    "     o    \n"
    "    /|\\\\  \n"
    "     |    \n"
    "    / \\   \n",

    // Frame 3: Lean right, arms up/down flipped
    "\n"
    "     o     \n"
    "   /|\\\\    \n"
    "   /   \\   \n"
    "  /     \\  \n",

    // Frame 4: Center, arms wide (party vibe!)
    "\n"
    "      o      \n"
    "   \\\\|//    \n"
    "     |      \n"
    "    / \\     \n",

    // Frame 5: Jump/kick left
    "\n"
    "     o     \n"
    "    /|     \n"
    "    /      \n"
    "   /       \n",

    // Frame 6: Jump/kick right
    "\n"
    "     o     \n"
    "     |\\    \n"
    "       \\   \n"
    "        \\  \n"
};

int main() {
    int num_frames = 6;
    while (1) {  // Infinite dance loop
        for (int i = 0; i < num_frames; i++) {
            printf("\033[2J\033[H");  // Clear screen and move cursor to top (ANSI escape)
            printf("%s", frames[i]);
            fflush(stdout);
            usleep(200000);  // 0.2 second delay - adjust for faster/slower dance
        }
    }
    return 0;
}
//commit for the second time and this time the files werent staged