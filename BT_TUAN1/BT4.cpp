#include <opencv2/opencv.hpp>
#include <stdio.h>

using namespace cv;
using namespace std;
int main()
{
    int STT;
    cin >> STT;
    Mat source = (Mat_<uint8_t>(6,7)<<1,2,STT,4,5,6,7,
                                    8 ,9, 10, 11, STT, 13,14,
                                    (STT+1),16 ,17 ,18 ,19 ,(STT-1), 21,
                                    22, 23, STT, 25, 26, 27, 28,
                                    29, 30, 31, 32, 33, 34, 35,
                                   36, 37, 38, 39, 40, (STT+1),42);
    Mat dst;
    double minValue = 0;
    double maxValue = 255;
    long double otsu_thre = threshold(source,dst,minValue,maxValue,THRESH_OTSU);
    cout << "Otsu Thresh : " << otsu_thre<<endl;
    cout <<"OUTPUT" <<dst<<endl;
    return 0;
    
}
