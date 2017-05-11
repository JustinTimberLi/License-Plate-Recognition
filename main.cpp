#include<opencv2\opencv.hpp>
using namespace cv;
int main()
{
	Mat picture = imread("ิมB0K999.jpg");//picture must be placed in project
	imshow("demo", picture);
	waitKey(20170511);
}