
// OpenCV 3 demo - Convert a color image to gray
#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>

int main() {
    const std::string img_file = "Lenna.png";

    // Check if we can open the file
    cv::Mat input = cv::imread(img_file, 1);
    if(!input.data) {
        std::cout << "Can't open file " << img_file << std::endl;
        return -1;
    }

    // Convert to gray
    cv::Mat output;
    cvtColor(input, output, cv::COLOR_BGR2GRAY);

    // Show the original and the result
    cv::namedWindow("Original image", cv::WINDOW_AUTOSIZE);
    cv::imshow("Original image", input);

    cv::namedWindow("Gray image", cv::WINDOW_AUTOSIZE);
    cv::imshow("Gray image", output);

    // Wait until the presses any key
    cv::waitKey(0);

    return 0;
}
