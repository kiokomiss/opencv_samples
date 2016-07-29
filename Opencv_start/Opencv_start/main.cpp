/*#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include "opencv2/imgproc.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>


using namespace std;
using namespace cv;
int countFrame = 0;
VideoCapture capture;
Mat image,src;
int CurrentPosition = 0;

void printTextOnImage()
{
int height = 620;
int width = 440;

Point pt = Point(height / 4, width / 2);

Mat hw(height, width, CV_8UC3, Scalar::all(0));
Mat* phw = &hw;

putText(hw, "Hello World !", pt, CV_FONT_HERSHEY_COMPLEX, 1.0, CV_RGB(150, 0, 150), 1.0, 8.0);


namedWindow("Test", WINDOW_AUTOSIZE);

imshow("Test", hw);

waitKey(0);

hw.release();

destroyWindow("Test");
}

void myTrackbarCallback(int pos, void*) {
	pos = CurrentPosition;
	 //cvSetCaptureProperty(capture, CV_CAP_PROP_POS_FRAMES, pos);
	capture.set(CV_CAP_PROP_POS_FRAMES, pos);
	}

void drawTarget(int x, int y, int radius)
{
	circle(image, Point(x, y), radius, CV_RGB(250, 0, 0), 1, 8);
	line(image, Point(x - radius / 2, y - radius / 2), Point(x + radius / 2, y + radius / 2), CV_RGB(250, 0, 0), 1, 8);
	line(image, Point(x - radius / 2, y + radius / 2), Point(x + radius / 2, y - radius / 2), CV_RGB(250, 0, 0), 1, 8);
}

void myMouseCallback(int event, int x, int y, int flags, void*)
{
	int radius=30;
	switch (event) {
	case CV_EVENT_MOUSEMOVE:
		break;
	case CV_EVENT_LBUTTONDOWN:
		printf("%d x %d\n", x, y);
	    circle(src, Point(x, y), radius, CV_RGB(250, 0, 0), 1, 8);
		line(src, Point(x - radius / 2, y - radius / 2), Point(x + radius / 2, y + radius / 2), CV_RGB(250, 0, 0), 1, 8);
		line(src, Point(x - radius / 2, y + radius / 2), Point(x + radius / 2, y - radius / 2), CV_RGB(250, 0, 0), 1, 8);
		break;
	case CV_EVENT_LBUTTONUP:
		break;
	}
}

int main(int argc, char* argv[])
{
	char* filename = ((argc >= 2) ? argv[1] : "Lenna.jpg");
	image = imread(filename, 1);
    //src = image.clone();
	Mat dst(round(2 * image.rows), round(2 * image.cols), CV_8UC3);
	printf("[i] image: %s\n", filename);
	resize(image, dst, dst.size(), 0, 0, INTER_LANCZOS4);
	Mat dstROI = dst(Range(20, 100), Range(20, 300));
	namedWindow("Resized", CV_WINDOW_AUTOSIZE);
	namedWindow("ROI", CV_WINDOW_AUTOSIZE);
	//setMouseCallback("original", myMouseCallback, NULL);
	imshow("Resized", dst);
	imshow("ROI", dstROI);
	namedWindow("original", CV_WINDOW_AUTOSIZE);
	//setMouseCallback("original", myMouseCallback, NULL);
	imshow("original", image);
	//circle(src, Point(100, 100), 50, CV_RGB(250, 250, 250), 10, 8);
	//printf("[i] width:       %d pixels\n", image.cols);
	//printf("[i] height:      %d pixels\n", image.rows);


	while (1) {
		// показываем картинку
		imshow("Resized", dst);
		imshow("original", image);
		imshow("ROI", dstROI);
		char c = cvWaitKey(33);
		if (c == 27) { // если нажата ESC - выходим
			break;
		}
	}
	dst.release();
	src.release();
	image.release();
	destroyWindow("original");
	destroyWindow("Resized");
	destroyWindow("ROI");
/*
	char* filenameVideo = argv[2];
	namedWindow("Video");
	VideoCapture capture(filenameVideo);
	if (!capture.isOpened())  // check if we succeeded
		return -1;
	
	int frames = (int)capture.get(CV_CAP_PROP_FRAME_COUNT);
	cout<<"[i] total frames: " << frames<< endl;

	if (frames != 0) {
		createTrackbar("Position", "Video", &CurrentPosition, frames, myTrackbarCallback);
		}
	else
	{
		exit(1);
	}
	
	setMouseCallback("Video", myMouseCallback);
	while (1) {
		CurrentPosition++;
		capture.set(CV_CAP_PROP_POS_FRAMES, CurrentPosition);
		//cout << "[i] CurrentPosition: " << CurrentPosition << endl;
		// получаем следующий кадр
		capture >> image;
	   // здесь можно вставить
		// процедуру обработки
		// показываем кадр
		//CurrentPosition= (int)capture.get(CV_CAP_PROP_POS_FRAMES);
		imshow("Video", image);
		setTrackbarPos("Position", "Video", CurrentPosition);
		char c = cvWaitKey(33);
		if (c == 27) { // если нажата ESC - выходим
			break;
		}
		}

	capture.release();
	destroyWindow("Video");

	return 0;
}

*/
