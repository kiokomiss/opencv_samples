#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <stdlib.h>
#include <stdio.h>

using namespace cv;

/*
int main(int argc, char** argv)
{
	
	Mat src, dst;
	src = imread(argv[1]);

	Mat kern = (Mat_<char>(3, 3) << 0, -1, 0,
	                            	-1, 5, -1,
		                             0, -1, 0);

	Mat kern1 = (Mat_<float>(3, 3) << -0.1, -0.2, -0.1,
		                             -0.2, 2.2, -0.2,
		                             -0.1, -0.2, -0.1);

	Mat kern2 = (Mat_<char>(3, 3) << -1, -1, -1,
		                              0,  0,  0,
									  1,  1,  1);
	Mat kern3 = (Mat_<char>(3, 3) << -1, 0, 1,
		                             -2, 0, 2,
		                             -1, 0, 1);

	filter2D(src, dst, src.depth(), kern3, Point(-1,-1), 0, BORDER_REPLICATE);

	namedWindow("Source", WINDOW_AUTOSIZE);
	namedWindow("Destination", WINDOW_AUTOSIZE);

	imshow("Source", src);
	imshow("Destination", dst);

	while (true)
	{
		int c;
		c = waitKey(20);
		if ((char)c == 27)
		{
			break;
		}
	}
	destroyAllWindows();
}
*/