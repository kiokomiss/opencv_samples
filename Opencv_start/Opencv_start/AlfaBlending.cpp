#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace cv;
/*
int main(int argc, char** argv)
{
	double alpha = 0.5; double beta; double input;

	Mat src1, src2, dst;

	/// Ask the user enter alpha
	std::cout << " Simple Linear Blender " << std::endl;
	std::cout << "-----------------------" << std::endl;
	std::cout << "* Enter alpha [0-1]: ";
	std::cin >> input;

	/// We use the alpha provided by the user if it is between 0 and 1
	if (input >= 0.0 && input <= 1.0)
	{
		alpha = input;
	}

	/// Read image ( same size, same type )
	src1 = imread("C:\\Users\\evelina.boytsova\\Pictures\\Love_TC011856.png");
	src2 = imread("C:\\Users\\evelina.boytsova\\Pictures\\Love_TC014738.png");

	if (!src1.data) { printf("Error loading src1 \n"); return -1; }
	if (!src2.data) { printf("Error loading src2 \n"); return -1; }

	/// Create Windows
	namedWindow("Linear Blend", 1);

	beta = (1.0 - alpha);
	addWeighted(src1, alpha, src2, beta, 0.0, dst);

	imshow("Linear Blend", dst);

	waitKey(0);
	return 0;
}
*/
/*
/// Global Variables
const int alpha_slider_max = 100;
int alpha_slider;
double alpha;
double beta;

/// Matrices to store images
Mat src1;
Mat src2;
Mat dst;

//
//@function on_trackbar
// @brief Callback for trackbar

void on_trackbar(int, void*)
{
	alpha = (double)alpha_slider / alpha_slider_max;
	beta = (1.0 - alpha);

	addWeighted(src1, alpha, src2, beta, 0.0, dst);

	imshow("Linear Blend", dst);
}

int main(int argc, char** argv)
{
	/// Read image ( same size, same type )
	src1 = imread(argv[1],1);
	src2 = imread(argv[2], 1);

	if (!src1.data) { printf("Error loading src1 \n"); return -1; }
	if (!src2.data) { printf("Error loading src2 \n"); return -1; }

	/// Initialize values
	alpha_slider = 0;

	/// Create Windows
	namedWindow("Linear Blend", 1);

	/// Create Trackbars
	char TrackbarName[50];
	sprintf(TrackbarName, "Alpha x %d", alpha_slider_max);

	createTrackbar(TrackbarName, "Linear Blend", &alpha_slider, alpha_slider_max, on_trackbar);

	/// Show some stuff
	on_trackbar(alpha_slider, 0);

	/// Wait until user press some key
	waitKey(0);
	return 0;
}
*/