#define STB_IMAGE_IMPLEMENTATION
#define STBI_ASSERT(x)
#include "stb_image.h"
#include <math.h>



void GetPixel(stbi_uc *image, size_t imageWidth, size_t x, size_t y, stbi_uc *r, stbi_uc *g, stbi_uc *b, stbi_uc *a) {
    *r = image[4 * (y * imageWidth + x) + 0];
    *g = image[4 * (y * imageWidth + x) + 1];
    *b = image[4 * (y * imageWidth + x) + 2];
    *a = image[4 * (y * imageWidth + x) + 3];
}

int main(int argc, char const *argv[])
{
    char *filename = "logo.bmp";
    int x, y, channels;

    stbi_uc * bmp = stbi_load(filename, &x, &y, &channels, STBI_rgb_alpha);
    printf("x: %d  y: %d channel: %d\n", x, y, channels);
    //printf("R: %d G: %d B: %d a: %d", bmp[0], bmp[1], bmp[2], bmp[3]);
    for (int j = 0; j < y; j++)
        {
            //printf("J: %d", j);
        for(int i = 3; i < x*4; i += 4){
            
            stbi_uc value = bmp[i+j*x];
            //printf("%d ", value);
            if (value > 0){
                printf("1");
            } else {

                printf(" ");
            }
        }
        printf("\n");
            /* code */
    }
    //GetPixel(bmp,x, )
    return 0;
}
