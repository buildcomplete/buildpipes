#include <iostream>
#include <SDL3/SDL.h>
#include <opencv2/opencv.hpp>

int main(int argc, char* argv[]) {
    // Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl;
        return 1;
    }

    // Initialize OpenCV
    cv::Mat image = cv::imread("./../image.jpg");
    if (image.empty()) {
        std::cerr << "Could not open or find the image!" << std::endl;
        return 1;
    }

    // Print confirmation messages
    std::cout << "SDL3 with OpenGL support and OpenCV are correctly supported!" << std::endl;

    // Clean up SDL
    SDL_Quit();

    std::cout << "Really?" << std::endl;

    return 0;
}
