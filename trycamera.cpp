#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include<opencv2/core/core.hpp>

using namespace cv;
int main(){
	VideoCapture cap(0);
	if(!cap.isOpened()){
        return -1;
	}
    Mat frame;
    bool stop = false;
    while(!stop){
        cap >> frame;
        imshow("vedio",frame);
        if(waitKey(30) >= 0){
            stop = true;
        }
    }
    return 0;
}
