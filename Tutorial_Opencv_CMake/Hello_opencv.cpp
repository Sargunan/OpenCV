#include <opencv2/opencv.hpp>

using namespace cv;

int main(void) {
	
	// Read image in GrayScale mode
	Mat image = imread("boat.jpg",0);

	// Save grayscale image
	imshow("Image",image);

	return 0;
}
