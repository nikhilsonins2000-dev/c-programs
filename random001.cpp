#include <iostream>
#include <cmath>
#include <cstring>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    float A = 0, B = 0;
    float i, j;
    int k;
    float z[1760];
    char b[1760];

    // Clear the console screen once at the start
    cout << "\x1b[2J";

    while(true) {
        memset(b, 32, 1760); // Fill buffer with spaces
        memset(z, 0, 7040);  // Fill Z-buffer with 0

        // The math magic: Double loop for the torus (donut) surface
        for(j = 0; j < 6.28; j += 0.07) {
            for(i = 0; i < 6.28; i += 0.02) {
                float c = sin(i);
                float d = cos(j);
                float e = sin(A);
                float f = sin(j);
                float g = cos(A);
                float h = d + 2;
                float D = 1 / (c * h * e + f * g + 5);
                float l = cos(i);
                float m = cos(B);
                float n = sin(B);
                float t = c * h * g - f * e;

                // Calculate 3D coordinates projected to 2D screen
                int x = 40 + 30 * D * (l * h * m - t * n);
                int y = 12 + 15 * D * (l * h * n + t * m);
                int o = x + 80 * y;

                // Calculate "Luminance" (lighting) - how bright a spot is
                int N = 8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);

                // If point is on screen and closer to the viewer than previous point
                if(22 > y && y > 0 && x > 0 && 80 > x && D > z[o]) {
                    z[o] = D;
                    // Choose character based on lighting (.,-~:;=!*#$@)
                    b[o] = ".,-~:;=!*#$@"[N > 0 ? N : 0];
                }
            }
        }

        // Move cursor to top-left (using ANSI escape code to prevent flickering)
        cout << "\x1b[H";

        // Print the frame
        for(k = 0; k < 1760; k++) {
            putchar(k % 80 ? b[k] : 10);
            A += 0.00004; // Rotation speed A
            B += 0.00002; // Rotation speed B
        }

        // Small delay to control speed
        std::this_thread::sleep_for(std::chrono::milliseconds(30));
    }

    return 0;
}
