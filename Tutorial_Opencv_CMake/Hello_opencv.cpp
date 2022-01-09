#include <opencv2/opencv.hpp>

using namespace cv;

int main(void) {
	
	// Read image in GrayScale mode
	Mat image = imread("boat.jpg");

	// Save grayscale image
	imshow("Image",image);

	waitkey(0);

	return 0;
}
